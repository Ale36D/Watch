/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



void setup_scr_TestPage(lv_ui *ui)
{
	//Write codes TestPage
	ui->TestPage = lv_obj_create(NULL);
	lv_obj_set_size(ui->TestPage, 240, 280);
	lv_obj_set_scrollbar_mode(ui->TestPage, LV_SCROLLBAR_MODE_OFF);

	//Write style for TestPage, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->TestPage, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes TestPage_img_1
	ui->TestPage_img_1 = lv_img_create(ui->TestPage);
	lv_obj_add_flag(ui->TestPage_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->TestPage_img_1, &_aboutdev_alpha_100x100);
	lv_img_set_pivot(ui->TestPage_img_1, 50,50);
	lv_img_set_angle(ui->TestPage_img_1, 0);
	lv_obj_set_pos(ui->TestPage_img_1, 3, -1);
	lv_obj_set_size(ui->TestPage_img_1, 100, 100);

	//Write style for TestPage_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->TestPage_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes TestPage_img_2
	ui->TestPage_img_2 = lv_img_create(ui->TestPage);
	lv_obj_add_flag(ui->TestPage_img_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->TestPage_img_2, &_sensor_alpha_100x100);
	lv_img_set_pivot(ui->TestPage_img_2, 50,50);
	lv_img_set_angle(ui->TestPage_img_2, 0);
	lv_obj_set_pos(ui->TestPage_img_2, 127, 99);
	lv_obj_set_size(ui->TestPage_img_2, 100, 100);

	//Write style for TestPage_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->TestPage_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes TestPage_img_3
	ui->TestPage_img_3 = lv_img_create(ui->TestPage);
	lv_obj_add_flag(ui->TestPage_img_3, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->TestPage_img_3, &_coputer_alpha_100x100);
	lv_img_set_pivot(ui->TestPage_img_3, 50,50);
	lv_img_set_angle(ui->TestPage_img_3, 0);
	lv_obj_set_pos(ui->TestPage_img_3, 116, 3);
	lv_obj_set_size(ui->TestPage_img_3, 100, 100);

	//Write style for TestPage_img_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->TestPage_img_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes TestPage_img_4
	ui->TestPage_img_4 = lv_img_create(ui->TestPage);
	lv_obj_add_flag(ui->TestPage_img_4, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->TestPage_img_4, &_game_alpha_100x100);
	lv_img_set_pivot(ui->TestPage_img_4, 50,50);
	lv_img_set_angle(ui->TestPage_img_4, 0);
	lv_obj_set_pos(ui->TestPage_img_4, -3, 210);
	lv_obj_set_size(ui->TestPage_img_4, 100, 100);

	//Write style for TestPage_img_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->TestPage_img_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes TestPage_img_5
	ui->TestPage_img_5 = lv_img_create(ui->TestPage);
	lv_obj_add_flag(ui->TestPage_img_5, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->TestPage_img_5, &_music_alpha_100x100);
	lv_img_set_pivot(ui->TestPage_img_5, 50,50);
	lv_img_set_angle(ui->TestPage_img_5, 0);
	lv_obj_set_pos(ui->TestPage_img_5, 3, 94);
	lv_obj_set_size(ui->TestPage_img_5, 100, 100);

	//Write style for TestPage_img_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->TestPage_img_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes TestPage_img_6
	ui->TestPage_img_6 = lv_img_create(ui->TestPage);
	lv_obj_add_flag(ui->TestPage_img_6, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->TestPage_img_6, &_rgb_alpha_100x100);
	lv_img_set_pivot(ui->TestPage_img_6, 50,50);
	lv_img_set_angle(ui->TestPage_img_6, 0);
	lv_obj_set_pos(ui->TestPage_img_6, 124, 208);
	lv_obj_set_size(ui->TestPage_img_6, 100, 100);

	//Write style for TestPage_img_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->TestPage_img_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes TestPage_img_7
	ui->TestPage_img_7 = lv_img_create(ui->TestPage);
	lv_obj_add_flag(ui->TestPage_img_7, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->TestPage_img_7, &_voice_alpha_100x100);
	lv_img_set_pivot(ui->TestPage_img_7, 50,50);
	lv_img_set_angle(ui->TestPage_img_7, 0);
	lv_obj_set_pos(ui->TestPage_img_7, 3, 310);
	lv_obj_set_size(ui->TestPage_img_7, 100, 100);

	//Write style for TestPage_img_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->TestPage_img_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes TestPage_img_8
	ui->TestPage_img_8 = lv_img_create(ui->TestPage);
	lv_obj_add_flag(ui->TestPage_img_8, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->TestPage_img_8, &_devrestart_alpha_100x100);
	lv_img_set_pivot(ui->TestPage_img_8, 50,50);
	lv_img_set_angle(ui->TestPage_img_8, 0);
	lv_obj_set_pos(ui->TestPage_img_8, 134, 313);
	lv_obj_set_size(ui->TestPage_img_8, 100, 100);

	//Write style for TestPage_img_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->TestPage_img_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes TestPage_img_9
	ui->TestPage_img_9 = lv_img_create(ui->TestPage);
	lv_obj_add_flag(ui->TestPage_img_9, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->TestPage_img_9, &_clock_alpha_100x100);
	lv_img_set_pivot(ui->TestPage_img_9, 50,50);
	lv_img_set_angle(ui->TestPage_img_9, 0);
	lv_obj_set_pos(ui->TestPage_img_9, -3, 427);
	lv_obj_set_size(ui->TestPage_img_9, 100, 100);

	//Write style for TestPage_img_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->TestPage_img_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes TestPage_img_10
	ui->TestPage_img_10 = lv_img_create(ui->TestPage);
	lv_obj_add_flag(ui->TestPage_img_10, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->TestPage_img_10, &_settings_2_alpha_100x100);
	lv_img_set_pivot(ui->TestPage_img_10, 50,50);
	lv_img_set_angle(ui->TestPage_img_10, 0);
	lv_obj_set_pos(ui->TestPage_img_10, 130, 436);
	lv_obj_set_size(ui->TestPage_img_10, 100, 100);

	//Write style for TestPage_img_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->TestPage_img_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes TestPage_img_11
	ui->TestPage_img_11 = lv_img_create(ui->TestPage);
	lv_obj_add_flag(ui->TestPage_img_11, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->TestPage_img_11, &_weather_alpha_100x100);
	lv_img_set_pivot(ui->TestPage_img_11, 50,50);
	lv_img_set_angle(ui->TestPage_img_11, 0);
	lv_obj_set_pos(ui->TestPage_img_11, 3, 548);
	lv_obj_set_size(ui->TestPage_img_11, 100, 100);

	//Write style for TestPage_img_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->TestPage_img_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes TestPage_img_12
	ui->TestPage_img_12 = lv_img_create(ui->TestPage);
	lv_obj_add_flag(ui->TestPage_img_12, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->TestPage_img_12, &_cander_alpha_100x100);
	lv_img_set_pivot(ui->TestPage_img_12, 50,50);
	lv_img_set_angle(ui->TestPage_img_12, 0);
	lv_obj_set_pos(ui->TestPage_img_12, 134, 561);
	lv_obj_set_size(ui->TestPage_img_12, 100, 100);

	//Write style for TestPage_img_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->TestPage_img_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes TestPage_img_13
	ui->TestPage_img_13 = lv_img_create(ui->TestPage);
	lv_obj_add_flag(ui->TestPage_img_13, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->TestPage_img_13, &_mqttx_alpha_100x100);
	lv_img_set_pivot(ui->TestPage_img_13, 50,50);
	lv_img_set_angle(ui->TestPage_img_13, 0);
	lv_obj_set_pos(ui->TestPage_img_13, 3, 661);
	lv_obj_set_size(ui->TestPage_img_13, 100, 100);

	//Write style for TestPage_img_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->TestPage_img_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes TestPage_img_14
	ui->TestPage_img_14 = lv_img_create(ui->TestPage);
	lv_obj_add_flag(ui->TestPage_img_14, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->TestPage_img_14, &_2B2B_alpha_240x240);
	lv_img_set_pivot(ui->TestPage_img_14, 50,50);
	lv_img_set_angle(ui->TestPage_img_14, 0);
	lv_obj_set_pos(ui->TestPage_img_14, 0, 761);
	lv_obj_set_size(ui->TestPage_img_14, 240, 240);

	//Write style for TestPage_img_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->TestPage_img_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes TestPage_img_15
	ui->TestPage_img_15 = lv_img_create(ui->TestPage);
	lv_obj_add_flag(ui->TestPage_img_15, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->TestPage_img_15, &_8148004_emoji_heart_eyes_icon_alpha_240x240);
	lv_img_set_pivot(ui->TestPage_img_15, 50,50);
	lv_img_set_angle(ui->TestPage_img_15, 0);
	lv_obj_set_pos(ui->TestPage_img_15, 277, 757);
	lv_obj_set_size(ui->TestPage_img_15, 240, 240);

	//Write style for TestPage_img_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->TestPage_img_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes TestPage_img_16
	ui->TestPage_img_16 = lv_img_create(ui->TestPage);
	lv_obj_add_flag(ui->TestPage_img_16, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->TestPage_img_16, &_baobao_alpha_240x240);
	lv_img_set_pivot(ui->TestPage_img_16, 50,50);
	lv_img_set_angle(ui->TestPage_img_16, 0);
	lv_obj_set_pos(ui->TestPage_img_16, 5, 1007);
	lv_obj_set_size(ui->TestPage_img_16, 240, 240);

	//Write style for TestPage_img_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->TestPage_img_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes TestPage_img_17
	ui->TestPage_img_17 = lv_img_create(ui->TestPage);
	lv_obj_add_flag(ui->TestPage_img_17, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->TestPage_img_17, &_decline_alpha_240x240);
	lv_img_set_pivot(ui->TestPage_img_17, 50,50);
	lv_img_set_angle(ui->TestPage_img_17, 0);
	lv_obj_set_pos(ui->TestPage_img_17, 281, 1003);
	lv_obj_set_size(ui->TestPage_img_17, 240, 240);

	//Write style for TestPage_img_17, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->TestPage_img_17, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes TestPage_img_18
	ui->TestPage_img_18 = lv_img_create(ui->TestPage);
	lv_obj_add_flag(ui->TestPage_img_18, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->TestPage_img_18, &_happy_alpha_240x240);
	lv_img_set_pivot(ui->TestPage_img_18, 50,50);
	lv_img_set_angle(ui->TestPage_img_18, 0);
	lv_obj_set_pos(ui->TestPage_img_18, 5, 1260);
	lv_obj_set_size(ui->TestPage_img_18, 240, 240);

	//Write style for TestPage_img_18, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->TestPage_img_18, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes TestPage_img_19
	ui->TestPage_img_19 = lv_img_create(ui->TestPage);
	lv_obj_add_flag(ui->TestPage_img_19, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->TestPage_img_19, &_LaughCry_alpha_240x240);
	lv_img_set_pivot(ui->TestPage_img_19, 50,50);
	lv_img_set_angle(ui->TestPage_img_19, 0);
	lv_obj_set_pos(ui->TestPage_img_19, 259, 1260);
	lv_obj_set_size(ui->TestPage_img_19, 240, 240);

	//Write style for TestPage_img_19, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->TestPage_img_19, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes TestPage_img_20
	ui->TestPage_img_20 = lv_img_create(ui->TestPage);
	lv_obj_add_flag(ui->TestPage_img_20, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->TestPage_img_20, &_StaringBlankly_alpha_240x240);
	lv_img_set_pivot(ui->TestPage_img_20, 50,50);
	lv_img_set_angle(ui->TestPage_img_20, 0);
	lv_obj_set_pos(ui->TestPage_img_20, 27, 1524);
	lv_obj_set_size(ui->TestPage_img_20, 240, 240);

	//Write style for TestPage_img_20, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->TestPage_img_20, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes TestPage_img_21
	ui->TestPage_img_21 = lv_img_create(ui->TestPage);
	lv_obj_add_flag(ui->TestPage_img_21, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->TestPage_img_21, &_2B2B2B_alpha_240x240);
	lv_img_set_pivot(ui->TestPage_img_21, 50,50);
	lv_img_set_angle(ui->TestPage_img_21, 0);
	lv_obj_set_pos(ui->TestPage_img_21, 277, 1524);
	lv_obj_set_size(ui->TestPage_img_21, 240, 240);

	//Write style for TestPage_img_21, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->TestPage_img_21, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes TestPage_img_22
	ui->TestPage_img_22 = lv_img_create(ui->TestPage);
	lv_obj_add_flag(ui->TestPage_img_22, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->TestPage_img_22, &_happyh_alpha_240x240);
	lv_img_set_pivot(ui->TestPage_img_22, 50,50);
	lv_img_set_angle(ui->TestPage_img_22, 0);
	lv_obj_set_pos(ui->TestPage_img_22, 25, 1793);
	lv_obj_set_size(ui->TestPage_img_22, 240, 240);

	//Write style for TestPage_img_22, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->TestPage_img_22, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes TestPage_img_23
	ui->TestPage_img_23 = lv_img_create(ui->TestPage);
	lv_obj_add_flag(ui->TestPage_img_23, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->TestPage_img_23, &_oldemoji_alpha_240x240);
	lv_img_set_pivot(ui->TestPage_img_23, 50,50);
	lv_img_set_angle(ui->TestPage_img_23, 0);
	lv_obj_set_pos(ui->TestPage_img_23, 294, 1782);
	lv_obj_set_size(ui->TestPage_img_23, 240, 240);

	//Write style for TestPage_img_23, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->TestPage_img_23, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes TestPage_img_24
	ui->TestPage_img_24 = lv_img_create(ui->TestPage);
	lv_obj_add_flag(ui->TestPage_img_24, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->TestPage_img_24, &_mubiao_alpha_240x240);
	lv_img_set_pivot(ui->TestPage_img_24, 50,50);
	lv_img_set_angle(ui->TestPage_img_24, 0);
	lv_obj_set_pos(ui->TestPage_img_24, 19, 2062);
	lv_obj_set_size(ui->TestPage_img_24, 240, 240);

	//Write style for TestPage_img_24, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->TestPage_img_24, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes TestPage_img_25
	ui->TestPage_img_25 = lv_img_create(ui->TestPage);
	lv_obj_add_flag(ui->TestPage_img_25, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->TestPage_img_25, &_dragon_alpha_240x240);
	lv_img_set_pivot(ui->TestPage_img_25, 50,50);
	lv_img_set_angle(ui->TestPage_img_25, 0);
	lv_obj_set_pos(ui->TestPage_img_25, 281, 2060);
	lv_obj_set_size(ui->TestPage_img_25, 240, 240);

	//Write style for TestPage_img_25, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->TestPage_img_25, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes TestPage_img_26
	ui->TestPage_img_26 = lv_img_create(ui->TestPage);
	lv_obj_add_flag(ui->TestPage_img_26, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->TestPage_img_26, &_call_alpha_240x240);
	lv_img_set_pivot(ui->TestPage_img_26, 50,50);
	lv_img_set_angle(ui->TestPage_img_26, 0);
	lv_obj_set_pos(ui->TestPage_img_26, 567, 776);
	lv_obj_set_size(ui->TestPage_img_26, 240, 240);

	//Write style for TestPage_img_26, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->TestPage_img_26, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes TestPage_img_27
	ui->TestPage_img_27 = lv_img_create(ui->TestPage);
	lv_obj_add_flag(ui->TestPage_img_27, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->TestPage_img_27, &_crab_alpha_240x240);
	lv_img_set_pivot(ui->TestPage_img_27, 50,50);
	lv_img_set_angle(ui->TestPage_img_27, 0);
	lv_obj_set_pos(ui->TestPage_img_27, 837, 769);
	lv_obj_set_size(ui->TestPage_img_27, 240, 240);

	//Write style for TestPage_img_27, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->TestPage_img_27, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes TestPage_img_28
	ui->TestPage_img_28 = lv_img_create(ui->TestPage);
	lv_obj_add_flag(ui->TestPage_img_28, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->TestPage_img_28, &_facered_alpha_240x240);
	lv_img_set_pivot(ui->TestPage_img_28, 50,50);
	lv_img_set_angle(ui->TestPage_img_28, 0);
	lv_obj_set_pos(ui->TestPage_img_28, 576, 1009);
	lv_obj_set_size(ui->TestPage_img_28, 240, 240);

	//Write style for TestPage_img_28, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->TestPage_img_28, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes TestPage_img_29
	ui->TestPage_img_29 = lv_img_create(ui->TestPage);
	lv_obj_add_flag(ui->TestPage_img_29, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->TestPage_img_29, &_gua_alpha_240x240);
	lv_img_set_pivot(ui->TestPage_img_29, 50,50);
	lv_img_set_angle(ui->TestPage_img_29, 0);
	lv_obj_set_pos(ui->TestPage_img_29, 853, 1016);
	lv_obj_set_size(ui->TestPage_img_29, 240, 240);

	//Write style for TestPage_img_29, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->TestPage_img_29, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes TestPage_img_30
	ui->TestPage_img_30 = lv_img_create(ui->TestPage);
	lv_obj_add_flag(ui->TestPage_img_30, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->TestPage_img_30, &_mahjong_alpha_240x240);
	lv_img_set_pivot(ui->TestPage_img_30, 50,50);
	lv_img_set_angle(ui->TestPage_img_30, 0);
	lv_obj_set_pos(ui->TestPage_img_30, 569, 1249);
	lv_obj_set_size(ui->TestPage_img_30, 240, 240);

	//Write style for TestPage_img_30, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->TestPage_img_30, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes TestPage_img_31
	ui->TestPage_img_31 = lv_img_create(ui->TestPage);
	lv_obj_add_flag(ui->TestPage_img_31, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->TestPage_img_31, &_pang_alpha_240x240);
	lv_img_set_pivot(ui->TestPage_img_31, 50,50);
	lv_img_set_angle(ui->TestPage_img_31, 0);
	lv_obj_set_pos(ui->TestPage_img_31, 843, 1256);
	lv_obj_set_size(ui->TestPage_img_31, 240, 240);

	//Write style for TestPage_img_31, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->TestPage_img_31, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes TestPage_img_32
	ui->TestPage_img_32 = lv_img_create(ui->TestPage);
	lv_obj_add_flag(ui->TestPage_img_32, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->TestPage_img_32, &_Redenvelope_alpha_240x240);
	lv_img_set_pivot(ui->TestPage_img_32, 50,50);
	lv_img_set_angle(ui->TestPage_img_32, 0);
	lv_obj_set_pos(ui->TestPage_img_32, 589, 1500);
	lv_obj_set_size(ui->TestPage_img_32, 240, 240);

	//Write style for TestPage_img_32, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->TestPage_img_32, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes TestPage_img_33
	ui->TestPage_img_33 = lv_img_create(ui->TestPage);
	lv_obj_add_flag(ui->TestPage_img_33, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->TestPage_img_33, &_tea_alpha_240x240);
	lv_img_set_pivot(ui->TestPage_img_33, 50,50);
	lv_img_set_angle(ui->TestPage_img_33, 0);
	lv_obj_set_pos(ui->TestPage_img_33, 843, 1500);
	lv_obj_set_size(ui->TestPage_img_33, 240, 240);

	//Write style for TestPage_img_33, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->TestPage_img_33, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes TestPage_img_34
	ui->TestPage_img_34 = lv_img_create(ui->TestPage);
	lv_obj_add_flag(ui->TestPage_img_34, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->TestPage_img_34, &_waterinfo_alpha_100x100);
	lv_img_set_pivot(ui->TestPage_img_34, 50,50);
	lv_img_set_angle(ui->TestPage_img_34, 0);
	lv_obj_set_pos(ui->TestPage_img_34, 124, 661);
	lv_obj_set_size(ui->TestPage_img_34, 100, 100);

	//Write style for TestPage_img_34, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->TestPage_img_34, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of TestPage.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->TestPage);

}
