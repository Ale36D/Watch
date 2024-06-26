/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/


#ifndef EVENTS_INIT_H_
#define EVENTS_INIT_H_
#ifdef __cplusplus
extern "C" {
#endif

#include "gui_guider.h"

void events_init(lv_ui *ui);

void events_init_Start(lv_ui *ui);
void events_init_Home(lv_ui *ui);
void events_init_Apps(lv_ui *ui);
void events_init_Clock(lv_ui *ui);
void events_init_notice(lv_ui *ui);
void events_init_Settings(lv_ui *ui);
void events_init_calendar(lv_ui *ui);
void events_init_weather(lv_ui *ui);
void events_init_about(lv_ui *ui);
void events_init_Sensor(lv_ui *ui);
void events_init_MQTT(lv_ui *ui);
void events_init_music(lv_ui *ui);
void events_init_water(lv_ui *ui);
void events_init_TestPage(lv_ui *ui);
void events_init_BlueTools(lv_ui *ui);
void events_init_RGBManager(lv_ui *ui);
void events_init_Note(lv_ui *ui);
void events_init_Device(lv_ui *ui);

#ifdef __cplusplus
}
#endif
#endif /* EVENT_CB_H_ */
