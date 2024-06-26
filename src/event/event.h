#ifndef __EVENT_H__
#define __EVENT_H__

#include "ui\generated\gui_guider.h"
#include "Arduino.h"
#include "rtos\rtos_task.h"

#define LOG 0
#define RANDOMSEDDPIN 1
#define MUSIC_BAR_NUM 32

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
const lv_img_dsc_t image_sources[] = {
    _2B2B_alpha_240x240,
    _8148004_emoji_heart_eyes_icon_alpha_240x240,
    _baobao_alpha_240x240,
    _decline_alpha_240x240,
    _happy_alpha_240x240,
    _LaughCry_alpha_240x240,
    _StaringBlankly_alpha_240x240,
    _2B2B2B_alpha_240x240,
    _happyh_alpha_240x240,
    _oldemoji_alpha_240x240,
    _mubiao_alpha_240x240,
    _dragon_alpha_240x240,
    _call_alpha_240x240,
    _crab_alpha_240x240,
    _facered_alpha_240x240,
    _gua_alpha_240x240,
    _mahjong_alpha_240x240,
    _pang_alpha_240x240,
    _Redenvelope_alpha_240x240,
    _tea_alpha_240x240};

extern lv_timer_t *System_Timer;
extern lv_obj_t *NoticeFrame;
extern uint8_t System_Timer_Run_stats;
enum ScrSystimerID
{
    StartSystimer = 0,
    HomeSystimer,
    WeatherSystimer,
    ClockSystimer,
    SensorSystimer,
    DevicSystimer,
    OtherSystimer
};
extern bool loadSrcFlag;
extern bool buzzerVoiceEnabled;
extern bool restartSystemFlag;
extern uint16_t waterVolumeValue;
extern uint8_t restartSystemTimeValue;

#define NOTICE_FRAME_LEFT 10
#define NoticeTopPos_Y -150
#define Notice_Width 220
#define Notice_Height 110
#define Notice_Begin_Height 10

LV_FONT_DECLARE(lv_customer_font_Apple_16)

void startSystemTimerInit(void);

void system_timer_handler(lv_timer_t *timer);
void showThreadNoticeFrame(const char *title, const char *str, ...);

void createNoticeFrame(const char *title, const char *message);
void showNoticeStr(uint8_t pos_y, const char *title, const char *str, ...);
void finish_NoticeFrame(struct _lv_anim_t *anim);

void createStartView(lv_ui *ui);
void createHomeView(lv_ui *ui);
void createSettingsView(lv_ui *ui);
void creatClockView(lv_ui *ui);
void createCanlenderView(lv_ui *ui);
void createWeatherView(lv_ui *ui);
void createAboutView(lv_ui *ui);
void createAppsView(lv_ui *ui);
void createSensorView(lv_ui *ui);
void createMqttView(lv_ui *ui);
void createMusicView(lv_ui *ui);
void createWaterView(lv_ui *ui);
void createBlueToolsView(lv_ui *ui);
void createNoteView(lv_ui *ui);
void createRGBManagerView(lv_ui *ui);
void createNoticeView(lv_ui *ui);
void createDevicRestartView(lv_ui *ui);

void updateWeatherInfo(void);

void updateMusicBarValue(uint8_t value, uint8_t index);

// load_scr_animation(&guider_ui, &guider_ui.Home, guider_ui.Home_del, &guider_ui.weather_del, createHomeView, false, true);
typedef void (*ui_setup_scr_tt)(lv_ui *ui);
typedef struct
{
    lv_obj_t **new_scr;
    bool new_scr_del;
    bool *old_scr_del;
    ui_setup_scr_tt self_setup;
    bool is_clean;
    bool auto_del;
    uint8_t SysTimerID;
} ScreenAnimationLoaderInfo;

extern ScreenAnimationLoaderInfo last_src_info;

extern ScreenAnimationLoaderInfo Home_src_info;
extern ScreenAnimationLoaderInfo Apps_src_info;
extern ScreenAnimationLoaderInfo Settings_src_info;
extern ScreenAnimationLoaderInfo Clock_src_info;
extern ScreenAnimationLoaderInfo Calendar_src_info;
extern ScreenAnimationLoaderInfo Weather_src_info;
extern ScreenAnimationLoaderInfo About_src_info;
extern ScreenAnimationLoaderInfo Sensor_src_info;
extern ScreenAnimationLoaderInfo Mqtt_src_info;
extern ScreenAnimationLoaderInfo Music_src_info;
extern ScreenAnimationLoaderInfo Water_src_info;
extern ScreenAnimationLoaderInfo BlueTools_src_info;
extern ScreenAnimationLoaderInfo RGBManager_src_info;
extern ScreenAnimationLoaderInfo Note_src_info;
extern ScreenAnimationLoaderInfo Notice_src_info;
extern ScreenAnimationLoaderInfo Device_src_info;

void load_scr_animation(lv_ui *ui, ScreenAnimationLoaderInfo *new_scr, ScreenAnimationLoaderInfo *old_scr);
void setPageDescriptionInfo(ScreenAnimationLoaderInfo *scr_info,
                            lv_obj_t **new_scr, bool new_scr_del, bool *old_scr_del, ui_setup_scr_tt self_setup, bool is_clean, bool auto_del, uint8_t SysTimerID);
void PageInfoInit(void);
void sendgetNetWorkSendThreadSignal(bool getflag);
void sendOpenBuzzerVoiceThreadSignal(bool open, bool voice);
void sendSmartConfigWiFiThreadSignal(bool open);
void sendFftMusicThreadSignal(bool open);
void sendBlueToolsThreadSignal(uint8_t value);
void sendSensorGetDataThreadSignal(bool open);
void sendGetNetWorkTimeThreadSignal(bool open);
void sendSetRgbModeThreadSignal(bool open, bool isCreateNewThread, uint8_t Mode_ID, uint8_t RValue, uint8_t GValue, uint8_t BValue, uint8_t LightValue);

void HomeAnimSetHandler(void);

// 天气
/**********************/
void waitNetWorkGetDateAnim(void);

#endif