/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

typedef struct
{
  
	lv_obj_t *Start;
	bool Start_del;
	lv_obj_t *Start_starrt_img;
	lv_obj_t *Start_start_spinner;
	lv_obj_t *Start_ui_show_label;
	lv_obj_t *Home;
	bool Home_del;
	lv_obj_t *Home_home_frame;
	lv_obj_t *Home_view;
	lv_obj_t *Home_view_apps;
	lv_obj_t *Home_allapps_frame;
	lv_obj_t *Home_allapps_img;
	lv_obj_t *Home_allapps_label;
	lv_obj_t *Home_func_frame;
	lv_obj_t *Home_weather_bg_frame;
	lv_obj_t *Home_weather_frame;
	lv_obj_t *Home_img_5;
	lv_obj_t *Home_weather_location_label;
	lv_obj_t *Home_weather_temp_label;
	lv_obj_t *Home_weather_code_label;
	lv_obj_t *Home_hint_frame;
	lv_obj_t *Home_hint_label;
	lv_obj_t *Home_hint_btn;
	lv_obj_t *Home_hint_btn_label;
	lv_obj_t *Home_img_6;
	lv_obj_t *Home_next_drink_water_time_label;
	lv_obj_t *Home_Next_drinking_water_bar;
	lv_obj_t *Home_Drinked_label;
	lv_obj_t *Home_time_frame;
	lv_obj_t *Home_home_time_frame;
	lv_obj_t *Home_home_sec_label;
	lv_obj_t *Home_temp_label;
	lv_obj_t *Home_home_time_label;
	lv_obj_t *Home_enlarge_img;
	lv_obj_t *Home_info_label;
	lv_obj_t *Home_time_bg_frame;
	lv_obj_t *Home_status_bar_frame;
	lv_obj_t *Home_battery_value_label;
	lv_obj_t *Home_wifi_stats_label;
	lv_obj_t *Home_voice_stats_label;
	lv_obj_t *Home_weather_stats_label;
	lv_obj_t *Home_loaddata_spinner;
	lv_obj_t *Home_battery_label;
	lv_obj_t *Home_notice_label;
	lv_obj_t *Home_Mqtt_label;
	lv_obj_t *Home_control_center_frame;
	lv_obj_t *Home_noticebar_frame;
	lv_obj_t *Home_system_run_title_label;
	lv_obj_t *Home_memory_info_frame;
	lv_obj_t *Home_free_memory_label;
	lv_obj_t *Home_img_7;
	lv_obj_t *Home_free_memory_bar;
	lv_obj_t *Home_now_use_memory_percentage_label;
	lv_obj_t *Home_recent_tasks_frame;
	lv_obj_t *Home_brightness_frame;
	lv_obj_t *Home_brightness_rslider;
	lv_obj_t *Home_brightness_value_label;
	lv_obj_t *Home_functionbar_frame;
	lv_obj_t *Home_functionbar_date_label;
	lv_obj_t *Home_retrunback_btn;
	lv_obj_t *Home_retrunback_btn_label;
	lv_obj_t *Home_functionbar_time_label;
	lv_obj_t *Home_today_free_time_bar;
	lv_obj_t *Home_today_free_time_label;
	lv_obj_t *Home_quick_app_frame;
	lv_obj_t *Home_bluetools_frame;
	lv_obj_t *Home_bluetools_img_frame;
	lv_obj_t *Home_bluetools_frame_img;
	lv_obj_t *Home_voice_frame;
	lv_obj_t *Home_voice_img_frame;
	lv_obj_t *Home_voice_img;
	lv_obj_t *Home_lock_frame;
	lv_obj_t *Home_lcok_img_frame;
	lv_obj_t *Home_lock_img;
	lv_obj_t *Home_settings_frame;
	lv_obj_t *Home_settings_img_frame;
	lv_obj_t *Home_settings_img;
	lv_obj_t *Home_rgb_frame;
	lv_obj_t *Home_rgb_img_frame;
	lv_obj_t *Home_rgb_img;
	lv_obj_t *Home_note_frame;
	lv_obj_t *Home_note_img_frame;
	lv_obj_t *Home_note_img;
	lv_obj_t *Home_dev_restart_frame;
	lv_obj_t *Home_dev_restart_img_frame;
	lv_obj_t *Home_dev_restart_img;
	lv_obj_t *Home_hotzone_frame;
	lv_obj_t *Home_sidebar_frame;
	lv_obj_t *Home_sidebar_return_btn;
	lv_obj_t *Home_sidebar_return_btn_label;
	lv_obj_t *Home_sidebar_tips_label;
	lv_obj_t *Apps;
	bool Apps_del;
	lv_obj_t *Apps_apps_frame;
	lv_obj_t *Apps_apps_title;
	lv_obj_t *Apps_img_show_frame;
	lv_obj_t *Apps_app_name_label;
	lv_obj_t *Apps_app_img;
	lv_obj_t *Clock;
	bool Clock_del;
	lv_obj_t *Clock_clock_img;
	lv_obj_t *Clock_Clock_time_label;
	lv_obj_t *Clock_clock_sec_bar;
	lv_obj_t *notice;
	bool notice_del;
	lv_obj_t *notice_notice_frame;
	lv_obj_t *notice_notice_title_label;
	lv_obj_t *notice_notice_img_label;
	lv_obj_t *notice_notice_notice_img;
	lv_obj_t *notice_notice_label;
	lv_obj_t *notice_notice_anim_btn;
	lv_obj_t *notice_notice_anim_btn_label;
	lv_obj_t *Settings;
	bool Settings_del;
	lv_obj_t *Settings_Settings_title_label;
	lv_obj_t *Settings_Settings_list;
	lv_obj_t *Settings_Settings_list_item0;
	lv_obj_t *Settings_Settings_list_item1;
	lv_obj_t *Settings_Settings_list_item2;
	lv_obj_t *Settings_Settings_list_item3;
	lv_obj_t *Settings_Settings_list_item4;
	lv_obj_t *Settings_Settings_list_item5;
	lv_obj_t *Settings_Settings_list_item6;
	lv_obj_t *Settings_Settings_list_item7;
	lv_obj_t *Settings_Settings_list_item8;
	lv_obj_t *Settings_Settings_list_item9;
	lv_obj_t *Settings_about_frame;
	lv_obj_t *Settings_img_1;
	lv_obj_t *Settings_label_2;
	lv_obj_t *Settings_label_4;
	lv_obj_t *Settings_spinner_1;
	lv_obj_t *Settings_label_5;
	lv_obj_t *Settings_task_info_frame;
	lv_obj_t *Settings_img_2;
	lv_obj_t *Settings_task_info_label;
	lv_obj_t *calendar;
	bool calendar_del;
	lv_obj_t *calendar_calendar_frame;
	lv_obj_t *calendar_calendar_view;
	lv_obj_t *calendar_calendar_title_label;
	lv_obj_t *weather;
	bool weather_del;
	lv_obj_t *weather_weather_frame;
	lv_obj_t *weather_weather_title;
	lv_obj_t *weather_weather_load_frame;
	lv_obj_t *weather_Refresh_weather_data_label;
	lv_obj_t *weather_weather_spinner;
	lv_obj_t *weather_weather_view;
	lv_obj_t *weather_weather_view_info;
	lv_obj_t *weather_weather_view_next;
	lv_obj_t *weather_weather_view_lifeindex;
	lv_obj_t *weather_weather_info_frame;
	lv_obj_t *weather_precip_frame;
	lv_obj_t *weather_precip_title_label;
	lv_obj_t *weather_precip_num_label;
	lv_obj_t *weather_humidity_frame;
	lv_obj_t *weather_humi_title_label;
	lv_obj_t *weather_humi_num_label;
	lv_obj_t *weather_low_frame;
	lv_obj_t *weather_low_num_label;
	lv_obj_t *weather_low_title_label;
	lv_obj_t *weather_high_frame;
	lv_obj_t *weather_high_title_label;
	lv_obj_t *weather_high_num_label;
	lv_obj_t *weather_temp_label;
	lv_obj_t *weather_city_name_label;
	lv_obj_t *weather_text_night_label;
	lv_obj_t *weather_wind_frame;
	lv_obj_t *weather_wind_title_label;
	lv_obj_t *weather_wind_speed_label;
	lv_obj_t *weather_wind_scale_label;
	lv_obj_t *weather_wind_direction_degree_label;
	lv_obj_t *weather_update_weather_time_label;
	lv_obj_t *weather_weather_next_frame;
	lv_obj_t *weather_hl_frame;
	lv_obj_t *weather_label_15;
	lv_obj_t *weather_hl_one_label;
	lv_obj_t *weather_hl_two_label;
	lv_obj_t *weather_hl_three_label;
	lv_obj_t *weather_hl_prompt_label;
	lv_obj_t *weather_next_three_frame;
	lv_obj_t *weather_img_1;
	lv_obj_t *weather_img_2;
	lv_obj_t *weather_img_3;
	lv_obj_t *weather_text_day_one_label;
	lv_obj_t *weather_text_day_two_label;
	lv_obj_t *weather_text_day_three_label;
	lv_obj_t *weather_label_8;
	lv_obj_t *weather_rain_frame;
	lv_obj_t *weather_label_14;
	lv_obj_t *weather_rain_one_label;
	lv_obj_t *weather_rain_two_label;
	lv_obj_t *weather_rain_three_label;
	lv_obj_t *weather_rain_unit_label;
	lv_obj_t *weather_lifeindex_frame;
	lv_obj_t *weather_yinjiu_frame;
	lv_obj_t *weather_btn_1;
	lv_obj_t *weather_btn_1_label;
	lv_obj_t *weather_yj_label;
	lv_obj_t *weather_yj_stats_btn;
	lv_obj_t *weather_yj_stats_btn_label;
	lv_obj_t *weather_chuanyi_frame;
	lv_obj_t *weather_btn_4;
	lv_obj_t *weather_btn_4_label;
	lv_obj_t *weather_cy_label;
	lv_obj_t *weather_cy_stats_btn;
	lv_obj_t *weather_cy_stats_btn_label;
	lv_obj_t *weather_hufu_frame;
	lv_obj_t *weather_btn_6;
	lv_obj_t *weather_btn_6_label;
	lv_obj_t *weather_hf_label;
	lv_obj_t *weather_hf_stats_btn;
	lv_obj_t *weather_hf_stats_btn_label;
	lv_obj_t *weather_xinqing_frame;
	lv_obj_t *weather_btn_8;
	lv_obj_t *weather_btn_8_label;
	lv_obj_t *weather_xq_label;
	lv_obj_t *weather_xq_stats_btn;
	lv_obj_t *weather_xq_stats_btn_label;
	lv_obj_t *about;
	bool about_del;
	lv_obj_t *about_about_frame;
	lv_obj_t *about_img;
	lv_obj_t *about_myname_label;
	lv_obj_t *about_myinfo_label;
	lv_obj_t *about_about_title_label;
	lv_obj_t *Sensor;
	bool Sensor_del;
	lv_obj_t *Sensor_img;
	lv_obj_t *Sensor_sensor_title_label;
	lv_obj_t *Sensor_sensor_frame;
	lv_obj_t *Sensor_temp_frame;
	lv_obj_t *Sensor_temp_label;
	lv_obj_t *Sensor_temp_tips_label;
	lv_obj_t *Sensor_humi_frame;
	lv_obj_t *Sensor_humi_label;
	lv_obj_t *Sensor_humi_tips_label;
	lv_obj_t *Sensor_function_frame;
	lv_obj_t *Sensor_function_list_frame;
	lv_obj_t *Sensor_led_label;
	lv_obj_t *Sensor_lamp_sw;
	lv_obj_t *Sensor_funtion_lamp_frame;
	lv_obj_t *MQTT;
	bool MQTT_del;
	lv_obj_t *MQTT_mqtt_title_label;
	lv_obj_t *MQTT_mqtt_frame;
	lv_obj_t *MQTT_mqtt_stats_label_tips;
	lv_obj_t *MQTT_mqtt_stats_show_label;
	lv_obj_t *MQTT_mqtt_enable_sw;
	lv_obj_t *MQTT_mqtt_sw_tips_label;
	lv_obj_t *MQTT_mqtt_info_frame;
	lv_obj_t *MQTT_dev_id_label;
	lv_obj_t *MQTT_send_id_label;
	lv_obj_t *MQTT_img;
	lv_obj_t *music;
	bool music_del;
	lv_obj_t *music_music_title_label;
	lv_obj_t *music_music_bar_frame;
	lv_obj_t *music_bar_1;
	lv_obj_t *music_music_sw_frame;
	lv_obj_t *music_music_sw;
	lv_obj_t *music_sw_label;
	lv_obj_t *water;
	bool water_del;
	lv_obj_t *water_water_title_label;
	lv_obj_t *water_water_function_frame;
	lv_obj_t *water_set_water_info_frame;
	lv_obj_t *water_water_time_roller_min;
	lv_obj_t *water_drink_water_time_set_btn;
	lv_obj_t *water_drink_water_time_set_btn_label;
	lv_obj_t *water_set_drink_water_time_label;
	lv_obj_t *water_water_time_roller_hour;
	lv_obj_t *water_water_info_frame;
	lv_obj_t *water_water_drink_num_label;
	lv_obj_t *water_water_chicken_soup_label;
	lv_obj_t *water_water_schedule_bar;
	lv_obj_t *water_water_img;
	lv_obj_t *water_water_tips_label;
	lv_obj_t *TestPage;
	bool TestPage_del;
	lv_obj_t *TestPage_img_1;
	lv_obj_t *TestPage_img_2;
	lv_obj_t *TestPage_img_3;
	lv_obj_t *TestPage_img_4;
	lv_obj_t *TestPage_img_5;
	lv_obj_t *TestPage_img_6;
	lv_obj_t *TestPage_img_7;
	lv_obj_t *TestPage_img_8;
	lv_obj_t *TestPage_img_9;
	lv_obj_t *TestPage_img_10;
	lv_obj_t *TestPage_img_11;
	lv_obj_t *TestPage_img_12;
	lv_obj_t *TestPage_img_13;
	lv_obj_t *TestPage_img_14;
	lv_obj_t *TestPage_img_15;
	lv_obj_t *TestPage_img_16;
	lv_obj_t *TestPage_img_17;
	lv_obj_t *TestPage_img_18;
	lv_obj_t *TestPage_img_19;
	lv_obj_t *TestPage_img_20;
	lv_obj_t *TestPage_img_21;
	lv_obj_t *TestPage_img_22;
	lv_obj_t *TestPage_img_23;
	lv_obj_t *TestPage_img_24;
	lv_obj_t *TestPage_img_25;
	lv_obj_t *TestPage_img_26;
	lv_obj_t *TestPage_img_27;
	lv_obj_t *TestPage_img_28;
	lv_obj_t *TestPage_img_29;
	lv_obj_t *TestPage_img_30;
	lv_obj_t *TestPage_img_31;
	lv_obj_t *TestPage_img_32;
	lv_obj_t *TestPage_img_33;
	lv_obj_t *TestPage_img_34;
	lv_obj_t *BlueTools;
	bool BlueTools_del;
	lv_obj_t *BlueTools_blue_title_label;
	lv_obj_t *BlueTools_main_frame;
	lv_obj_t *BlueTools_Musiccontrol_frame;
	lv_obj_t *BlueTools_Musicplayback_btn;
	lv_obj_t *BlueTools_Musicplayback_btn_label;
	lv_obj_t *BlueTools_NextSong_btn;
	lv_obj_t *BlueTools_NextSong_btn_label;
	lv_obj_t *BlueTools_PreviousSong_btn;
	lv_obj_t *BlueTools_PreviousSong_btn_label;
	lv_obj_t *BlueTools_VoicePlus_btn;
	lv_obj_t *BlueTools_VoicePlus_btn_label;
	lv_obj_t *BlueTools_Soundreduction_btn;
	lv_obj_t *BlueTools_Soundreduction_btn_label;
	lv_obj_t *BlueTools_MusicSoftOpen_btn;
	lv_obj_t *BlueTools_MusicSoftOpen_btn_label;
	lv_obj_t *BlueTools_blue_music_title_label;
	lv_obj_t *BlueTools_Mute_btn;
	lv_obj_t *BlueTools_Mute_btn_label;
	lv_obj_t *BlueTools_recovery_btn;
	lv_obj_t *BlueTools_recovery_btn_label;
	lv_obj_t *BlueTools_ResourceManager_btn;
	lv_obj_t *BlueTools_ResourceManager_btn_label;
	lv_obj_t *RGBManager;
	bool RGBManager_del;
	lv_obj_t *RGBManager_Rgb_title_label;
	lv_obj_t *RGBManager_RGB_Contianer;
	lv_obj_t *RGBManager_RGB_frame;
	lv_obj_t *RGBManager_RGB_set_frame;
	lv_obj_t *RGBManager_R_slider;
	lv_obj_t *RGBManager_RGB_set_title_label;
	lv_obj_t *RGBManager_G_slider;
	lv_obj_t *RGBManager_B_slider;
	lv_obj_t *RGBManager_RGB_Value_set_btn;
	lv_obj_t *RGBManager_RGB_Value_set_btn_label;
	lv_obj_t *RGBManager_brightness_slider;
	lv_obj_t *RGBManager_Preset_frame;
	lv_obj_t *RGBManager_Preset_label;
	lv_obj_t *RGBManager_Preset_btn;
	lv_obj_t *RGBManager_Preset_btn_label;
	lv_obj_t *RGBManager_Preset_roller;
	lv_obj_t *RGBManager_RGB_num_frame;
	lv_obj_t *RGBManager_label_1;
	lv_obj_t *RGBManager_num_ten_roller;
	lv_obj_t *RGBManager_default_btn;
	lv_obj_t *RGBManager_default_btn_label;
	lv_obj_t *RGBManager_set_num_btn;
	lv_obj_t *RGBManager_set_num_btn_label;
	lv_obj_t *RGBManager_num_individual_roller;
	lv_obj_t *Note;
	bool Note_del;
	lv_obj_t *Note_Note_title_label;
	lv_obj_t *Note_note_frame;
	lv_obj_t *Note_note_body_label;
	lv_obj_t *Note_note_title_label;
	lv_obj_t *Note_note_img;
	lv_obj_t *Device;
	bool Device_del;
	lv_obj_t *Device_restat_title_label;
	lv_obj_t *Device_restat_frame;
	lv_obj_t *Device_restat_dev_btn;
	lv_obj_t *Device_restat_dev_btn_label;
	lv_obj_t *Device_restat_img;
	lv_obj_t *Device_tip_label;
	lv_obj_t *Device_shutdown_time_frame;
	lv_obj_t *Device_shutdown_time_label;
	lv_obj_t *Device_shutdown_tips_label;
	lv_obj_t *Device_spinner;
}lv_ui;

typedef void (*ui_setup_scr_t)(lv_ui * ui);

void ui_init_style(lv_style_t * style);

void ui_load_scr_animation(lv_ui *ui, lv_obj_t ** new_scr, bool new_scr_del, bool * old_scr_del, ui_setup_scr_t setup_scr,
                           lv_scr_load_anim_t anim_type, uint32_t time, uint32_t delay, bool is_clean, bool auto_del);

void ui_move_animation(void * var, int32_t duration, int32_t delay, int32_t x_end, int32_t y_end, lv_anim_path_cb_t path_cb,
                       uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                       lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);

void ui_scale_animation(void * var, int32_t duration, int32_t delay, int32_t width, int32_t height, lv_anim_path_cb_t path_cb,
                        uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                        lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);

void ui_img_zoom_animation(void * var, int32_t duration, int32_t delay, int32_t zoom, lv_anim_path_cb_t path_cb,
                           uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                           lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);

void ui_img_rotate_animation(void * var, int32_t duration, int32_t delay, lv_coord_t x, lv_coord_t y, int32_t rotate,
                   lv_anim_path_cb_t path_cb, uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time,
                   uint32_t playback_delay, lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);

void init_scr_del_flag(lv_ui *ui);

void setup_ui(lv_ui *ui);


extern lv_ui guider_ui;


void setup_scr_Start(lv_ui *ui);
void setup_scr_Home(lv_ui *ui);
void setup_scr_Apps(lv_ui *ui);
void setup_scr_Clock(lv_ui *ui);
void setup_scr_notice(lv_ui *ui);
void setup_scr_Settings(lv_ui *ui);
void setup_scr_calendar(lv_ui *ui);
void setup_scr_weather(lv_ui *ui);
void setup_scr_about(lv_ui *ui);
void setup_scr_Sensor(lv_ui *ui);
void setup_scr_MQTT(lv_ui *ui);
void setup_scr_music(lv_ui *ui);
void setup_scr_water(lv_ui *ui);
void setup_scr_TestPage(lv_ui *ui);
void setup_scr_BlueTools(lv_ui *ui);
void setup_scr_RGBManager(lv_ui *ui);
void setup_scr_Note(lv_ui *ui);
void setup_scr_Device(lv_ui *ui);
LV_IMG_DECLARE(_8148004_emoji_heart_eyes_icon_alpha_240x240);
LV_IMG_DECLARE(_apps_alpha_100x100);
LV_IMG_DECLARE(_location_1_alpha_32x32);
LV_IMG_DECLARE(_notice_2_alpha_32x32);
LV_IMG_DECLARE(_enlarge_alpha_32x32);

LV_IMG_DECLARE(_happy_240x240);
LV_IMG_DECLARE(_memory_2_alpha_64x32);
LV_IMG_DECLARE(_blue_alpha_48x48);
LV_IMG_DECLARE(_no_vocie_alpha_48x48);
LV_IMG_DECLARE(_watch_alpha_48x48);
LV_IMG_DECLARE(_settings_3_alpha_48x48);
LV_IMG_DECLARE(_rgb_alpha_48x48);
LV_IMG_DECLARE(_note_alpha_48x48);
LV_IMG_DECLARE(_devrestart_alpha_48x48);
LV_IMG_DECLARE(_crab_alpha_240x240);
LV_IMG_DECLARE(_message_3_alpha_48x48);
LV_IMG_DECLARE(_geek_alpha_100x100);
LV_IMG_DECLARE(_Process_2_alpha_100x100);
LV_IMG_DECLARE(_geek_alpha_100x100);
LV_IMG_DECLARE(_aircraft_alpha_100x100);
LV_IMG_DECLARE(_info_alpha_48x48);
LV_IMG_DECLARE(_Water_alpha_64x64);
LV_IMG_DECLARE(_aboutdev_alpha_100x100);
LV_IMG_DECLARE(_sensor_alpha_100x100);
LV_IMG_DECLARE(_coputer_alpha_100x100);
LV_IMG_DECLARE(_game_alpha_100x100);
LV_IMG_DECLARE(_music_alpha_100x100);
LV_IMG_DECLARE(_rgb_alpha_100x100);
LV_IMG_DECLARE(_voice_alpha_100x100);
LV_IMG_DECLARE(_devrestart_alpha_100x100);
LV_IMG_DECLARE(_clock_alpha_100x100);
LV_IMG_DECLARE(_settings_2_alpha_100x100);
LV_IMG_DECLARE(_weather_alpha_100x100);
LV_IMG_DECLARE(_cander_alpha_100x100);
LV_IMG_DECLARE(_mqttx_alpha_100x100);
LV_IMG_DECLARE(_2B2B_alpha_240x240);
LV_IMG_DECLARE(_8148004_emoji_heart_eyes_icon_alpha_240x240);
LV_IMG_DECLARE(_baobao_alpha_240x240);
LV_IMG_DECLARE(_decline_alpha_240x240);
LV_IMG_DECLARE(_happy_alpha_240x240);
LV_IMG_DECLARE(_LaughCry_alpha_240x240);
LV_IMG_DECLARE(_StaringBlankly_alpha_240x240);
LV_IMG_DECLARE(_2B2B2B_alpha_240x240);
LV_IMG_DECLARE(_happyh_alpha_240x240);
LV_IMG_DECLARE(_oldemoji_alpha_240x240);
LV_IMG_DECLARE(_mubiao_alpha_240x240);
LV_IMG_DECLARE(_dragon_alpha_240x240);
LV_IMG_DECLARE(_call_alpha_240x240);
LV_IMG_DECLARE(_crab_alpha_240x240);
LV_IMG_DECLARE(_facered_alpha_240x240);
LV_IMG_DECLARE(_gua_alpha_240x240);
LV_IMG_DECLARE(_mahjong_alpha_240x240);
LV_IMG_DECLARE(_pang_alpha_240x240);
LV_IMG_DECLARE(_Redenvelope_alpha_240x240);
LV_IMG_DECLARE(_tea_alpha_240x240);
LV_IMG_DECLARE(_waterinfo_alpha_100x100);

LV_IMG_DECLARE(_musicico_60x60);
LV_IMG_DECLARE(_note_alpha_100x100);
LV_IMG_DECLARE(_info_alpha_64x64);

LV_FONT_DECLARE(lv_font_Apple_32)
LV_FONT_DECLARE(lv_font_montserratMedium_16)
LV_FONT_DECLARE(lv_font_Apple_16)
LV_FONT_DECLARE(lv_font_montserratMedium_32)
LV_FONT_DECLARE(lv_font_montserratMedium_12)
LV_FONT_DECLARE(lv_font_Apple_24)
LV_FONT_DECLARE(lv_font_Apple_48)
LV_FONT_DECLARE(lv_font_Apple_12)
LV_FONT_DECLARE(lv_font_Apple_36)
LV_FONT_DECLARE(lv_font_Apple_14)
LV_FONT_DECLARE(lv_font_montserratMedium_24)
LV_FONT_DECLARE(lv_font_AlimamaShuHeiTiBold_48)
LV_FONT_DECLARE(lv_font_montserratMedium_48)


#ifdef __cplusplus
}
#endif
#endif
