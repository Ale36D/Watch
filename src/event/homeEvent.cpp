#include "event.h"

bool buzzerVoiceEnabled = true;
LV_IMG_DECLARE(_unwifi_alpha_48x48);
LV_IMG_DECLARE(_no_vocie_alpha_48x48);
LV_IMG_DECLARE(_vocie_alpha_48x48);
LV_IMG_DECLARE(_WIFI_alpha_48x48);

bool isLoadHome = false;
void homeTipsNotice(lv_anim_t *anim)
{
  !isLoadHome ? (showThreadNoticeFrame("桌面", "长按更换背景"), 0) : (0);
}
static void Home_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);
  lv_obj_t *target = lv_event_get_target(e);

  switch (code)
  {
  case LV_EVENT_SCREEN_LOADED:
  {
    randomSeed(analogRead(RANDOMSEDDPIN));
    lv_obj_set_style_bg_img_src(guider_ui.Home_time_bg_frame, &image_sources[random(19)], LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_move_animation(guider_ui.Home_home_frame, 500, 0, 0, 40, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, homeTipsNotice, NULL);
    isLoadHome = true;
    break;
  }
  case LV_EVENT_GESTURE:
  {
    lv_dir_t dir = lv_indev_get_gesture_dir(lv_indev_get_act());
    switch (dir)
    {
    case LV_DIR_BOTTOM:
    {
      lv_indev_wait_release(lv_indev_get_act());
      ui_move_animation(guider_ui.Home_control_center_frame, 500, 0, 0, 0, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
      ui_move_animation(guider_ui.Home_status_bar_frame, 200, 0, 0, -90, &lv_anim_path_ease_out, 0, 0, 0, 0, NULL, NULL, NULL);
      break;
    }
    case LV_DIR_TOP:
    {
      lv_indev_wait_release(lv_indev_get_act());
      if (target == guider_ui.Home_control_center_frame || target == guider_ui.Home_functionbar_frame || target == guider_ui.Home_noticebar_frame)
      {
        ui_move_animation(guider_ui.Home_control_center_frame, 500, 0, 0, -300, &lv_anim_path_ease_out, 0, 0, 0, 0, NULL, NULL, NULL);
        ui_move_animation(guider_ui.Home_status_bar_frame, 500, 500, 0, -30, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
#ifdef LOG
        Serial.println("上滑状态栏");
#endif
        return;
      }
#ifdef LOG
      Serial.println("上滑桌面");
#endif
      break;
    }
    }
    break;
  }
  default:
    break;
  }
}

static void Home_status_bar_frame_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    ui_move_animation(guider_ui.Home_control_center_frame, 1000, 0, 0, 0, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
    ui_move_animation(guider_ui.Home_status_bar_frame, 1000, 0, 0, -60, &lv_anim_path_ease_out, 0, 0, 0, 0, NULL, NULL, NULL);
    break;
  }
  default:
    break;
  }
}
static void Home_control_center_frame_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    // ui_move_animation(guider_ui.Home_control_center_frame, 500, 0, 0, -300, &lv_anim_path_ease_out, 0, 0, 0, 0, NULL, NULL, NULL);
    // ui_move_animation(guider_ui.Home_status_bar_frame, 200, 500, 0, -60, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
    break;
  }
  default:
    break;
  }
}
static void Home_lock_img_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    load_scr_animation(&guider_ui, &Clock_src_info, &Home_src_info);
    break;
  }
  default:
    break;
  }
}
static void Home_retrunback_btn_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    ui_move_animation(guider_ui.Home_control_center_frame, 500, 0, 0, -290, &lv_anim_path_ease_out, 0, 0, 0, 0, NULL, NULL, NULL);
    ui_move_animation(guider_ui.Home_status_bar_frame, 200, 500, 0, -30, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
    break;
  }
  default:
    break;
  }
}
static void Home_hotzone_frame_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    ui_move_animation(guider_ui.Home_control_center_frame, 500, 0, 0, -300, &lv_anim_path_ease_out, 0, 0, 0, 0, NULL, NULL, NULL);
    ui_move_animation(guider_ui.Home_status_bar_frame, 500, 500, 0, -30, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
    break;
  }
  default:
    break;
  }
}

static void Home_allapps_img_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    load_scr_animation(&guider_ui, &Apps_src_info, &Home_src_info);
    break;
  }
  default:
    break;
  }
}
static void Home_voice_img_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    buzzerVoiceEnabled = !buzzerVoiceEnabled;
    lv_img_set_src(guider_ui.Home_voice_img, buzzerVoiceEnabled ? &_vocie_alpha_48x48
                                                                : &_no_vocie_alpha_48x48);
    buzzerVoiceEnabled ? showThreadNoticeFrame("Voice", "声音打开")
                       : showThreadNoticeFrame("Voice", "声音关闭");
    break;
  }
  default:
    break;
  }
}
static void Home_settings_img_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    load_scr_animation(&guider_ui, &Settings_src_info, &Home_src_info);
    break;
  }
  default:
    break;
  }
}
static void Home_home_frame_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_SCROLL_END:
  {
#ifdef LOG
    Serial.println("Home_Frame_X:");
    Serial.println(lv_obj_get_scroll_x(guider_ui.Home_home_frame));
#endif
    if (lv_obj_get_scroll_x(guider_ui.Home_home_frame) < -40)
    {
      ui_move_animation(guider_ui.Home_sidebar_frame, 500, 0, 0, 40, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
    }
  }
  break;
  default:
    break;
  }
}
static void Home_home_time_frame_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_LONG_PRESSED:
  {
    ui_move_animation(guider_ui.Home_home_time_frame, 500, 0, 5, 5, &lv_anim_path_bounce, 0, 0, 0, 0, NULL, NULL, NULL);
    ui_scale_animation(guider_ui.Home_home_time_frame, 500, 0, 32, 32, &lv_anim_path_overshoot, 0, 0, 0, 0, NULL, NULL, NULL);
    ui_move_animation(guider_ui.Home_enlarge_img, 500, 0, 0, 0, &lv_anim_path_ease_out, 0, 0, 0, 0, NULL, NULL, NULL);
    ui_scale_animation(guider_ui.Home_enlarge_img, 500, 0, 32, 32, &lv_anim_path_overshoot, 0, 0, 0, 0, NULL, NULL, NULL);
    break;
  }
  default:
    break;
  }
}
static void Home_enlarge_img_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    ui_move_animation(guider_ui.Home_home_time_frame, 500, 0, 40, 80, &lv_anim_path_bounce, 0, 0, 0, 0, NULL, NULL, NULL);
    ui_scale_animation(guider_ui.Home_home_time_frame, 500, 0, 160, 100, &lv_anim_path_bounce, 0, 0, 0, 0, NULL, NULL, NULL);
    ui_move_animation(guider_ui.Home_enlarge_img, 200, 0, 128, 0, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
    ui_scale_animation(guider_ui.Home_enlarge_img, 200, 0, 0, 0, &lv_anim_path_overshoot, 0, 0, 0, 0, NULL, NULL, NULL);
    break;
  }
  default:
    break;
  }
}
static void Home_time_bg_frame_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_LONG_PRESSED:
  {
    randomSeed(analogRead(RANDOMSEDDPIN));
    lv_obj_set_style_bg_img_src(guider_ui.Home_time_bg_frame, &image_sources[random(19)], LV_PART_MAIN | LV_STATE_DEFAULT);
    break;
  }
  default:
    break;
  }
}
static void Home_brightness_rslider_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);
  switch (code)
  {
  case LV_EVENT_VALUE_CHANGED:
  {
    lv_label_set_text_fmt(guider_ui.Home_brightness_value_label, "亮度调节 %d%%", lv_slider_get_value(guider_ui.Home_brightness_rslider));
    break;
  }
  default:
    break;
  }
}
static void Home_hint_btn_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    load_scr_animation(&guider_ui, &Water_src_info, &Home_src_info);
    break;
  }
  default:
    break;
  }
}
static void Home_bluetools_frame_img_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    load_scr_animation(&guider_ui, &BlueTools_src_info, &Home_src_info);
    break;
  }
  default:
    break;
  }
}
static void Home_dev_restart_img_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    load_scr_animation(&guider_ui, &Device_src_info, &Home_src_info);
    break;
  }
  default:
    break;
  }
}
static void Home_rgb_img_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    load_scr_animation(&guider_ui, &RGBManager_src_info, &Home_src_info);
    break;
  }
  default:
    break;
  }
}
static void Home_note_img_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    load_scr_animation(&guider_ui, &Note_src_info, &Home_src_info);
    break;
  }
  default:
    break;
  }
}
static void Home_sidebar_return_btn_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_CLICKED:
  {
    ui_move_animation(guider_ui.Home_sidebar_frame, 500, 0, -245, 40, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
    break;
  }
  default:
    break;
  }
}
void setHomeViewFlag()
{
  lv_obj_set_scroll_dir(guider_ui.Home_home_frame, LV_DIR_HOR);
  lv_obj_set_scroll_dir(guider_ui.Home_functionbar_frame, LV_DIR_HOR);

  lv_obj_set_scroll_snap_x(guider_ui.Home_home_frame, LV_SCROLL_SNAP_CENTER);
  lv_obj_set_scroll_snap_x(guider_ui.Home_control_center_frame, LV_SCROLL_SNAP_CENTER);
  lv_obj_set_scroll_snap_x(guider_ui.Home_quick_app_frame, LV_SCROLL_SNAP_CENTER);

  lv_obj_add_flag(guider_ui.Home_home_frame, LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_ELASTIC);
  lv_obj_add_flag(guider_ui.Home_functionbar_frame, LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_ELASTIC);

  lv_obj_scroll_to(guider_ui.Home_home_frame, 0, 0, LV_ANIM_OFF);

  lv_obj_add_flag(guider_ui.Home_home_frame, LV_OBJ_FLAG_EVENT_BUBBLE);
  lv_obj_add_flag(guider_ui.Home_time_frame, LV_OBJ_FLAG_EVENT_BUBBLE);
  lv_obj_add_flag(guider_ui.Home_time_bg_frame, LV_OBJ_FLAG_EVENT_BUBBLE);
  lv_obj_add_flag(guider_ui.Home_func_frame, LV_OBJ_FLAG_EVENT_BUBBLE);
  lv_obj_add_flag(guider_ui.Home_view, LV_OBJ_FLAG_EVENT_BUBBLE);

  lv_obj_add_flag(guider_ui.Home_noticebar_frame, LV_OBJ_FLAG_EVENT_BUBBLE);
  lv_obj_add_flag(guider_ui.Home_functionbar_frame, LV_OBJ_FLAG_EVENT_BUBBLE);
  lv_obj_add_flag(guider_ui.Home_control_center_frame, LV_OBJ_FLAG_EVENT_BUBBLE);
  lv_obj_add_flag(guider_ui.Home, LV_OBJ_FLAG_EVENT_BUBBLE);
}
void setHomeRefreshView()
{
  ui_move_animation(guider_ui.Home_control_center_frame, 500, 0, 0, -280, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
  ui_move_animation(guider_ui.Home_status_bar_frame, 200, 0, 0, -30, &lv_anim_path_ease_out, 0, 0, 0, 0, NULL, NULL, NULL);
}
void setHomeViewPosOrSize()
{
  lv_obj_set_size(guider_ui.Home_enlarge_img, 0, 0);
}
void setHomeViewFont()
{
  lv_obj_set_style_text_font(guider_ui.Home_weather_code_label, &lv_customer_font_Apple_16, LV_PART_MAIN | LV_STATE_DEFAULT);
}
/*
 * @brief 创建主页页面
 */
void createHomeView(lv_ui *ui)
{
  setup_scr_Home(ui);

  lv_obj_add_event_cb(ui->Home, Home_event_handler, LV_EVENT_ALL, ui);
  lv_img_set_src(ui->Home_voice_img, buzzerVoiceEnabled ? &_vocie_alpha_48x48 : &_no_vocie_alpha_48x48);

  lv_obj_add_event_cb(ui->Home_status_bar_frame, Home_status_bar_frame_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_event_cb(ui->Home_control_center_frame, Home_control_center_frame_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_event_cb(ui->Home_retrunback_btn, Home_retrunback_btn_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_event_cb(ui->Home_hotzone_frame, Home_hotzone_frame_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_event_cb(ui->Home_allapps_img, Home_allapps_img_event_handler, LV_EVENT_ALL, ui);
  // 快捷方式
  lv_obj_add_event_cb(ui->Home_lock_img, Home_lock_img_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_event_cb(ui->Home_voice_img, Home_voice_img_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_event_cb(ui->Home_settings_img, Home_settings_img_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_event_cb(ui->Home_bluetools_frame_img, Home_bluetools_frame_img_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_event_cb(ui->Home_dev_restart_img, Home_dev_restart_img_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_event_cb(ui->Home_rgb_img, Home_rgb_img_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_event_cb(ui->Home_note_img, Home_note_img_event_handler, LV_EVENT_ALL, ui);

  lv_obj_add_event_cb(ui->Home_home_frame, Home_home_frame_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_event_cb(ui->Home_time_bg_frame, Home_time_bg_frame_event_handler, LV_EVENT_ALL, ui);

  lv_obj_add_event_cb(ui->Home_home_time_frame, Home_home_time_frame_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_event_cb(ui->Home_enlarge_img, Home_enlarge_img_event_handler, LV_EVENT_ALL, ui);

  lv_obj_add_event_cb(ui->Home_brightness_rslider, Home_brightness_rslider_event_handler, LV_EVENT_ALL, ui);

  lv_obj_add_event_cb(ui->Home_hint_btn, Home_hint_btn_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_event_cb(ui->Home_sidebar_return_btn, Home_sidebar_return_btn_event_handler, LV_EVENT_ALL, ui);

  setHomeViewFlag();
  setHomeRefreshView();
  setHomeViewPosOrSize();
}
void HomeAnimSetHandler(void)
{
  ui_move_animation(guider_ui.Home_home_frame, 500, 0, 0, 40, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, homeTipsNotice, NULL);
  lv_event_send(guider_ui.Home_retrunback_btn, LV_EVENT_CLICKED, NULL);
}