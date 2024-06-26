#include "event.h"

void switchClockImg()
{
  randomSeed(analogRead(RANDOMSEDDPIN));
  lv_img_set_src(guider_ui.Clock_clock_img, &image_sources[random(19)]);
}
void showClockTipsNotice(lv_anim_t *anim)
{
  showThreadNoticeFrame("表盘", "长按更换表盘");
  switchClockImg();
}
static void Clock_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_SCREEN_LOADED:
  {
    ui_move_animation(guider_ui.Clock_clock_img, 500, 0, 0, 0, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, showClockTipsNotice, NULL);
    ui_scale_animation(guider_ui.Clock_clock_img, 500, 0, 240, 240, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
    break;
  }
  case LV_EVENT_LONG_PRESSED:
  {
    lv_obj_set_size(guider_ui.Clock_clock_img, 1, 1);
    lv_obj_set_pos(guider_ui.Clock_clock_img, 120, 120);
    ui_move_animation(guider_ui.Clock_clock_img, 500, 0, 0, 0, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
    ui_scale_animation(guider_ui.Clock_clock_img, 500, 0, 240, 240, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
    switchClockImg();
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
      load_scr_animation(&guider_ui, &last_src_info, &Apps_src_info);
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
 * @brief 创建时钟页面
 */
void creatClockView(lv_ui *ui)
{
  setup_scr_Clock(ui);
  lv_obj_add_flag(guider_ui.Clock_clock_img, LV_OBJ_FLAG_EVENT_BUBBLE);
  lv_obj_add_event_cb(ui->Clock, Clock_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_flag(ui->Clock_clock_img, LV_OBJ_FLAG_EVENT_BUBBLE);
}

/*--------------------------------------------------------*/

static void calendar_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_SCREEN_LOADED:
  {
    ui_move_animation(guider_ui.calendar_calendar_title_label, 500, 0, 70, 10, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
    ui_move_animation(guider_ui.calendar_calendar_view, 500, 0, 10, 40, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
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
      load_scr_animation(&guider_ui, &last_src_info, &Apps_src_info);
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
 * @brief 创建日历页面
 */
void createCanlenderView(lv_ui *ui)
{
  setup_scr_calendar(ui);
  lv_obj_add_event_cb(ui->calendar, calendar_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_flag(guider_ui.calendar_calendar_view, LV_OBJ_FLAG_EVENT_BUBBLE);
}

static void about_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_SCREEN_LOADED:
  {
    ui_move_animation(guider_ui.about_about_title_label, 500, 0, 70, 10, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
    ui_move_animation(guider_ui.about_about_frame, 500, 0, 0, 40, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
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
      load_scr_animation(&guider_ui, &last_src_info, &Apps_src_info);
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
 * @brief 创建关于页面
 */
void createAboutView(lv_ui *ui)
{
  setup_scr_about(ui);
  lv_obj_add_event_cb(ui->about, about_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_flag(guider_ui.about_about_frame, LV_OBJ_FLAG_EVENT_BUBBLE);
}
static void Sensor_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_SCREEN_LOADED:
  {
    ui_move_animation(guider_ui.Sensor_sensor_title_label, 500, 0, 70, 10, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
    ui_move_animation(guider_ui.Sensor_sensor_frame, 500, 0, 10, 50, &lv_anim_path_overshoot, 0, 0, 0, 0, NULL, NULL, NULL);
    ui_scale_animation(guider_ui.Sensor_sensor_frame, 500, 0, 220, 220, &lv_anim_path_bounce, 0, 0, 0, 0, NULL, NULL, NULL);
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
      load_scr_animation(&guider_ui, &last_src_info, &Apps_src_info);
      break;
    }
    }
    break;
  }
  default:
    break;
  }
}
static void Sensor_lamp_sw_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    lv_obj_t *status_obj = lv_event_get_target(e);
    if (lv_obj_has_state(status_obj, LV_STATE_CHECKED))
    {
      ui_move_animation(guider_ui.Sensor_funtion_lamp_frame, 500, 0, 0, 0, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
    }
    break;
  }
  default:
    break;
  }
}
static void Sensor_funtion_lamp_frame_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    ui_move_animation(guider_ui.Sensor_funtion_lamp_frame, 500, 0, -240, 0, &lv_anim_path_ease_out, 0, 0, 0, 0, NULL, NULL, NULL);
    lv_obj_add_state(guider_ui.Sensor_lamp_sw, LV_STATE_DEFAULT);
    break;
  }
  default:
    break;
  }
}
/*
 * @brief 创建传感器数据查看页面
 */
void createSensorView(lv_ui *ui)
{
  setup_scr_Sensor(ui);
  lv_obj_add_event_cb(ui->Sensor, Sensor_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_event_cb(ui->Sensor_lamp_sw, Sensor_lamp_sw_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_event_cb(ui->Sensor_funtion_lamp_frame, Sensor_funtion_lamp_frame_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_flag(guider_ui.Sensor_sensor_frame, LV_OBJ_FLAG_EVENT_BUBBLE);
  showThreadNoticeFrame("Sensor", "正在更新数据...");
}
static void MQTT_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_SCREEN_LOADED:
  {
    ui_scale_animation(guider_ui.MQTT_mqtt_frame, 500, 0, 220, 220, &lv_anim_path_overshoot, 0, 0, 0, 0, NULL, NULL, NULL);
    ui_move_animation(guider_ui.MQTT_mqtt_title_label, 500, 0, 70, 10, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
    ui_move_animation(guider_ui.MQTT_mqtt_enable_sw, 500, 500, 90, 110, &lv_anim_path_overshoot, 0, 0, 0, 0, NULL, NULL, NULL);
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
      load_scr_animation(&guider_ui, &last_src_info, &Mqtt_src_info);
      break;
    }
    }
    break;
  }
  default:
    break;
  }
}
static void MQTT_mqtt_enable_sw_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    lv_obj_t *status_obj = lv_event_get_target(e);
    if (lv_obj_has_state(status_obj, LV_STATE_CHECKED) ? 1 : 0)
    {
      lv_obj_set_style_text_color(guider_ui.MQTT_mqtt_stats_show_label, lv_color_hex(0x2FDAAE), LV_PART_MAIN | LV_STATE_DEFAULT);
      lv_label_set_text(guider_ui.MQTT_mqtt_stats_show_label, "已连接");
    }
    else
    {
      lv_obj_set_style_text_color(guider_ui.MQTT_mqtt_stats_show_label, lv_color_hex(0xF00000), LV_PART_MAIN | LV_STATE_DEFAULT);
      lv_label_set_text(guider_ui.MQTT_mqtt_stats_show_label, "未连接");
    }
    break;
  }
  default:
    break;
  }
}
/*
 * @brief 创建MQTT页面
 */
void createMqttView(lv_ui *ui)
{
  setup_scr_MQTT(ui);
  lv_obj_add_event_cb(ui->MQTT, MQTT_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_event_cb(ui->MQTT_mqtt_enable_sw, MQTT_mqtt_enable_sw_event_handler, LV_EVENT_ALL, ui);
  lv_obj_set_style_text_font(ui->MQTT_mqtt_stats_show_label, &lv_customer_font_Apple_16, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_add_flag(guider_ui.MQTT_mqtt_frame, LV_OBJ_FLAG_EVENT_BUBBLE);

  showThreadNoticeFrame("MQTT", "Holle");
}
static void music_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_SCREEN_LOADED:
  {
    ui_move_animation(guider_ui.music_music_title_label, 500, 0, 60, 10, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
    ui_move_animation(guider_ui.music_music_bar_frame, 500, 0, 7, 90, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
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
      if (!lv_obj_has_state(guider_ui.music_music_sw, LV_STATE_CHECKED) ? true : false)
      {
        load_scr_animation(&guider_ui, &last_src_info, &Apps_src_info);
      }
      else
      {
        showThreadNoticeFrame("Music", "关闭开关退出");
      }
      break;
    }
    }
    break;
  }
  default:
    break;
  }
}
bool musicOpenFrame = false;
static void music_music_sw_frame_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_LONG_PRESSED:
  {
    musicOpenFrame = !musicOpenFrame;
    musicOpenFrame ? (ui_scale_animation(guider_ui.music_music_sw_frame, 500, 0, 40, 40, &lv_anim_path_overshoot, 0, 0, 0, 0, NULL, NULL, NULL),
                      ui_move_animation(guider_ui.music_sw_label, 200, 0, 40, 12, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL))
                   : (ui_scale_animation(guider_ui.music_music_sw_frame, 500, 0, 220, 40, &lv_anim_path_overshoot, 0, 0, 0, 0, NULL, NULL, NULL),
                      ui_move_animation(guider_ui.music_sw_label, 200, 0, 20, 12, &lv_anim_path_ease_out, 0, 0, 0, 0, NULL, NULL, NULL));
    break;
  }
  default:
    break;
  }
}
static void music_music_sw_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    lv_obj_t *status_obj = lv_event_get_target(e);
    if (lv_obj_has_state(status_obj, LV_STATE_CHECKED) ? true : false)
    {
      fftMusicBits = xEventGroupSetBits(fftMusicGroupHandle, FFTMusicTASK);
      sendFftMusicThreadSignal(true);
    }
    else
    {
      fftMusicBits = xEventGroupClearBits(fftMusicGroupHandle, FFTMusicTASK);
      sendFftMusicThreadSignal(false);
    }
#ifdef LOG
    Serial.println(fftMusicBits);
#endif
  }
  default:
    break;
  }
}
lv_obj_t *musicBarViewCreate(lv_ui *ui)
{
  lv_obj_t *music_bar = lv_bar_create(ui->music_music_bar_frame);
  lv_obj_set_style_anim_time(music_bar, 1000, 0);
  lv_bar_set_mode(music_bar, LV_BAR_MODE_NORMAL);
  lv_bar_set_range(music_bar, 0, 100);
  lv_bar_set_value(music_bar, 0, LV_ANIM_OFF);

  lv_obj_set_style_bg_opa(music_bar, 60, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_bg_color(music_bar, lv_color_hex(0x2195f6), LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_bg_grad_dir(music_bar, LV_GRAD_DIR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_radius(music_bar, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_shadow_width(music_bar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_set_style_bg_opa(music_bar, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
  lv_obj_set_style_bg_color(music_bar, lv_color_hex(0xee5253), LV_PART_INDICATOR | LV_STATE_DEFAULT);
  lv_obj_set_style_bg_grad_dir(music_bar, LV_GRAD_DIR_VER, LV_PART_INDICATOR | LV_STATE_DEFAULT);
  lv_obj_set_style_bg_grad_color(music_bar, lv_color_hex(0x10ac84), LV_PART_INDICATOR | LV_STATE_DEFAULT);
  lv_obj_set_style_bg_main_stop(music_bar, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
  lv_obj_set_style_bg_grad_stop(music_bar, 180, LV_PART_INDICATOR | LV_STATE_DEFAULT);
  lv_obj_set_style_radius(music_bar, 10, LV_PART_INDICATOR | LV_STATE_DEFAULT);

  return music_bar;
}
lv_obj_t *barsGroup[MUSIC_BAR_NUM];
void barViewCreateToSrc(lv_ui *ui)
{
  for (uint8_t i = 0; i < MUSIC_BAR_NUM; i++)
  {
    barsGroup[i] = musicBarViewCreate(ui);
    lv_obj_set_size(barsGroup[i], 5, 180);
    lv_obj_set_pos(barsGroup[i], (7 * i) + 2, 2);
  }
}
void updateMusicBarValue(uint8_t value, uint8_t index)
{
  lv_bar_set_value(barsGroup[(MUSIC_BAR_NUM / 2 - 1) - index], value, LV_ANIM_OFF);
  lv_bar_set_value(barsGroup[(MUSIC_BAR_NUM / 2) + index], value, LV_ANIM_OFF);
}
/*
 * @brief 创建音乐频谱页面
 */
void createMusicView(lv_ui *ui)
{
  setup_scr_music(ui);
  musicOpenFrame = false;
  lv_obj_set_size(ui->music_music_bar_frame, 226, 190);
  barViewCreateToSrc(ui);
  lv_obj_add_event_cb(ui->music, music_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_event_cb(ui->music_music_sw_frame, music_music_sw_frame_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_event_cb(ui->music_music_sw, music_music_sw_event_handler, LV_EVENT_ALL, ui);
}
static void water_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_SCREEN_LOADED:
  {
    ui_move_animation(guider_ui.water_water_title_label, 500, 0, 70, 10, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
    ui_scale_animation(guider_ui.water_water_function_frame, 500, 0, 220, 220, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
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
      load_scr_animation(&guider_ui, &last_src_info, &Apps_src_info);
      break;
    }
    }
    break;
  }
  default:
    break;
  }
}
uint16_t waterVolumeValue = 0;
static void water_water_img_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {

    if (waterVolumeValue > 3000)
    {
      waterVolumeValue = 0;
      showThreadNoticeFrame("喝水", "清除饮水记录");
      lv_bar_set_value(guider_ui.water_water_schedule_bar, map(waterVolumeValue, 0, 3000, 0, 100), LV_ANIM_ON);
      lv_label_set_text_fmt(guider_ui.water_water_drink_num_label, "%dml/3000ml", waterVolumeValue);
    }
    else
    {
      if (waterVolumeValue == 3000)
      {
        showThreadNoticeFrame("喝水，您已达标", "继续坚持");
      }
      else
      {
        waterVolumeValue += 375;
        lv_label_set_text_fmt(guider_ui.water_water_drink_num_label, "%dml/3000ml", waterVolumeValue);
        lv_bar_set_value(guider_ui.water_water_schedule_bar, map(waterVolumeValue, 0, 3000, 0, 100), LV_ANIM_ON);
        showThreadNoticeFrame("喝水！！！", "还有%dml", (3000 - waterVolumeValue));
      }
    }
    break;
  }
  default:
    break;
  }
}
drinkWater waterSendTimeDate;
static void water_drink_water_time_set_btn_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    uint8_t _hour = lv_roller_get_selected(guider_ui.water_water_time_roller_hour) * 60;
    uint8_t _min = (lv_roller_get_selected(guider_ui.water_water_time_roller_min) + 1) * 10;
    waterSendTimeDate.nextDrinkWaterTime = (_hour + _min) * 60;
    waterSendTimeDate.nextDrinkWaterCacheTime = (_hour + _min) * 60;
    xQueueSend(drinkWaterQueue, &waterSendTimeDate, 1000);
#ifdef LOG
    Serial.printf("TimeValue:");
    Serial.println(waterSendTimeDate.nextDrinkWaterTime);
#endif

    break;
  }
  default:
    break;
  }
}
/*
 * @brief 创建喝水页面
 */
void createWaterView(lv_ui *ui)
{
  setup_scr_water(ui);
  lv_obj_add_event_cb(ui->water, water_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_event_cb(ui->water_water_img, water_water_img_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_event_cb(ui->water_drink_water_time_set_btn, water_drink_water_time_set_btn_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_flag(guider_ui.water_water_info_frame, LV_OBJ_FLAG_EVENT_BUBBLE);
  lv_obj_set_scroll_snap_y(guider_ui.water_water_function_frame, LV_SCROLL_SNAP_CENTER);
  lv_bar_set_value(guider_ui.water_water_schedule_bar, map(waterVolumeValue, 0, 3000, 0, 100), LV_ANIM_ON);
  lv_label_set_text_fmt(guider_ui.water_water_drink_num_label, "%dml/3000ml", waterVolumeValue);
}
static void Note_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_SCREEN_LOADED:
  {
    ui_move_animation(guider_ui.Note_note_frame, 500, 0, 10, 50, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
    ui_move_animation(guider_ui.Note_Note_title_label, 500, 0, 0, 10, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
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
      load_scr_animation(&guider_ui, &last_src_info, &Apps_src_info);
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
 * @brief 创建备忘录页面
 */
void createNoteView(lv_ui *ui)
{
  setup_scr_Note(ui);
  lv_obj_add_event_cb(ui->Note, Note_event_handler, LV_EVENT_ALL, ui);
}
uint8_t r = 0, g = 0, b = 0, ledLight = 0;
static void RGBManager_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_SCREEN_LOADED:
  {
    ui_move_animation(guider_ui.RGBManager_RGB_Contianer, 600, 0, 10, 60, &lv_anim_path_overshoot, 0, 0, 0, 0, NULL, NULL, NULL);
    ui_move_animation(guider_ui.RGBManager_Rgb_title_label, 500, 0, 0, 10, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
    sendSetRgbModeThreadSignal(true, true, 3, 0, 0, 0, 0);

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
      sendSetRgbModeThreadSignal(false, false, 3, 0, 0, 0, 0);
      vTaskDelay(pdMS_TO_TICKS(100));
      load_scr_animation(&guider_ui, &last_src_info, &Apps_src_info);
      break;
    }
    }
    break;
  }
  default:
    break;
  }
}
static void RGBManager_R_slider_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_VALUE_CHANGED:
  {
    lv_roller_set_selected(guider_ui.RGBManager_Preset_roller, 3, LV_ANIM_OFF);
    r = lv_slider_get_value(guider_ui.RGBManager_R_slider);
    break;
  }
  default:
    break;
  }
}
static void RGBManager_G_slider_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_VALUE_CHANGED:
  {
    lv_roller_set_selected(guider_ui.RGBManager_Preset_roller, 3, LV_ANIM_OFF);
    g = lv_slider_get_value(guider_ui.RGBManager_G_slider);
    break;
  }
  default:
    break;
  }
}
static void RGBManager_B_slider_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_VALUE_CHANGED:
  {
    lv_roller_set_selected(guider_ui.RGBManager_Preset_roller, 3, LV_ANIM_OFF);
    b = lv_slider_get_value(guider_ui.RGBManager_B_slider);
    break;
  }
  default:
    break;
  }
}
static void RGBManager_RGB_Value_set_btn_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    lv_roller_set_selected(guider_ui.RGBManager_Preset_roller, 3, LV_ANIM_OFF);
    r = lv_slider_get_value(guider_ui.RGBManager_R_slider);
    g = lv_slider_get_value(guider_ui.RGBManager_G_slider);
    b = lv_slider_get_value(guider_ui.RGBManager_B_slider);
    ledLight = lv_slider_get_value(guider_ui.RGBManager_brightness_slider);
    sendSetRgbModeThreadSignal(true, false, 2, r, g, b, ledLight);
    break;
  }
  default:
    break;
  }
}
static void RGBManager_brightness_slider_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_VALUE_CHANGED:
  {
    ledLight = lv_slider_get_value(guider_ui.RGBManager_brightness_slider);
    if (lv_roller_get_selected(guider_ui.RGBManager_Preset_roller) != 3)
    {
      setRgbBrightness(ledLight);
    }
    break;
  }
  default:
    break;
  }
}
static void RGBManager_Preset_btn_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    switch (lv_roller_get_selected(guider_ui.RGBManager_Preset_roller))
    {
    case 0:
      // 255 213 161
      sendSetRgbModeThreadSignal(true, false, 2, 255, 213, 161, ledLight);
      break;
    case 1:
      // 247 245 255
      sendSetRgbModeThreadSignal(true, false, 2, 247, 245, 255, ledLight);
      break;
    case 2:
      sendSetRgbModeThreadSignal(true, false, 1, 0, 0, 0, ledLight);
      break;
    }
    break;
  }
  default:
    break;
  }
}
static void RGBManager_default_btn_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    showThreadNoticeFrame("RGB", "ERROR");
    break;
  }
  default:
    break;
  }
}
static void RGBManager_set_num_btn_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    showThreadNoticeFrame("RGB", "ERROR");
    break;
  }
  default:
    break;
  }
}
void rgbManagerViewInit()
{
  lv_slider_set_value(guider_ui.RGBManager_R_slider, r, LV_ANIM_OFF);
  lv_slider_set_value(guider_ui.RGBManager_G_slider, g, LV_ANIM_OFF);
  lv_slider_set_value(guider_ui.RGBManager_B_slider, b, LV_ANIM_OFF);
  lv_slider_set_value(guider_ui.RGBManager_brightness_slider, ledLight, LV_ANIM_OFF);
}
/*
 * @brief 创建RGB页面
 */
void createRGBManagerView(lv_ui *ui)
{
  setup_scr_RGBManager(ui);

  lv_obj_add_event_cb(ui->RGBManager, RGBManager_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_event_cb(ui->RGBManager_R_slider, RGBManager_R_slider_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_event_cb(ui->RGBManager_G_slider, RGBManager_G_slider_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_event_cb(ui->RGBManager_B_slider, RGBManager_B_slider_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_event_cb(ui->RGBManager_RGB_Value_set_btn, RGBManager_RGB_Value_set_btn_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_event_cb(ui->RGBManager_brightness_slider, RGBManager_brightness_slider_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_event_cb(ui->RGBManager_Preset_btn, RGBManager_Preset_btn_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_event_cb(ui->RGBManager_default_btn, RGBManager_default_btn_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_event_cb(ui->RGBManager_set_num_btn, RGBManager_set_num_btn_event_handler, LV_EVENT_ALL, ui);

  rgbManagerViewInit();
}
static void notice_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_SCREEN_LOADED:
  {
    ui_move_animation(guider_ui.notice_notice_frame, 500, 0, 10, 20, &lv_anim_path_overshoot, 0, 0, 0, 0, NULL, NULL, NULL);
    ui_scale_animation(guider_ui.notice_notice_frame, 800, 0, 220, 110, &lv_anim_path_overshoot, 0, 0, 0, 0, NULL, NULL, NULL);
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
      load_scr_animation(&guider_ui, &last_src_info, &Notice_src_info);
      break;
    }
    }
    break;
  }
  default:
    break;
  }
}
static void _notice_refresh_animation(lv_anim_t *anim)
{
  ui_move_animation(guider_ui.notice_notice_frame, 500, 0, 10, 20, &lv_anim_path_overshoot, 0, 0, 0, 0, NULL, NULL, NULL);
  ui_scale_animation(guider_ui.notice_notice_frame, 800, 0, 220, 110, &lv_anim_path_overshoot, 0, 0, 0, 0, NULL, NULL, NULL);
}
static void notice_notice_anim_btn_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    ui_move_animation(guider_ui.notice_notice_frame, 500, 0, 10, NoticeTopPos_Y, &lv_anim_path_overshoot, 0, 0, 0, 0, NULL, NULL, NULL);
    ui_scale_animation(guider_ui.notice_notice_frame, 800, 0, 220, Notice_Begin_Height, &lv_anim_path_overshoot, 0, 0, 0, 0, NULL, _notice_refresh_animation, NULL);
    break;
  }
  default:
    break;
  }
}
void createNoticeView(lv_ui *ui)
{
  setup_scr_notice(ui);
  lv_obj_add_event_cb(ui->notice, notice_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_event_cb(ui->notice_notice_anim_btn, notice_notice_anim_btn_event_handler, LV_EVENT_ALL, ui);
}
bool restartSystemFlag = false;
uint8_t restartSystemTimeValue = 3;
static void Device_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);
  lv_obj_t *target = lv_event_get_target(e);
  switch (code)
  {
  case LV_EVENT_SCREEN_LOADED:
  {
    ui_move_animation(guider_ui.Device_restat_frame, 500, 0, 10, 50, &lv_anim_path_overshoot, 0, 0, 0, 0, NULL, NULL, NULL);
    ui_move_animation(guider_ui.Device_restat_title_label, 500, 0, 0, 10, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
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
      // if (target == guider_ui.Device_shutdown_time_frame)
      // {
      //   return;
      // }
      if (restartSystemFlag)
      {
        showThreadNoticeFrame("System", "正在重启");
        return;
      }
      load_scr_animation(&guider_ui, &last_src_info, &Device_src_info);
      break;
    }
    }
    break;
  }
  default:
    break;
  }
}
static void Device_restat_dev_btn_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_LONG_PRESSED:
  {
    ui_move_animation(guider_ui.Device_shutdown_time_frame, 300, 0, 0, 0, &lv_anim_path_bounce, 0, 0, 0, 0, NULL, NULL, NULL);
    restartSystemFlag = true;
    showThreadNoticeFrame("System", "3S后重启");
    break;
  }
  default:
    break;
  }
}
void createDevicRestartView(lv_ui *ui)
{
  setup_scr_Device(ui);

  lv_obj_add_event_cb(ui->Device, Device_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_event_cb(ui->Device_restat_dev_btn, Device_restat_dev_btn_event_handler, LV_EVENT_ALL, ui);
}