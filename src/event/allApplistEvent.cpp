

#include "event.h"

lv_obj_t *createAppsListFrame(const char *appName, const void *src)
{
  // Write codes Apps_img_show_frame
  lv_obj_t *frame = lv_obj_create(guider_ui.Apps_apps_frame);
  lv_obj_set_content_width(frame, lv_pct(100));
  lv_obj_set_content_height(frame, 120);
  lv_obj_set_scrollbar_mode(frame, LV_SCROLLBAR_MODE_OFF);

  // Write style for Apps_img_show_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
  lv_obj_set_style_border_width(frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_radius(frame, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_bg_opa(frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_pad_top(frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_pad_bottom(frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_pad_left(frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_pad_right(frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_shadow_width(frame, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_shadow_color(frame, lv_color_hex(0x576574), LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_shadow_opa(frame, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_shadow_spread(frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_shadow_ofs_x(frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_shadow_ofs_y(frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

  // // Write codes Apps_apps_name_label
  lv_obj_t *name_label = lv_label_create(frame);
  lv_label_set_text(name_label, appName);
  lv_label_set_long_mode(name_label, LV_LABEL_LONG_WRAP);
  lv_obj_set_pos(name_label, 110, 52);
  lv_obj_set_size(name_label, 100, 16);

  // Write style for Apps_apps_name_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
  lv_obj_set_style_border_width(name_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_radius(name_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_text_color(name_label, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_text_font(name_label, &lv_customer_font_Apple_16, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_text_opa(name_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_text_letter_space(name_label, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_text_line_space(name_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_text_align(name_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_bg_opa(name_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_pad_top(name_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_pad_right(name_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_pad_bottom(name_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_pad_left(name_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_shadow_width(name_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

  // Write codes Apps_app_img
  lv_obj_t *Apps_app_img = lv_img_create(frame);
  lv_obj_add_flag(Apps_app_img, LV_OBJ_FLAG_CLICKABLE);
  lv_img_set_src(Apps_app_img, src);
  lv_img_set_pivot(Apps_app_img, 50, 50);
  lv_img_set_angle(Apps_app_img, 0);
  lv_obj_set_pos(Apps_app_img, 10, 10);
  lv_obj_set_size(Apps_app_img, 100, 100);
  lv_obj_add_flag(Apps_app_img, LV_OBJ_FLAG_EVENT_BUBBLE);

  // Write style for Apps_app_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
  lv_obj_set_style_img_opa(Apps_app_img, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

  return frame;
}
static void scroll_event_cb(lv_event_t *e)
{
  lv_obj_t *cont = lv_event_get_target(e);

  lv_area_t cont_a;
  lv_obj_get_coords(cont, &cont_a);
  lv_coord_t cont_y_center = cont_a.y1 + lv_area_get_height(&cont_a) / 2;

  lv_coord_t r = lv_obj_get_height(cont) * 7 / 10;
  uint8_t i;
  uint8_t child_cnt = lv_obj_get_child_cnt(cont);
  for (i = 0; i < child_cnt; i++)
  {
    lv_obj_t *child = lv_obj_get_child(cont, i);
    lv_area_t child_a;
    lv_obj_get_coords(child, &child_a);

    lv_coord_t child_y_center = child_a.y1 + lv_area_get_height(&child_a) / 2;

    lv_coord_t diff_y = child_y_center - cont_y_center;
    diff_y = LV_ABS(diff_y);

    lv_coord_t x;
    if (diff_y >= r)
    {
      x = r;
    }
    else
    {
      uint32_t x_sqr = r * r - diff_y * diff_y;
      lv_sqrt_res_t res;
      lv_sqrt(x_sqr, &res, 0x8000);
      x = r - res.i;
    }
    lv_obj_set_style_translate_x(child, x, 0);
  }
}
static void Apps_apps_clock_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_LONG_PRESSED:
  {
    load_scr_animation(&guider_ui, &Clock_src_info, &Apps_src_info);
    break;
  }
  default:
    break;
  }
}
static void Apps_settings_img_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_LONG_PRESSED:
  {
    load_scr_animation(&guider_ui, &Settings_src_info, &Apps_src_info);
    break;
  }
  default:
    break;
  }
}
static void Apps_weather_img_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_LONG_PRESSED:
  {
    load_scr_animation(&guider_ui, &Weather_src_info, &Apps_src_info);
    break;
  }
  default:
    break;
  }
}
static void Apps_cander_img_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_LONG_PRESSED:
  {
    load_scr_animation(&guider_ui, &Calendar_src_info, &Apps_src_info);
    break;
  }
  default:
    break;
  }
}

static void Apps_sensor_img_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_LONG_PRESSED:
  {
    load_scr_animation(&guider_ui, &Sensor_src_info, &Apps_src_info);
    break;
  }
  default:
    break;
  }
}
static void Apps_music_img_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_LONG_PRESSED:
  {
    load_scr_animation(&guider_ui, &Music_src_info, &Apps_src_info);
    break;
  }
  default:
    break;
  }
}
static void Apps_homes_img_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_LONG_PRESSED:
  {
    // lv_obj_set_tile(guider_ui.Home_view, guider_ui.Home_apps_frame, LV_ANIM_ON);
    break;
  }
  default:
    break;
  }
}
static void Apps_about_img_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_LONG_PRESSED:
  {
    load_scr_animation(&guider_ui, &About_src_info, &Apps_src_info);
    break;
  }
  default:
    break;
  }
}
static void Apps_restart_img_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_LONG_PRESSED:
  {
    load_scr_animation(&guider_ui, &Device_src_info, &Apps_src_info);
    break;
  }
  default:
    break;
  }
}
static void Apps_mqtt_img_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_LONG_PRESSED:
  {
    load_scr_animation(&guider_ui, &Mqtt_src_info, &Apps_src_info);
    break;
  }
  default:
    break;
  }
}
static void Apps_drinkWater_img_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_LONG_PRESSED:
  {
    load_scr_animation(&guider_ui, &Water_src_info, &Apps_src_info);
    break;
  }
  default:
    break;
  }
}
static void Apps_rgbManager_img_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_LONG_PRESSED:
  {
    load_scr_animation(&guider_ui, &RGBManager_src_info, &Apps_src_info);
    break;
  }
  default:
    break;
  }
}
static void Apps_note_img_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_LONG_PRESSED:
  {
    load_scr_animation(&guider_ui, &Note_src_info, &Apps_src_info);
    break;
  }
  default:
    break;
  }
}
static void Apps_notice_img_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_LONG_PRESSED:
  {
    load_scr_animation(&guider_ui, &Notice_src_info, &Apps_src_info);
    break;
  }
  default:
    break;
  }
}
static void testEventHandler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_LONG_PRESSED:
  {
    showThreadNoticeFrame("Error", "Funtion NULL");
    break;
  }
  default:
    break;
  }
}

LV_IMG_DECLARE(_clock_alpha_100x100);
LV_IMG_DECLARE(_settings_2_alpha_100x100);
LV_IMG_DECLARE(_weather_alpha_100x100);
LV_IMG_DECLARE(_cander_alpha_100x100);
LV_IMG_DECLARE(_voice_alpha_100x100);
LV_IMG_DECLARE(_devrestart_alpha_100x100);
LV_IMG_DECLARE(_rgb_alpha_100x100);
LV_IMG_DECLARE(_coputer_alpha_100x100);
LV_IMG_DECLARE(_music_alpha_100x100);
LV_IMG_DECLARE(_aboutdev_alpha_100x100);
LV_IMG_DECLARE(_game_alpha_100x100);
LV_IMG_DECLARE(_sensor_alpha_100x100);
LV_IMG_DECLARE(_mqttx_alpha_100x100);
LV_IMG_DECLARE(_mqttx_alpha_100x100);
LV_IMG_DECLARE(_waterinfo_alpha_100x100);
LV_IMG_DECLARE(_note_alpha_100x100);

lv_obj_t *clock_IMG;
lv_obj_t *settings_IMG;
lv_obj_t *weather_IMG;
lv_obj_t *cander_IMG;
lv_obj_t *notice_IMG;
lv_obj_t *restart_IMG;
lv_obj_t *RGB_IMG;
lv_obj_t *computer_IMG;
lv_obj_t *music_IMG;
lv_obj_t *about_IMG;
lv_obj_t *game_IMG;
lv_obj_t *sensor_IMG;
lv_obj_t *mqtt_IMG;
lv_obj_t *water_IMG;
lv_obj_t *note_IMG;

void imgFrameList()
{
  clock_IMG = createAppsListFrame("表盘", &_clock_alpha_100x100);
  settings_IMG = createAppsListFrame("设置", &_settings_2_alpha_100x100);
  weather_IMG = createAppsListFrame("天气", &_weather_alpha_100x100);
  cander_IMG = createAppsListFrame("日历", &_cander_alpha_100x100);
  notice_IMG = createAppsListFrame("通知", &_voice_alpha_100x100);
  note_IMG = createAppsListFrame("备忘录", &_note_alpha_100x100);
  sensor_IMG = createAppsListFrame("传感器", &_sensor_alpha_100x100);
  mqtt_IMG = createAppsListFrame("MQTT", &_mqttx_alpha_100x100);
  water_IMG = createAppsListFrame("喝水", &_waterinfo_alpha_100x100);
  restart_IMG = createAppsListFrame("重启设备", &_devrestart_alpha_100x100);
  RGB_IMG = createAppsListFrame("RGB灯光", &_rgb_alpha_100x100);
  computer_IMG = createAppsListFrame("计算器", &_coputer_alpha_100x100);
  music_IMG = createAppsListFrame("音乐频谱", &_music_alpha_100x100);
  game_IMG = createAppsListFrame("游戏", &_game_alpha_100x100);
  about_IMG = createAppsListFrame("设备状态", &_aboutdev_alpha_100x100);
}
void addEventList()
{
  lv_obj_add_event_cb(clock_IMG, Apps_apps_clock_event_handler, LV_EVENT_ALL, NULL);
  lv_obj_add_event_cb(settings_IMG, Apps_settings_img_event_handler, LV_EVENT_ALL, NULL);
  lv_obj_add_event_cb(weather_IMG, Apps_weather_img_event_handler, LV_EVENT_ALL, NULL);
  lv_obj_add_event_cb(cander_IMG, Apps_cander_img_event_handler, LV_EVENT_ALL, NULL);
  lv_obj_add_event_cb(restart_IMG, Apps_restart_img_event_handler, LV_EVENT_ALL, NULL);
  lv_obj_add_event_cb(RGB_IMG, Apps_rgbManager_img_event_handler, LV_EVENT_ALL, NULL);
  lv_obj_add_event_cb(computer_IMG, testEventHandler, LV_EVENT_ALL, NULL);
  lv_obj_add_event_cb(music_IMG, Apps_music_img_event_handler, LV_EVENT_ALL, NULL);
  lv_obj_add_event_cb(about_IMG, Apps_about_img_event_handler, LV_EVENT_ALL, NULL);
  lv_obj_add_event_cb(game_IMG, testEventHandler, LV_EVENT_ALL, NULL);
  lv_obj_add_event_cb(sensor_IMG, Apps_sensor_img_event_handler, LV_EVENT_ALL, NULL);
  lv_obj_add_event_cb(mqtt_IMG, Apps_mqtt_img_event_handler, LV_EVENT_ALL, NULL);
  lv_obj_add_event_cb(water_IMG, Apps_drinkWater_img_event_handler, LV_EVENT_ALL, NULL);
  lv_obj_add_event_cb(note_IMG, Apps_note_img_event_handler, LV_EVENT_ALL, NULL);
  lv_obj_add_event_cb(notice_IMG, Apps_notice_img_event_handler, LV_EVENT_ALL, NULL);
}

void setupAppsFrame(lv_obj_t *frame)
{
  lv_obj_set_flex_flow(frame, LV_FLEX_FLOW_COLUMN);
  lv_obj_add_event_cb(frame, scroll_event_cb, LV_EVENT_SCROLL, NULL);
  lv_obj_set_scroll_dir(frame, LV_DIR_VER);
  lv_obj_set_scroll_snap_y(frame, LV_SCROLL_SNAP_CENTER);
  lv_obj_set_scrollbar_mode(frame, LV_SCROLLBAR_MODE_OFF);
  imgFrameList();
  addEventList();
}
static void Apps_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_SCREEN_LOADED:
  {
    ui_move_animation(guider_ui.Apps_apps_title, 500, 0, 60, 10, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
    ui_move_animation(guider_ui.Apps_apps_frame, 500, 0, 20, 60, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
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
      load_scr_animation(&guider_ui, &Home_src_info, &Apps_src_info);
      break;
    }
    }
    break;
  }
  default:
    break;
  }
}
void addAppsViewFlag()
{
  lv_obj_set_scroll_dir(guider_ui.Apps_apps_frame, LV_DIR_VER);
  lv_obj_add_flag(guider_ui.Apps_apps_frame, LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM);
}
/*
 * @brief 创建APP页面
 */
void createAppsView(lv_ui *ui)
{
  setup_scr_Apps(ui);

  lv_obj_add_event_cb(ui->Apps, Apps_event_handler, LV_EVENT_ALL, ui);
  setupAppsFrame(guider_ui.Apps_apps_frame);
  lv_event_send(guider_ui.Apps_apps_frame, LV_EVENT_SCROLL, NULL);
  lv_obj_scroll_to_view(lv_obj_get_child(guider_ui.Apps_apps_frame, 0), LV_ANIM_ON);

  addAppsViewFlag();

  showThreadNoticeFrame("Apps", "长按进入应用!");
}
