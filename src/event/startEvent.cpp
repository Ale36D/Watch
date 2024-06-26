#include "event.h"

ScreenAnimationLoaderInfo last_src_info;
ScreenAnimationLoaderInfo Home_src_info;
ScreenAnimationLoaderInfo Apps_src_info;
ScreenAnimationLoaderInfo Settings_src_info;
ScreenAnimationLoaderInfo Clock_src_info;
ScreenAnimationLoaderInfo Calendar_src_info;
ScreenAnimationLoaderInfo Weather_src_info;
ScreenAnimationLoaderInfo About_src_info;
ScreenAnimationLoaderInfo Sensor_src_info;
ScreenAnimationLoaderInfo Mqtt_src_info;
ScreenAnimationLoaderInfo Music_src_info;
ScreenAnimationLoaderInfo Water_src_info;
ScreenAnimationLoaderInfo BlueTools_src_info;
ScreenAnimationLoaderInfo RGBManager_src_info;
ScreenAnimationLoaderInfo Note_src_info;
ScreenAnimationLoaderInfo Notice_src_info;
ScreenAnimationLoaderInfo Device_src_info;

static void Start_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_SCREEN_LOADED:
  {
    ui_move_animation(guider_ui.Start_starrt_img, 500, 0, 0, 0, &lv_anim_path_overshoot, 0, 0, 0, 0, NULL, NULL, NULL);
    ui_move_animation(guider_ui.Start_start_spinner, 500, 200, 104, 240, &lv_anim_path_bounce, 0, 0, 0, 0, NULL, NULL, NULL);
    ui_move_animation(guider_ui.Start_ui_show_label, 200, 0, 0, 200, &lv_anim_path_bounce, 0, 0, 0, 0, NULL, NULL, NULL);
    ui_scale_animation(guider_ui.Start_ui_show_label, 500, 500, 240, 32, &lv_anim_path_overshoot, 0, 0, 0, 0, NULL, NULL, NULL);
    break;
  }
  default:
    break;
  }
}
/*
 * @brief 创建开始页面
 */
void createStartView(lv_ui *ui)
{
  enum ScrSystimerID systimerId = StartSystimer;
  System_Timer_Run_stats = StartSystimer;
  setup_scr_Start(ui);
  lv_obj_add_event_cb(ui->Start, Start_event_handler, LV_EVENT_ALL, ui);
  createNoticeFrame("", "");
}