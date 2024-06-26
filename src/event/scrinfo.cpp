#include "event.h"
/**
 * @brief 页面跳转适配
 *
 * @param ui LVGL_UI结构体
 * @param new_scr 新页面信息结构体
 * @param old_scr 旧页面信息结构体
 */
void load_scr_animation(lv_ui *ui, ScreenAnimationLoaderInfo *new_scr, ScreenAnimationLoaderInfo *old_scr)
{
  lv_timer_pause(System_Timer);
  System_Timer_Run_stats = OtherSystimer;
  loadSrcFlag = true;
  if (lv_obj_is_valid(NoticeFrame))
  {
    lv_obj_set_parent(NoticeFrame, NULL);
  }

  lv_obj_t *act_scr = lv_scr_act();
#if LV_USE_FREEMASTER
  if (auto_del)
  {
    gg_edata_task_clear(act_scr);
  }
#endif

  if (new_scr->auto_del && new_scr->is_clean)
  {
    lv_obj_clean(act_scr);
  }
  if (new_scr->new_scr_del)
  {
    new_scr->self_setup(ui);
  }
  bool temp_auto_del = new_scr->auto_del;
  if (old_scr != NULL)
  {
    old_scr->old_scr_del = &temp_auto_del;
  }
#ifdef LOG
  Serial.printf("页面状态");
  Serial.println(new_scr->new_scr_del);
#endif
  vTaskDelay(pdMS_TO_TICKS(100));

  lv_obj_t **obj = new_scr->new_scr;
  lv_scr_load_anim(*obj, LV_SCR_LOAD_ANIM_MOVE_BOTTOM, 500, 0, false);

  if (lv_obj_is_valid(NoticeFrame))
  {
    lv_obj_set_parent(NoticeFrame, *obj);
  }
  // 释放通知权限
  loadSrcFlag = false;
  // 更改刷新UI的时钟并运行定时器
  System_Timer_Run_stats = new_scr->SysTimerID;
  lv_timer_resume(System_Timer);
  // 将上次跳转的页面写入到缓存中
  if (old_scr != NULL)
  {
    setPageDescriptionInfo(&last_src_info,
                           old_scr->new_scr,
                           old_scr->new_scr_del,
                           old_scr->old_scr_del,
                           old_scr->self_setup,
                           old_scr->is_clean,
                           old_scr->auto_del,
                           old_scr->SysTimerID);
  }
}
//  &guider_ui.Home, guider_ui.Home_del, &guider_ui.Settings_del, createHomeView, false, true

/**
 * @brief 创建页面描述信息
 *
 * @param ScreenAnimationLoaderInfo* scr_info 要修改的页面描述结构体
 * @param lv_obj_t** new_scr 新页面
 * @param new_scr_del 新页面删除标志
 * @param *old_scr_del 旧页面删除标志
 * @param ui_setup_scr_tt new_scr_setup 新页面初始化函数
 * @param is_clean 是否立即清理
 * @param auto_del 是否自动清理
 */
void setPageDescriptionInfo(ScreenAnimationLoaderInfo *scr_info,
                            lv_obj_t **new_scr, bool new_scr_del, bool *old_scr_del, ui_setup_scr_tt self_setup, bool is_clean, bool auto_del, uint8_t SysTimerID)
{
  scr_info->new_scr = new_scr;
  scr_info->new_scr_del = new_scr_del;
  scr_info->old_scr_del = old_scr_del;
  scr_info->self_setup = self_setup;
  scr_info->is_clean = is_clean;
  scr_info->auto_del = auto_del;
  scr_info->SysTimerID = SysTimerID;
}

void PageInfoInit(void)
{
  while (1)
  {
    setPageDescriptionInfo(&Home_src_info, &guider_ui.Home, guider_ui.Home_del, &guider_ui.Home_del, createHomeView, false, true, HomeSystimer);
    setPageDescriptionInfo(&Apps_src_info, &guider_ui.Apps, guider_ui.Apps_del, &guider_ui.Apps_del, createAppsView, false, true, OtherSystimer);
    setPageDescriptionInfo(&Settings_src_info, &guider_ui.Settings, guider_ui.Settings_del, &guider_ui.Settings_del, createSettingsView, false, true, OtherSystimer);
    setPageDescriptionInfo(&Clock_src_info, &guider_ui.Clock, guider_ui.Clock_del, &guider_ui.Clock_del, creatClockView, false, true, ClockSystimer);
    setPageDescriptionInfo(&Calendar_src_info, &guider_ui.calendar, guider_ui.calendar_del, &guider_ui.calendar_del, createCanlenderView, false, true, OtherSystimer);
    setPageDescriptionInfo(&Weather_src_info, &guider_ui.weather, guider_ui.weather_del, &guider_ui.weather_del, createWeatherView, false, true, WeatherSystimer);
    setPageDescriptionInfo(&About_src_info, &guider_ui.about, guider_ui.about_del, &guider_ui.about_del, createAboutView, false, true, OtherSystimer);
    setPageDescriptionInfo(&Sensor_src_info, &guider_ui.Sensor, guider_ui.Sensor_del, &guider_ui.Sensor_del, createSensorView, false, true, SensorSystimer);
    setPageDescriptionInfo(&Mqtt_src_info, &guider_ui.MQTT, guider_ui.MQTT_del, &guider_ui.MQTT_del, createMqttView, false, true, OtherSystimer);
    setPageDescriptionInfo(&Music_src_info, &guider_ui.music, guider_ui.music_del, &guider_ui.music_del, createMusicView, false, true, OtherSystimer);
    setPageDescriptionInfo(&Water_src_info, &guider_ui.water, guider_ui.water_del, &guider_ui.water_del, createWaterView, false, true, OtherSystimer);
    setPageDescriptionInfo(&BlueTools_src_info, &guider_ui.BlueTools, guider_ui.BlueTools_del, &guider_ui.BlueTools_del, createBlueToolsView, false, true, OtherSystimer);
    setPageDescriptionInfo(&RGBManager_src_info, &guider_ui.RGBManager, guider_ui.RGBManager_del, &guider_ui.RGBManager_del, createRGBManagerView, false, true, OtherSystimer);
    setPageDescriptionInfo(&Note_src_info, &guider_ui.Note, guider_ui.Note_del, &guider_ui.Note_del, createNoteView, false, true, OtherSystimer);
    setPageDescriptionInfo(&Notice_src_info, &guider_ui.notice, guider_ui.notice_del, &guider_ui.notice_del, createNoticeView, false, true, OtherSystimer);
    setPageDescriptionInfo(&Device_src_info, &guider_ui.Device, guider_ui.Device_del, &guider_ui.Device_del, createDevicRestartView, false, true, DevicSystimer);
    break;
  }
}