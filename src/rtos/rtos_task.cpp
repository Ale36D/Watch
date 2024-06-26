#include "rtos_task.h"

TaskHandle_t lvgl_timer_task_handler;

EventGroupHandle_t systemInit = NULL;
EventGroupHandle_t getNetworkDate = NULL;
EventGroupHandle_t smartConfigWifi = NULL;
EventGroupHandle_t fftMusicGroupHandle = NULL;

QueueHandle_t noticeQueue = NULL;
QueueHandle_t getNetWorkQueue = NULL;
QueueHandle_t buzzerOpenQueue = NULL;
QueueHandle_t smartConfigWifiQueue = NULL;
QueueHandle_t fftMusicQueue = NULL;
QueueHandle_t drinkWaterQueue = NULL;
QueueHandle_t blueToolsQueue = NULL;
QueueHandle_t SensorQueue = NULL;
QueueHandle_t getNetWorkTimeQueue = NULL;
QueueHandle_t setRgbModeQueue = NULL;

EventBits_t noticeCreateBits;
EventBits_t wifiUxBits;
EventBits_t getNetWorkBits;
EventBits_t smartConfigWifiBits;
EventBits_t fftMusicBits;

TickType_t getNetworkdateTimeout = 1500;

/*
 * @brief 连接WIFi组
 */
void wifiBeginEventGroupInit(void *ptr)
{
  xTaskCreatePinnedToCore(wifiConnectTask, "wifiConnectTask", 4 * 1024, NULL, 1, NULL, 0);
  while (1)
  {
    vTaskDelay(10);
    vTaskDelete(NULL);
  }
}
/*
 * @brief 天气数据获取组
 */
bool getNetworkDateFlag = false;
uint8_t SchedulerTime = 0;
GetNetWorkDateFlag datefalg;
void networkWeatherEventGroupInit(void *ptr)
{
  while (1)
  {
    if (xQueueReceive(getNetWorkQueue, &datefalg, portMAX_DELAY) == pdPASS)
    {
      if (datefalg.GetFlag)
      {
#ifdef LOG
        Serial.println("启动天气获取事件组");
#endif
        if (WiFi.status() == WL_CONNECTED)
        {
          xTaskCreatePinnedToCore(getNowWeatherInfoTask, "getNowWeatherInfoTask", 4 * 1024, NULL, 2, NULL, 0);
          xTaskCreatePinnedToCore(getNextThreeDaysWeatherInfoTask, "getNextThreeDaysWeatherInfoTask", 4 * 1024, NULL, 2, NULL, 0);
        }
        else
        {
          showThreadNoticeFrame("天气", "没有网络");
        }

        if ((getNetWorkBits & GetNowWeatherTASK) && (getNetWorkBits & GetThreeDaysWeatherTASK))
        {
#ifdef LOG
          Serial.println("天气事件Over~");
#endif
          xEventGroupClearBits(getNetworkDate, GetNowWeatherTASK);
          xEventGroupClearBits(getNetworkDate, GetThreeDaysWeatherTASK);
          datefalg.GetFlag = false;
          SchedulerTime = 0;
          showThreadNoticeFrame("天气", "天气获取成功");
        }
      }
    }
  }
}
/**
 * @brief 初始化页面信息任务
 *
 * @param ptr
 */
void createScrInfoTask(void *ptr)
{

  while (1)
  {
    PageInfoInit();
    showThreadNoticeFrame("System", "PAGEPASS");
    vTaskDelete(NULL);
  }
}

void Task_Manager::Task_init()
{
  systemInit = xEventGroupCreate();
  getNetworkDate = xEventGroupCreate();
  smartConfigWifi = xEventGroupCreate();
  fftMusicGroupHandle = xEventGroupCreate();

  noticeQueue = xQueueCreate(16, sizeof(NoticeDate));
  getNetWorkQueue = xQueueCreate(3, sizeof(GetNetWorkDateFlag));
  buzzerOpenQueue = xQueueCreate(3, sizeof(openBuzzerFlag));
  smartConfigWifiQueue = xQueueCreate(1, sizeof(SmartConfigWifiFlag));
  fftMusicQueue = xQueueCreate(1, sizeof(fftMusicFlag));
  drinkWaterQueue = xQueueCreate(1, sizeof(drinkWater));
  blueToolsQueue = xQueueCreate(1, sizeof(blueTools));
  SensorQueue = xQueueCreate(1, sizeof(SensorGetFlag));
  getNetWorkTimeQueue = xQueueCreate(1, sizeof(getNetWorkTimeFlag));
  setRgbModeQueue = xQueueCreate(1, sizeof(setRgbModeFlag));

  if (noticeQueue != NULL)
  {
    xTaskCreatePinnedToCore(lvglEventTask, "lvgl_timer_task_handler", 4 * 1024, NULL, 5, &lvgl_timer_task_handler, 1);
    vTaskDelay(pdMS_TO_TICKS(1500));
    xTaskCreatePinnedToCore(lvglNoticeShowTask, "lvglNoticeShowTask", 4 * 1024, NULL, 1, NULL, 0);
    xTaskCreatePinnedToCore(createScrInfoTask, "createScrInfoTask", 2 * 1024, NULL, 2, NULL, 0);
    vTaskDelay(pdMS_TO_TICKS(1000));
    xTaskCreatePinnedToCore(wifiBeginEventGroupInit, "wifiBeginEventGroupInit", 2 * 1024, NULL, 1, NULL, 0);
  }
  if (getNetWorkQueue != NULL)
  {
    xTaskCreatePinnedToCore(networkWeatherEventGroupInit, "networkWeatherEventGroupInit", 4 * 1024, NULL, 2, NULL, 0);
    xTaskCreatePinnedToCore(getNetWorkDateScheduler, "getNetWorkDateScheduler", 4 * 1024, NULL, 2, NULL, 0);
  }
  if (buzzerOpenQueue != NULL)
  {
    xTaskCreatePinnedToCore(buzzerOpenTask, "buzzerOpenTask", 2 * 1024, NULL, 1, NULL, 0);
  }
  if (smartConfigWifiQueue != NULL)
  {
    xTaskCreatePinnedToCore(smartConfigWifiScheduler, "smartConfigWifiScheduler", 2 * 1024, NULL, 2, NULL, 0);
  }
  if (fftMusicQueue != NULL)
  {
    xTaskCreatePinnedToCore(fftComputeScheduler, "fftComputeScheduler", 2 * 1024, NULL, 1, NULL, 0);
  }
  if (drinkWaterQueue != NULL)
  {
    xTaskCreatePinnedToCore(drinkWaterScheduler, "drinkWaterScheduler", 2 * 1024, NULL, 2, NULL, 0);
  }
  if (blueToolsQueue != NULL)
  {
    // xTaskCreatePinnedToCore(blueToolsScheduler, "blueToolsScheduler", 5 * 1024, NULL, 1, NULL, 1);
  }
  if (SensorQueue != NULL)
  {
    xTaskCreatePinnedToCore(getSensorTask, "getSensorTask", 2 * 1024, NULL, 2, NULL, 0);
  }
  if (getNetWorkTimeQueue != NULL)
  {
    xTaskCreatePinnedToCore(getNetworkTimeScheduler, "getNetworkTimeScheduler", 4 * 1024, NULL, 3, NULL, 0);
  }
  if (setRgbModeQueue != NULL)
  {
    xTaskCreatePinnedToCore(rgbComputeScheduler, "rgbComputeScheduler", 2 * 1024, NULL, 2, NULL, 0);
  }
  // xTaskCreatePinnedToCore(taskListThreadTask, "taskListThreadTask", 4 * 1024, NULL, 3, NULL, 0);

#ifdef LOG
  showThreadNoticeFrame("System", "TASK PASS");
#endif
}
// char buffer[2048];
// uint8_t taskInfoListTime = 0;
// void taskListThreadTask(void *ptr)
// {
//   while (1)
//   {
//     vTaskDelay(pdMS_TO_TICKS(5));
//     if (taskInfoListTime++ > 200)
//     {
//       vTaskList(buffer);
//       Serial.println(buffer);
//       taskInfoListTime = 0;
//     }
//   }
// }
/*
 * @brief lvgl刷新线程
 */
void lvglEventTask(void *ptr)
{
  while (1)
  {
    lv_task_handler();
    vTaskDelay(pdMS_TO_TICKS(10));
  }
}
/*
 * @brief 显示通知
 */
void lvglNoticeShowTask(void *ptr)
{
  NoticeDate date;
  noticeCreateBits = xEventGroupSetBits(systemInit, NOTICETASK);
  TickType_t noticeTimeout = 1500;
  while (1)
  {
    if (xQueueReceive(noticeQueue, &date, noticeTimeout) == pdPASS)
    {
      showNoticeStr(20, date.noticeTitle, date.noticeMessage);
      vTaskDelay(pdMS_TO_TICKS(1000));
      ui_move_animation(NoticeFrame, 500, 0, NOTICE_FRAME_LEFT, NoticeTopPos_Y, &lv_anim_path_bounce, 0, 0, 0, 0, NULL, finish_NoticeFrame, NULL);
      ui_scale_animation(NoticeFrame, 500, 0, Notice_Width, Notice_Begin_Height, &lv_anim_path_overshoot, 0, 0, 0, 0, NULL, NULL, NULL);
    }
  }
}
uint8_t wifiConnectOvertime = 0;
/*
 * @brief 开机监测是不是连上了WIFI
 */
void wifiConnectTask(void *ptr)
{
  WiFi.begin();
  NoticeDate date;
  strcpy(date.noticeTitle, "System WiFi");
  TickType_t timeout = 1000;
  while (1)
  {
    vTaskDelay(pdMS_TO_TICKS(1000));
    if (noticeCreateBits & NOTICETASK)
    {
      if (WiFi.status() == WL_CONNECTED)
      {
        wifiUxBits = xEventGroupSetBits(systemInit, WIFITASKOK);
      }
      else
      {
        wifiConnectOvertime++ > 10 ? (wifiConnectOvertime = 0, wifiUxBits = xEventGroupSetBits(systemInit, WIFITASKNO), 0)
                                   : (0);
      }
      if (wifiUxBits & WIFITASKOK)
      {
        strcpy(date.noticeMessage, "WiFi 连接成功");
        xQueueSend(noticeQueue, &date, timeout);
        startSystemTimerInit();
        sendGetNetWorkTimeThreadSignal(true);
        vTaskDelete(NULL);
      }
      if (wifiUxBits & WIFITASKNO)
      {
        strcpy(date.noticeMessage, "WiFi 连接失败");
        xQueueSend(noticeQueue, &date, timeout);
        sendSmartConfigWiFiThreadSignal(true);
        startSystemTimerInit();
        vTaskDelete(NULL);
      }
    }
  }
}

uint8_t getTimeCode = 0;
uint8_t getTimeCount = 0;
/*
 * @brief 获取时间线程
 */
void getNetworkTimeScheduler(void *ptr)
{
  getNetWorkTimeFlag timeflag;
  while (1)
  {
    if (xQueueReceive(getNetWorkTimeQueue, &timeflag, portMAX_DELAY) == pdPASS)
      if (wifiUxBits & WIFITASKOK)
      {
        xTaskCreatePinnedToCore(getNetworkTimeTask, "getNetworkTimeTask", 2 * 1024, NULL, 3, NULL, 0);
      }
  }
}
uint8_t getNetWorkFailureCount = 0;
void getNetworkTimeTask(void *ptr)
{
#ifdef LOG
  Serial.println("开始获取时间");
#endif
  while (1)
  {
    getTimeCode = GetTime();
    vTaskDelay(pdMS_TO_TICKS(1000));
    if (getTimeCode != 1)
    {

      if (getTimeCode == 0)
      {
        if (getNetWorkFailureCount++ > 3)
        {
          showThreadNoticeFrame("时间解析失败", "建议重启设备!");
          getNetWorkFailureCount = 0;
        }
        else
        {
          showThreadNoticeFrame("System", "时间解析失败");
        }
      }
      if (getTimeCode == 2)
      {
        showThreadNoticeFrame("System", "无网络");
      }
    }
    vTaskDelete(NULL);
  }
}
/*
 * @brief 获取网络信息调度器
 */
void getNetWorkDateScheduler(void *ptr)
{
  while (1)
  {
    if (SchedulerTime++ > 120 && datefalg.GetFlag == false)
    {
      SchedulerTime = 0;
      sendgetNetWorkSendThreadSignal(true);
    }
    vTaskDelay(pdMS_TO_TICKS(1000));
  }
}
uint8_t weatherStateCode = 255;
/*
 * @brief 获取现在天气
 */
void getNowWeatherInfoTask(void *ptr)
{

  while (1)
  {
    if (getNowWeatherInfo() == 1)
    {
      weatherStateCode = 1;
      getNetWorkBits = xEventGroupSetBits(getNetworkDate, GetNowWeatherTASK);
      vTaskDelete(NULL);
    }
    else
    {
      showThreadNoticeFrame("Weather", "error");
      getNetWorkBits = xEventGroupSetBits(getNetworkDate, GetNowWeatherTASK);
      vTaskDelete(NULL);
    }
  }
}
/*
 * @brief 获取未来三天天气
 */
void getNextThreeDaysWeatherInfoTask(void *ptr)
{
  while (1)
  {
    getNetWorkBits = xEventGroupWaitBits(getNetworkDate, GetNowWeatherTASK, pdFALSE, pdTRUE, getNetworkdateTimeout);
    if (getNextThreeDaysWeatherInfo() == 1 && WiFi.status() == WL_CONNECTED)
    {
      weatherStateCode = 1;
      getNetWorkBits = xEventGroupSetBits(getNetworkDate, GetThreeDaysWeatherTASK);
      vTaskDelete(NULL);
    }
    else
    {
      showThreadNoticeFrame("Weather", "error");
      getNetWorkBits = xEventGroupSetBits(getNetworkDate, GetThreeDaysWeatherTASK);
      vTaskDelete(NULL);
    }
  }
}
/*
 * @brief 网络配置调度器
 */
void smartConfigWifiScheduler(void *ptr)
{
  SmartConfigWifiFlag flag;
  while (1)
  {
    if (xQueueReceive(smartConfigWifiQueue, &flag, portMAX_DELAY) == pdPASS)
    {
#ifdef LOG
      Serial.println("启动配置网络");
#endif
      if (!(smartConfigWifiBits & SmartConfigWiFiTASK))
      {
        xTaskCreatePinnedToCore(smartConfigTask, "smartConfigTask", 2 * 1024, NULL, 3, NULL, 0);
        showThreadNoticeFrame("WiFi", "请使用APP配网");
      }
      else
      {
        showThreadNoticeFrame("Error", "存在配网线程");
      }
    }
  }
}
/*
 * @brief 使用手机配置网络
 */
void smartConfigTask(void *ptr)
{
  WiFi.disconnect(true);
  WiFi.mode(WIFI_STA);
  WiFi.beginSmartConfig();
  smartConfigWifiBits = xEventGroupSetBits(smartConfigWifi, SmartConfigWiFiTASK);
#ifdef LOG
  Serial.println("网络配置初始化完成");
#ifdef LOG
  Serial.println("运行配置网络");
#endif
#endif
  while (1)
  {
    if (WiFi.smartConfigDone())
    {
      WiFi.setAutoConnect(true);
      xTaskCreatePinnedToCore(wifiBeginEventGroupInit, "wifiBeginEventGroupInit", 2 * 1024, NULL, 3, NULL, 0);
      showThreadNoticeFrame("WiFi", "网络配置成功");
#ifdef LOG
      Serial.println("网络配置成功");
#endif
      smartConfigWifiBits = xEventGroupClearBits(smartConfigWifi, smartConfigWifiBits);
      vTaskDelete(NULL);
    }
    vTaskDelay(pdMS_TO_TICKS(10));
  }
}
/*
 * @brief 蜂鸣器线程
 */
void buzzerOpenTask(void *ptr)
{
  openBuzzerFlag bzflag;
  TickType_t timeOut = 400;
  while (1)
  {
    if (xQueueReceive(buzzerOpenQueue, &bzflag, portMAX_DELAY) == pdPASS)
    {
      if (bzflag.openBuzeerVoice)
      {
        if (bzflag.buzzerOpenFlag)
        {
          tone(BUZZER_PIN, 950);
          vTaskDelay(pdMS_TO_TICKS(200));
          noTone(BUZZER_PIN);
        }
        if (bzflag.buzzerMusicFlag)
        {
          for (uint8_t i = 0; i < 5; i++)
          {
            randomSeed(RANDOMSEDDPIN);
            tone(BUZZER_PIN, map(random(100), 0, 100, 100, 1000));
            vTaskDelay(pdMS_TO_TICKS(200));
            noTone(BUZZER_PIN);
          }
          bzflag.buzzerMusicFlag = false;
        }
      }
    }
  }
}

volatile float temperature = 0.00;
volatile float humidity = 0.00;
#define DHTPIN 13
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
/**
 * @brief 获取温湿度线程
 *
 * @param ptr 传递的数据
 */
void getSensorTask(void *ptr)
{
  dht.begin();
  SensorGetFlag sensorflag;
  while (1)
  {
    if (xQueueReceive(SensorQueue, &sensorflag, portMAX_DELAY))
    {
      temperature = dht.readTemperature();
      humidity = dht.readHumidity();
      vTaskDelay(pdMS_TO_TICKS(3000));
#ifdef LOG
      Serial.println(temperature);
      Serial.println(humidity);
#endif
    }
  }
}
fftMusicFlag fftflag;
/**
 * @brief FFT变换调度线程
 *
 * @param ptr
 */
void fftComputeScheduler(void *ptr)
{
  fftInit(&barUpdateValueInfo, updateMusicBarValue, updateFFTSignalDisplay);
  fftflag.fftMusicEnabled = false;
  while (1)
  {
    if (xQueueReceive(fftMusicQueue, &fftflag, portMAX_DELAY) == pdPASS)
    {
      if (fftflag.fftMusicEnabled)
      {
        xTaskCreatePinnedToCore(fftComputeThreadTask, "fftComputeThreadTask", 2 * 1024, NULL, 2, NULL, 0);
      }
    }
  }
}
uint8_t adcTime = 0;
/**
 * @brief FFT变换运行线程
 *
 * @param ptr
 */
void fftComputeThreadTask(void *ptr)
{
  while (1)
  {
    vTaskDelay(pdMS_TO_TICKS(100));
    if (fftflag.fftMusicEnabled)
    {
      getObtainSpectrumData(&barUpdateValueInfo);
    }
    else
    {
      turnOffLEDLights();
      vTaskDelete(NULL);
    }
  }
}
setRgbModeFlag setrgbModeFlag;
/**
 * @brief RGB显示模式管理线程
 *
 * @param ptr
 */
void rgbComputeScheduler(void *ptr)
{
  setrgbModeFlag.openFlag = false;
  setrgbModeFlag.isCreateNewThreadFlag = false;
  setrgbModeFlag.Mode_ID = 3;
  rgbInitAnimation();
  while (1)
  {
    if (xQueueReceive(setRgbModeQueue, &setrgbModeFlag, portMAX_DELAY) == pdPASS)
    {
      if (setrgbModeFlag.openFlag && setrgbModeFlag.isCreateNewThreadFlag)
      {
        xTaskCreatePinnedToCore(rgbComputeThreadTask, "rgbComputeThreadTask", 2 * 1024, NULL, 3, NULL, 0);
      }
    }
  }
}
/**
 * @brief RGB 显示模式运行线程
 *
 * @param ptr
 */
void rgbComputeThreadTask(void *ptr)
{

  while (1)
  {
    if (setrgbModeFlag.openFlag)
    {
      switch (setrgbModeFlag.Mode_ID)
      {
      case 1:
        rainbow();
        vTaskDelay(pdMS_TO_TICKS(30));
        break;
      case 2:
        setRGB(setrgbModeFlag.LightValue, setrgbModeFlag.RValue, setrgbModeFlag.GValue, setrgbModeFlag.BValue);
        vTaskDelay(pdMS_TO_TICKS(30));
      case 3:
        turnOffLEDLights();
        vTaskDelay(pdMS_TO_TICKS(30));
        break;
      }
    }
    else
    {
      showThreadNoticeFrame("RGB", "关闭任务!");
      turnOffLEDLights();
      vTaskDelete(NULL);
    }
  }
}
drinkWater waterdate;
uint16_t countdownToDrinkingWater = 3600;
uint16_t temp = 0;
/**
 * @brief 喝水提示调度线程
 *
 * @param ptr
 */
void drinkWaterScheduler(void *ptr)
{
  temp = countdownToDrinkingWater;
  xTaskCreatePinnedToCore(drinkWaterTimerTask, "drinkWaterTimerTask", 2 * 1024, NULL, 2, NULL, 0);
  while (1)
  {
    if (xQueueReceive(drinkWaterQueue, &waterdate, portMAX_DELAY) == pdPASS)
    {
      temp = waterdate.nextDrinkWaterTime;
      countdownToDrinkingWater = waterdate.nextDrinkWaterCacheTime;
      showThreadNoticeFrame("Water", "%dMin后提醒", temp / 60);
    }
  }
}
/**
 * @brief 喝水提示执行线程
 *
 * @param ptr
 */
void drinkWaterTimerTask(void *ptr)
{
  openBuzzerFlag bbuzerFlag;
  while (1)
  {
    vTaskDelay(pdMS_TO_TICKS(900));
    if (temp == 180)
    {
      showThreadNoticeFrame("Water", "请接水,%dMin后提醒", temp / 60);
    }
    if (temp-- == 0)
    {
      temp = countdownToDrinkingWater;
      showThreadNoticeFrame("Water", "该喝水啦！");
      bbuzerFlag.buzzerOpenFlag = false;
      bbuzerFlag.buzzerMusicFlag = true;
      xQueueSend(buzzerOpenQueue, &bbuzerFlag, 1500);
    }
  }
}
void blueToolsScheduler(void *ptr)
{
  blueTools bluetools;
  BlueToolsEvent event;
  event.BlueInit();
  while (1)
  {
    if (xQueueReceive(blueToolsQueue, &bluetools, portMAX_DELAY) == pdPASS)
    {
      if (event.BlueConnectFLAG())
      {
        event.BlueToolsKeyEvent(bluetools.blueToolsKeyValue);
      }
      else
      {
        showThreadNoticeFrame("BlueTools", "蓝牙没有连接");
      }
    }
  }
}
void blueToolsConnectTask(void *ptr)
{
  while (1)
  {
  }
}
