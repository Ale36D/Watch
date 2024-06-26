#include "event.h"

void waitNetWorkGetDateAnim(lv_anim_t *anim)
{
  ui_move_animation(guider_ui.weather_weather_view, 1000, 700, 10, 50, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
  ui_move_animation(guider_ui.weather_weather_load_frame, 1000, 500, -170, 120, &lv_anim_path_overshoot, 0, 0, 0, 0, NULL, NULL, NULL);
  showThreadNoticeFrame("天气", "正在获取");
}
void updateWeatherInfo(void)
{
  lv_label_set_text_fmt(guider_ui.weather_temp_label, "%s°", weather_temperature.c_str());
  lv_label_set_text(guider_ui.weather_city_name_label, weather_name.c_str());
  lv_label_set_text(guider_ui.weather_text_night_label, weather_info.c_str());
  lv_label_set_text(guider_ui.weather_high_num_label, threeWeatherTempHighDate[0].c_str());
  lv_label_set_text(guider_ui.weather_low_num_label, threeWeatherTempLowDate[0].c_str());
  lv_label_set_text(guider_ui.weather_humi_num_label, threeWeatherHumiDate[0].c_str());
  lv_label_set_text(guider_ui.weather_precip_num_label, threeWeatherPrecipDate[0].c_str());
  lv_label_set_text_fmt(guider_ui.weather_wind_speed_label, "%skm/h", threeWeatherWindSpeedDate[0].c_str());
  lv_label_set_text_fmt(guider_ui.weather_wind_scale_label, "%s级", threeWeatherWindScaleDate[0].c_str());
  lv_label_set_text_fmt(guider_ui.weather_text_day_one_label, "%s°", threeWeatherwindDirectionDegreeDate[0].c_str());
  lv_label_set_text_fmt(guider_ui.weather_update_weather_time_label, "更新时间\n%s", weather_update_time.c_str());
  lv_label_set_text_fmt(guider_ui.weather_text_day_one_label, threeWeatherTextDaysDate[0].c_str());
  lv_label_set_text_fmt(guider_ui.weather_text_day_two_label, threeWeatherTextDaysDate[1].c_str());
  lv_label_set_text_fmt(guider_ui.weather_text_day_three_label, threeWeatherTextDaysDate[2].c_str());
  lv_label_set_text_fmt(guider_ui.weather_hl_one_label, "%s\n%s", threeWeatherTempHighDate[0].c_str(), threeWeatherTempLowDate[0].c_str());
  lv_label_set_text_fmt(guider_ui.weather_hl_two_label, "%s\n%s", threeWeatherTempHighDate[1].c_str(), threeWeatherTempLowDate[1].c_str());
  lv_label_set_text_fmt(guider_ui.weather_hl_three_label, "%s\n%s", threeWeatherTempHighDate[2].c_str(), threeWeatherTempLowDate[2].c_str());
  lv_label_set_text_fmt(guider_ui.weather_rain_one_label, threeWeatherRainfallDate[0].c_str());
  lv_label_set_text_fmt(guider_ui.weather_rain_two_label, threeWeatherRainfallDate[1].c_str());
  lv_label_set_text_fmt(guider_ui.weather_rain_three_label, threeWeatherRainfallDate[2].c_str());
}

static void weather_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_SCREEN_LOADED:
  {
    ui_move_animation(guider_ui.weather_weather_title, 1000, 0, 70, 10, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
    ui_scale_animation(guider_ui.weather_weather_load_frame, 1000, 0, 120, 60, &lv_anim_path_overshoot, 0, 0, 0, 0, NULL, waitNetWorkGetDateAnim, NULL);
    break;
  }
  case LV_EVENT_GESTURE:
  {
    lv_dir_t dir = lv_indev_get_gesture_dir(lv_indev_get_act());
    switch (dir)
    {
    case LV_DIR_RIGHT:
    {
      lv_indev_wait_release(lv_indev_get_act());
      load_scr_animation(&guider_ui, &last_src_info, &Weather_src_info);
      break;
    }
    }
    break;
  }
  default:
    break;
  }
}
/*
 * @brief 创建天气页面
 */
void createWeatherView(lv_ui *ui)
{
  setup_scr_weather(ui);
  lv_obj_add_flag(guider_ui.weather_weather_view, LV_OBJ_FLAG_EVENT_BUBBLE);

  updateWeatherInfo();
  lv_obj_add_event_cb(ui->weather, weather_event_handler, LV_EVENT_ALL, ui);
  sendgetNetWorkSendThreadSignal(true);
}