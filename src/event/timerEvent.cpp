#include "event.h"

lv_timer_t *System_Timer = NULL;

uint8_t System_Timer_Run_stats = 0;
uint8_t start_time = 0;

void startSystemTimerInit()
{
  if (System_Timer == NULL)
  {
    System_Timer = lv_timer_create(system_timer_handler, 1000, NULL);
  }
}

void startTimerEvent()
{
  start_time++;
  switch (start_time)
  {
  case 1:
    showThreadNoticeFrame("System", "加载桌面");
    break;
  case 3:
    load_scr_animation(&guider_ui, &Home_src_info, NULL);
    start_time = 0;
    break;
  }
}
// Home页面的数据刷新时间
uint8_t iindex = 3;
// 获取网络数据和传感器数据的刷新时间标志
uint8_t refulshSensorDataTime = 3;
/**
 * @brief Home页面数据刷新事件
 *
 */
void homeTimerEvent()
{
  if (iindex++ >= 5)
  {
    /*
     * update Time label
     */
    if (refulshSensorDataTime++ > 4)
    {
      refulshSensorDataTime = 0;
      sendSensorGetDataThreadSignal(true);
      sendGetNetWorkTimeThreadSignal(true);
    }
    char value[20];
    sprintf(value, "室温：%.0f°", temperature);
    lv_label_set_text(guider_ui.Home_functionbar_time_label, _timestr.c_str());
    lv_label_set_text(guider_ui.Home_home_time_label, _timestr.c_str());
    lv_label_set_text_fmt(guider_ui.Home_functionbar_date_label, "%s | %s", _datastr.c_str(), _weekstr.c_str());
    lv_label_set_text_fmt(guider_ui.Home_today_free_time_label, "今天还有%d小时", 24 - time_hour);
    // 饮水数据刷新
    uint16_t *drinkWaterTemp = &temp;
    lv_label_set_text_fmt(guider_ui.Home_temp_label, value);
    lv_label_set_text_fmt(guider_ui.Home_Drinked_label, "%d/3000ml", waterVolumeValue);
    lv_bar_set_value(guider_ui.Home_Next_drinking_water_bar, map(temp, 0, countdownToDrinkingWater / 60, 0, 100), LV_ANIM_OFF);
    if (*drinkWaterTemp > 60)
    {
      lv_label_set_text_fmt(guider_ui.Home_next_drink_water_time_label, "%dMin", (*drinkWaterTemp / 60) + 1);
    }
    else
    {
      lv_label_set_text_fmt(guider_ui.Home_next_drink_water_time_label, "%dS", *drinkWaterTemp);
    }
    // showThreadNoticeFrame("TestWaterTime", "%dS", countdownToDrinkingWater);
#ifdef LOG
    Serial.println(temperature);
    Serial.println(humidity);
#endif
    /*
     * update weather label
     */
    lv_label_set_text(guider_ui.Home_weather_location_label, weather_name.c_str());
    lv_label_set_text(guider_ui.Home_weather_code_label, weather_info.c_str());
    lv_label_set_text_fmt(guider_ui.Home_weather_temp_label, "%s°", weather_temperature.c_str());

    uint16_t freeMemory = map(ESP.getFreeHeap(), 0, ESP.getHeapSize(), 0, 100);
    lv_label_set_text_fmt(guider_ui.Home_free_memory_label, "剩余:%d KB", (uint16_t)(ESP.getFreeHeap() / 1024));
    lv_label_set_text_fmt(guider_ui.Home_now_use_memory_percentage_label, "占用:%d%%", 100 - freeMemory);

    lv_bar_set_value(guider_ui.Home_free_memory_bar, freeMemory, LV_ANIM_OFF);
    lv_bar_set_value(guider_ui.Home_home_sec_label, map(time_hour, 0, 24, 0, 60), LV_ANIM_OFF);
    lv_bar_set_value(guider_ui.Home_today_free_time_bar, map(24 - time_hour, 0, 24, 0, 60), LV_ANIM_OFF);
    iindex = 0;
  }

  /*
   * 更新状态栏数据
   */
  WiFi.status() == WL_CONNECTED ? (lv_label_set_text(guider_ui.Home_wifi_stats_label, "" LV_SYMBOL_WIFI ""))
                                : (lv_label_set_text(guider_ui.Home_wifi_stats_label, "" LV_SYMBOL_WARNING ""));
  buzzerVoiceEnabled ? (lv_label_set_text(guider_ui.Home_voice_stats_label, "" LV_SYMBOL_VOLUME_MAX ""))
                     : (lv_label_set_text(guider_ui.Home_voice_stats_label, "" LV_SYMBOL_MUTE ""));
  weatherStateCode == 1 ? (lv_label_set_text(guider_ui.Home_weather_stats_label, "" LV_SYMBOL_GPS ""), weatherStateCode = 111)
                        : (lv_label_set_text(guider_ui.Home_weather_stats_label, "" LV_SYMBOL_REFRESH ""), 0);
  getTimeCode == 1 ? (lv_label_set_text(guider_ui.Home_weather_stats_label, "" LV_SYMBOL_DOWNLOAD ""), getTimeCode = 111)
                   : (lv_label_set_text(guider_ui.Home_weather_stats_label, "" LV_SYMBOL_REFRESH ""), 0);
  /*
   * update home barValue
   */
  /*
   * update home barValue
   */

  /*
   * 测试通知是否正常
   */
  // showThreadNoticeFrame("Test", "%d", ESP.getFreeHeap());
}
// 更新今日时间进度
uint8_t cindex = 5;
/**
 * @brief 时钟页面数据刷新事件
 *
 */
void clockTimerEvent(void)
{
  lv_label_set_text(guider_ui.Clock_Clock_time_label, _timestr.c_str());
  if (cindex++ >= 10)
  {
    lv_bar_set_value(guider_ui.Clock_clock_sec_bar, map(time_hour, 0, 24, 0, 60), LV_ANIM_OFF);
  }
}
// 更新天气数据时间
uint8_t windex = 10;
/**
 * @brief 更新天气应用数据事件
 *
 */
void updateWeatherInfoTimerEvent(void)
{
  if (windex++ > 15)
  {
    updateWeatherInfo();
    windex = 0;
  }
}
uint8_t updateSensorDataTime = 3;
/**
 * @brief 更新Sensor页面的传感器数据
 *
 */
void updateSensorInfoTimerEvent(void)
{
  if (updateSensorDataTime++ > 5)
  {
    updateSensorDataTime = 0;
    sendSensorGetDataThreadSignal(true);
  }
  char value[20];
  sprintf(value, "%.0f", temperature);
  lv_label_set_text_fmt(guider_ui.Sensor_temp_label, value);
  sprintf(value, "%.0f", humidity);
  lv_label_set_text_fmt(guider_ui.Sensor_humi_label, value);
}
/**
 * @brief Timer事件轮询服务
 *
 * @param timer
 */
void system_timer_handler(lv_timer_t *timer)
{
  switch (System_Timer_Run_stats)
  {
  /*
   * 启动页
   */
  case StartSystimer:
  {
    startTimerEvent();
    break;
  }
  /*
   * 主页控件刷新
   */
  case HomeSystimer:
  {
    homeTimerEvent();
    break;
  }
  /*
   * 时钟锁屏
   */
  case WeatherSystimer:
  {
    updateWeatherInfoTimerEvent();
    break;
  }
  /*
   * 天气
   */
  case ClockSystimer:
  {
    clockTimerEvent();
    break;
  }
  /*
   * 传感器更新
   */
  case SensorSystimer:
  {
    updateSensorInfoTimerEvent();
    break;
  }
  case DevicSystimer:
  {
    if (restartSystemFlag)
    {
      --restartSystemTimeValue == 0 ? (lv_label_set_text_fmt(guider_ui.Device_shutdown_time_label, "Restart"), vTaskDelay(pdMS_TO_TICKS(100)), ESP.restart(), 0) : (0);
      lv_label_set_text_fmt(guider_ui.Device_shutdown_time_label, "%d", restartSystemTimeValue);
    }
    break;
  }
  case OtherSystimer:
  {

    break;
  }
  }
#ifdef LOG
  Serial.println(System_Timer_Run_stats);
#endif
}