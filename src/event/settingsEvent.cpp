#include "event.h"

lv_obj_t *wifiConfig;
lv_obj_t *refreshWeather;
lv_obj_t *refreshTime;
lv_obj_t *disConnectWifi;
lv_obj_t *againConnectWifi;
lv_obj_t *returnHome;
lv_obj_t *freeMemory;
lv_obj_t *setVoice;
lv_obj_t *lockSrc;
lv_obj_t *aboutDevice;
lv_obj_t *checkTaskInfo;
void addItemStyle(lv_obj_t *item)
{
  // Write style state: LV_STATE_DEFAULT for &style_Settings_Settings_list_extra_btns_main_default
  static lv_style_t style_Settings_Settings_list_extra_btns_main_default;
  ui_init_style(&style_Settings_Settings_list_extra_btns_main_default);

  lv_style_set_pad_top(&style_Settings_Settings_list_extra_btns_main_default, 20);
  lv_style_set_pad_left(&style_Settings_Settings_list_extra_btns_main_default, 5);
  lv_style_set_pad_right(&style_Settings_Settings_list_extra_btns_main_default, 5);
  lv_style_set_pad_bottom(&style_Settings_Settings_list_extra_btns_main_default, 20);
  lv_style_set_border_width(&style_Settings_Settings_list_extra_btns_main_default, 0);
  lv_style_set_text_color(&style_Settings_Settings_list_extra_btns_main_default, lv_color_hex(0xffffff));
  lv_style_set_text_font(&style_Settings_Settings_list_extra_btns_main_default, &lv_customer_font_Apple_16);
  lv_style_set_text_opa(&style_Settings_Settings_list_extra_btns_main_default, 255);
  lv_style_set_radius(&style_Settings_Settings_list_extra_btns_main_default, 10);
  lv_style_set_bg_opa(&style_Settings_Settings_list_extra_btns_main_default, 0);
  lv_obj_add_style(item, &style_Settings_Settings_list_extra_btns_main_default, LV_PART_MAIN | LV_STATE_DEFAULT);

  // Write style state: LV_STATE_PRESSED for &style_Settings_Settings_list_extra_btns_main_pressed
  static lv_style_t style_Settings_Settings_list_extra_btns_main_pressed;
  ui_init_style(&style_Settings_Settings_list_extra_btns_main_pressed);

  lv_style_set_pad_top(&style_Settings_Settings_list_extra_btns_main_pressed, 20);
  lv_style_set_pad_left(&style_Settings_Settings_list_extra_btns_main_pressed, 5);
  lv_style_set_pad_right(&style_Settings_Settings_list_extra_btns_main_pressed, 5);
  lv_style_set_pad_bottom(&style_Settings_Settings_list_extra_btns_main_pressed, 20);
  lv_style_set_border_width(&style_Settings_Settings_list_extra_btns_main_pressed, 0);
  lv_style_set_radius(&style_Settings_Settings_list_extra_btns_main_pressed, 10);
  lv_style_set_text_color(&style_Settings_Settings_list_extra_btns_main_pressed, lv_color_hex(0xb7b7b7));
  lv_style_set_text_font(&style_Settings_Settings_list_extra_btns_main_pressed, &lv_customer_font_Apple_16);
  lv_style_set_text_opa(&style_Settings_Settings_list_extra_btns_main_pressed, 255);
  lv_style_set_bg_opa(&style_Settings_Settings_list_extra_btns_main_pressed, 255);
  lv_style_set_bg_color(&style_Settings_Settings_list_extra_btns_main_pressed, lv_color_hex(0x8395a7));
  lv_style_set_bg_grad_dir(&style_Settings_Settings_list_extra_btns_main_pressed, LV_GRAD_DIR_NONE);
  lv_obj_add_style(item, &style_Settings_Settings_list_extra_btns_main_pressed, LV_PART_MAIN | LV_STATE_PRESSED);

  // Write style state: LV_STATE_FOCUSED for &style_Settings_Settings_list_extra_btns_main_focused
  static lv_style_t style_Settings_Settings_list_extra_btns_main_focused;
  ui_init_style(&style_Settings_Settings_list_extra_btns_main_focused);

  lv_style_set_pad_top(&style_Settings_Settings_list_extra_btns_main_focused, 20);
  lv_style_set_pad_left(&style_Settings_Settings_list_extra_btns_main_focused, 5);
  lv_style_set_pad_right(&style_Settings_Settings_list_extra_btns_main_focused, 5);
  lv_style_set_pad_bottom(&style_Settings_Settings_list_extra_btns_main_focused, 20);
  lv_style_set_border_width(&style_Settings_Settings_list_extra_btns_main_focused, 0);
  lv_style_set_radius(&style_Settings_Settings_list_extra_btns_main_focused, 10);
  lv_style_set_text_color(&style_Settings_Settings_list_extra_btns_main_focused, lv_color_hex(0xffffff));
  lv_style_set_text_font(&style_Settings_Settings_list_extra_btns_main_focused, &lv_customer_font_Apple_16);
  lv_style_set_text_opa(&style_Settings_Settings_list_extra_btns_main_focused, 255);
  lv_style_set_bg_opa(&style_Settings_Settings_list_extra_btns_main_focused, 0);
  lv_obj_add_style(item, &style_Settings_Settings_list_extra_btns_main_focused, LV_PART_MAIN | LV_STATE_FOCUSED);
}
void addListItem(lv_ui *ui)
{

  returnHome = lv_list_add_btn(ui->Settings_Settings_list, LV_SYMBOL_HOME, "返回主页");
  lockSrc = lv_list_add_btn(ui->Settings_Settings_list, LV_SYMBOL_EYE_CLOSE, "锁定屏幕");

  lv_list_add_text(ui->Settings_Settings_list, "NetWork");
  disConnectWifi = lv_list_add_btn(ui->Settings_Settings_list, LV_SYMBOL_CLOSE, "断开连接");
  againConnectWifi = lv_list_add_btn(ui->Settings_Settings_list, LV_SYMBOL_CLOSE, "重新连接");
  wifiConfig = lv_list_add_btn(ui->Settings_Settings_list, LV_SYMBOL_WIFI, "WiFi 配置");
  refreshWeather = lv_list_add_btn(ui->Settings_Settings_list, LV_SYMBOL_REFRESH, "刷新天气");
  refreshTime = lv_list_add_btn(ui->Settings_Settings_list, LV_SYMBOL_CHARGE, "刷新时间");

  lv_list_add_text(ui->Settings_Settings_list, "System");
  setVoice = lv_list_add_btn(ui->Settings_Settings_list, LV_SYMBOL_AUDIO, "设置声音");
  freeMemory = lv_list_add_btn(ui->Settings_Settings_list, LV_SYMBOL_SD_CARD, "内存余量");
  checkTaskInfo = lv_list_add_btn(ui->Settings_Settings_list, LV_SYMBOL_DRIVE, "查看任务");

  lv_list_add_text(ui->Settings_Settings_list, "DeviceInFo");
  aboutDevice = lv_list_add_btn(ui->Settings_Settings_list, LV_SYMBOL_SETTINGS, "关于本机");

  uint8_t child_cnt = lv_obj_get_child_cnt(ui->Settings_Settings_list);
  for (uint8_t i = 0; i < child_cnt; i++)
  {
    lv_obj_t *child = lv_obj_get_child(ui->Settings_Settings_list, i);
    addItemStyle(child);
  }
}
static void wifiConfig_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    sendSmartConfigWiFiThreadSignal(true);
    break;
  }
  default:
    break;
  }
}
static void refreshWeather_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    sendgetNetWorkSendThreadSignal(true);
    break;
  }
  default:
    break;
  }
}
static void refreshTime_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {

    break;
  }
  default:
    break;
  }
}
static void disConnectWifi_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    WiFi.disconnect();
    showThreadNoticeFrame("WiFi", "网络断开");
    break;
  }
  default:
    break;
  }
}
static void againConnectWifi_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    WiFi.begin();
    showThreadNoticeFrame("WiFi", "正在连接");
    break;
  }
  default:
    break;
  }
}
static void returnHome_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    load_scr_animation(&guider_ui, &Home_src_info, &Settings_src_info);
    break;
  }
  default:
    break;
  }
}
static void freeMemory_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    showThreadNoticeFrame("Memory Free", "%dKB", (uint16_t)(ESP.getFreeHeap()));
    break;
  }
  default:
    break;
  }
}
static void setVoice_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    lv_event_send(guider_ui.Home_voice_img, LV_EVENT_CLICKED, NULL);
    break;
  }
  default:
    break;
  }
}
static void lockSrc_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    load_scr_animation(&guider_ui, &Clock_src_info, &Settings_src_info);
    break;
  }
  default:
    break;
  }
}
static void aboutDevice_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    ui_move_animation(guider_ui.Settings_about_frame, 500, 0, 0, 0, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
    break;
  }
  default:
    break;
  }
}
static void checkTaskInfo_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    ui_move_animation(guider_ui.Settings_task_info_frame, 500, 0, 0, 0, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
    // char TaskInfoStr[512];
    // vTaskList(TaskInfoStr);
    // lv_label_set_text_fmt(guider_ui.Settings_task_info_label, "Process\n%s", TaskInfoStr);
    break;
  }
  default:
    break;
  }
}
static void Settings_about_frame_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    ui_move_animation(guider_ui.Settings_about_frame, 500, 0, -250, 0, &lv_anim_path_ease_out, 0, 0, 0, 0, NULL, NULL, NULL);
    break;
  }
  default:
    break;
  }
}
static void Settings_task_info_frame_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    ui_move_animation(guider_ui.Settings_task_info_frame, 500, 0, -480, 0, &lv_anim_path_ease_out, 0, 0, 0, 0, NULL, NULL, NULL);
    break;
  }
  default:
    break;
  }
}
void showTips(lv_anim_t *anim)
{
  // showThreadNoticeFrame("设置", "");
}
static void Settings_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_SCREEN_LOADED:
  {
    ui_scale_animation(guider_ui.Settings_Settings_list, 500, 0, 200, 220, &lv_anim_path_overshoot, 0, 0, 0, 0, NULL, showTips, NULL);
    ui_move_animation(guider_ui.Settings_Settings_title_label, 500, 0, 70, 10, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
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
      load_scr_animation(&guider_ui, &last_src_info, &Settings_src_info);
      break;
    }
    }
    break;
  }
  default:
    break;
  }
}

void setSettingsViewFlag()
{
  lv_obj_add_flag(guider_ui.Settings_Settings_list, LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_ELASTIC);
  lv_obj_add_flag(guider_ui.Settings_Settings_list, LV_OBJ_FLAG_EVENT_BUBBLE);
}
/*
 * @brief 创建设置页面
 */
void createSettingsView(lv_ui *ui)
{
  setup_scr_Settings(ui);
  addListItem(ui);
  lv_obj_add_event_cb(ui->Settings, Settings_event_handler, LV_EVENT_ALL, NULL);
  lv_obj_add_event_cb(wifiConfig, wifiConfig_event_handler, LV_EVENT_ALL, NULL);
  lv_obj_add_event_cb(refreshWeather, refreshWeather_event_handler, LV_EVENT_ALL, NULL);
  lv_obj_add_event_cb(refreshTime, refreshTime_event_handler, LV_EVENT_ALL, NULL);
  lv_obj_add_event_cb(disConnectWifi, disConnectWifi_event_handler, LV_EVENT_ALL, NULL);
  lv_obj_add_event_cb(againConnectWifi, againConnectWifi_event_handler, LV_EVENT_ALL, NULL);
  lv_obj_add_event_cb(returnHome, returnHome_event_handler, LV_EVENT_ALL, NULL);
  lv_obj_add_event_cb(freeMemory, freeMemory_event_handler, LV_EVENT_ALL, NULL);
  lv_obj_add_event_cb(setVoice, setVoice_event_handler, LV_EVENT_ALL, NULL);
  lv_obj_add_event_cb(lockSrc, lockSrc_event_handler, LV_EVENT_ALL, NULL);
  lv_obj_add_event_cb(aboutDevice, aboutDevice_event_handler, LV_EVENT_ALL, NULL);
  lv_obj_add_event_cb(checkTaskInfo, checkTaskInfo_event_handler, LV_EVENT_ALL, NULL);

  lv_obj_add_event_cb(ui->Settings_about_frame, Settings_about_frame_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_event_cb(ui->Settings_task_info_frame, Settings_task_info_frame_event_handler, LV_EVENT_ALL, ui);

  setSettingsViewFlag();
}