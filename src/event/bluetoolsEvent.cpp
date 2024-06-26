#include "event.h"
static void BlueTools_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);

  switch (code)
  {
  case LV_EVENT_SCREEN_LOADED:
  {
    ui_move_animation(guider_ui.BlueTools_blue_title_label, 500, 0, 70, 10, &lv_anim_path_ease_in, 0, 0, 0, 0, NULL, NULL, NULL);
    ui_scale_animation(guider_ui.BlueTools_main_frame, 500, 0, 220, 220, &lv_anim_path_overshoot, 0, 0, 0, 0, NULL, NULL, NULL);
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
      load_scr_animation(&guider_ui, &last_src_info, &BlueTools_src_info);
      break;
    }
    }
    break;
  }
  default:
    break;
  }
}
static void BlueTools_btn_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);
  uint8_t *my_data_ptr = (uint8_t *)lv_event_get_user_data(e);
  uint8_t my_data = *my_data_ptr;
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
/*
 * @brief 创建蓝牙控制页面
 */
void createBlueToolsView(lv_ui *ui)
{
  setup_scr_BlueTools(ui);
  lv_obj_add_event_cb(ui->BlueTools, BlueTools_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_event_cb(ui->BlueTools_Musicplayback_btn, BlueTools_btn_event_handler, LV_EVENT_ALL, (void *)0x02);
  lv_obj_add_event_cb(ui->BlueTools_NextSong_btn, BlueTools_btn_event_handler, LV_EVENT_ALL, (void *)0x04);
  lv_obj_add_event_cb(ui->BlueTools_PreviousSong_btn, BlueTools_btn_event_handler, LV_EVENT_ALL, (void *)0x041);
  lv_obj_add_event_cb(ui->BlueTools_VoicePlus_btn, BlueTools_btn_event_handler, LV_EVENT_ALL, (void *)0x07);
  lv_obj_add_event_cb(ui->BlueTools_Soundreduction_btn, BlueTools_btn_event_handler, LV_EVENT_ALL, (void *)0x06);
  lv_obj_add_event_cb(ui->BlueTools_MusicSoftOpen_btn, BlueTools_btn_event_handler, LV_EVENT_ALL, (void *)0x07);
  lv_obj_add_event_cb(ui->BlueTools_Mute_btn, BlueTools_btn_event_handler, LV_EVENT_ALL, (void *)0x08);
  lv_obj_add_event_cb(ui->BlueTools_recovery_btn, BlueTools_btn_event_handler, LV_EVENT_ALL, (void *)0x09);
  lv_obj_add_event_cb(ui->BlueTools_ResourceManager_btn, BlueTools_btn_event_handler, LV_EVENT_ALL, (void *)0x0A);

  lv_obj_set_scroll_snap_y(ui->BlueTools_main_frame, LV_SCROLL_SNAP_CENTER);
}