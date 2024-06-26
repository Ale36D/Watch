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



void setup_scr_water(lv_ui *ui)
{
	//Write codes water
	ui->water = lv_obj_create(NULL);
	lv_obj_set_size(ui->water, 240, 280);
	lv_obj_set_scrollbar_mode(ui->water, LV_SCROLLBAR_MODE_OFF);

	//Write style for water, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->water, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->water, lv_color_hex(0x222f3e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->water, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes water_water_title_label
	ui->water_water_title_label = lv_label_create(ui->water);
	lv_label_set_text(ui->water_water_title_label, "喝水");
	lv_label_set_long_mode(ui->water_water_title_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->water_water_title_label, 70, -10);
	lv_obj_set_size(ui->water_water_title_label, 100, 24);

	//Write style for water_water_title_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->water_water_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->water_water_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->water_water_title_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->water_water_title_label, &lv_font_Apple_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->water_water_title_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->water_water_title_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->water_water_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->water_water_title_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->water_water_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->water_water_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->water_water_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->water_water_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->water_water_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->water_water_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes water_water_function_frame
	ui->water_water_function_frame = lv_obj_create(ui->water);
	lv_obj_set_pos(ui->water_water_function_frame, 10, 50);
	lv_obj_set_size(ui->water_water_function_frame, 220, 20);
	lv_obj_set_scrollbar_mode(ui->water_water_function_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for water_water_function_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->water_water_function_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->water_water_function_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->water_water_function_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->water_water_function_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->water_water_function_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->water_water_function_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->water_water_function_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->water_water_function_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes water_set_water_info_frame
	ui->water_set_water_info_frame = lv_obj_create(ui->water_water_function_frame);
	lv_obj_set_pos(ui->water_set_water_info_frame, 0, 240);
	lv_obj_set_size(ui->water_set_water_info_frame, 220, 220);
	lv_obj_set_scrollbar_mode(ui->water_set_water_info_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for water_set_water_info_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->water_set_water_info_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->water_set_water_info_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->water_set_water_info_frame, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->water_set_water_info_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->water_set_water_info_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->water_set_water_info_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->water_set_water_info_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->water_set_water_info_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->water_set_water_info_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->water_set_water_info_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes water_water_time_roller_min
	ui->water_water_time_roller_min = lv_roller_create(ui->water_set_water_info_frame);
	lv_roller_set_options(ui->water_water_time_roller_min, "10Min\n20Min\n30Min\n40Min\n50Min", LV_ROLLER_MODE_INFINITE);
	lv_obj_set_pos(ui->water_water_time_roller_min, 120, 40);
	lv_obj_set_width(ui->water_water_time_roller_min, 80);

	//Write style for water_water_time_roller_min, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_radius(ui->water_water_time_roller_min, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->water_water_time_roller_min, 175, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->water_water_time_roller_min, lv_color_hex(0xdcdde1), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->water_water_time_roller_min, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->water_water_time_roller_min, lv_color_hex(0x7f7f7f), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->water_water_time_roller_min, &lv_font_Apple_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->water_water_time_roller_min, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->water_water_time_roller_min, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->water_water_time_roller_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->water_water_time_roller_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->water_water_time_roller_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->water_water_time_roller_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for water_water_time_roller_min, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
	lv_obj_set_style_radius(ui->water_water_time_roller_min, 10, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_opa(ui->water_water_time_roller_min, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_color(ui->water_water_time_roller_min, lv_color_hex(0xdcdde1), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_grad_dir(ui->water_water_time_roller_min, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_color(ui->water_water_time_roller_min, lv_color_hex(0x333333), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_font(ui->water_water_time_roller_min, &lv_font_Apple_12, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_opa(ui->water_water_time_roller_min, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_align(ui->water_water_time_roller_min, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_width(ui->water_water_time_roller_min, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_left(ui->water_water_time_roller_min, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_right(ui->water_water_time_roller_min, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_shadow_width(ui->water_water_time_roller_min, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

	//Write style for water_water_time_roller_min, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
	lv_obj_set_style_radius(ui->water_water_time_roller_min, 10, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_bg_opa(ui->water_water_time_roller_min, 179, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_bg_color(ui->water_water_time_roller_min, lv_color_hex(0xdcdde1), LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_bg_grad_dir(ui->water_water_time_roller_min, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_text_color(ui->water_water_time_roller_min, lv_color_hex(0x333333), LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_text_font(ui->water_water_time_roller_min, &lv_font_Apple_12, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_text_opa(ui->water_water_time_roller_min, 255, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_text_align(ui->water_water_time_roller_min, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_border_width(ui->water_water_time_roller_min, 0, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_pad_left(ui->water_water_time_roller_min, 0, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_pad_right(ui->water_water_time_roller_min, 0, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_shadow_width(ui->water_water_time_roller_min, 0, LV_PART_MAIN|LV_STATE_DISABLED);

	//Write style for water_water_time_roller_min, Part: LV_PART_SELECTED, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->water_water_time_roller_min, 255, LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->water_water_time_roller_min, lv_color_hex(0x2195f6), LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->water_water_time_roller_min, LV_GRAD_DIR_NONE, LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->water_water_time_roller_min, lv_color_hex(0xFFFFFF), LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->water_water_time_roller_min, &lv_font_Apple_16, LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->water_water_time_roller_min, 255, LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->water_water_time_roller_min, LV_TEXT_ALIGN_CENTER, LV_PART_SELECTED|LV_STATE_DEFAULT);

	//Write style for water_water_time_roller_min, Part: LV_PART_SELECTED, State: LV_STATE_FOCUSED.
	lv_obj_set_style_bg_opa(ui->water_water_time_roller_min, 255, LV_PART_SELECTED|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_color(ui->water_water_time_roller_min, lv_color_hex(0x2195f6), LV_PART_SELECTED|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_grad_dir(ui->water_water_time_roller_min, LV_GRAD_DIR_NONE, LV_PART_SELECTED|LV_STATE_FOCUSED);
	lv_obj_set_style_text_color(ui->water_water_time_roller_min, lv_color_hex(0xffffff), LV_PART_SELECTED|LV_STATE_FOCUSED);
	lv_obj_set_style_text_font(ui->water_water_time_roller_min, &lv_font_Apple_16, LV_PART_SELECTED|LV_STATE_FOCUSED);
	lv_obj_set_style_text_opa(ui->water_water_time_roller_min, 255, LV_PART_SELECTED|LV_STATE_FOCUSED);
	lv_obj_set_style_text_align(ui->water_water_time_roller_min, LV_TEXT_ALIGN_CENTER, LV_PART_SELECTED|LV_STATE_FOCUSED);

	//Write style for water_water_time_roller_min, Part: LV_PART_SELECTED, State: LV_STATE_DISABLED.
	lv_obj_set_style_bg_opa(ui->water_water_time_roller_min, 255, LV_PART_SELECTED|LV_STATE_DISABLED);
	lv_obj_set_style_bg_color(ui->water_water_time_roller_min, lv_color_hex(0x2195f6), LV_PART_SELECTED|LV_STATE_DISABLED);
	lv_obj_set_style_bg_grad_dir(ui->water_water_time_roller_min, LV_GRAD_DIR_NONE, LV_PART_SELECTED|LV_STATE_DISABLED);
	lv_obj_set_style_text_color(ui->water_water_time_roller_min, lv_color_hex(0xFFFFFF), LV_PART_SELECTED|LV_STATE_DISABLED);
	lv_obj_set_style_text_font(ui->water_water_time_roller_min, &lv_font_Apple_16, LV_PART_SELECTED|LV_STATE_DISABLED);
	lv_obj_set_style_text_opa(ui->water_water_time_roller_min, 255, LV_PART_SELECTED|LV_STATE_DISABLED);
	lv_obj_set_style_text_align(ui->water_water_time_roller_min, LV_TEXT_ALIGN_CENTER, LV_PART_SELECTED|LV_STATE_DISABLED);

	lv_roller_set_visible_row_count(ui->water_water_time_roller_min, 3);
	//Write codes water_drink_water_time_set_btn
	ui->water_drink_water_time_set_btn = lv_btn_create(ui->water_set_water_info_frame);
	ui->water_drink_water_time_set_btn_label = lv_label_create(ui->water_drink_water_time_set_btn);
	lv_label_set_text(ui->water_drink_water_time_set_btn_label, "设置");
	lv_label_set_long_mode(ui->water_drink_water_time_set_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->water_drink_water_time_set_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->water_drink_water_time_set_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->water_drink_water_time_set_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->water_drink_water_time_set_btn, 60, 150);
	lv_obj_set_size(ui->water_drink_water_time_set_btn, 100, 50);

	//Write style for water_drink_water_time_set_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->water_drink_water_time_set_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->water_drink_water_time_set_btn, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->water_drink_water_time_set_btn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->water_drink_water_time_set_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->water_drink_water_time_set_btn, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->water_drink_water_time_set_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->water_drink_water_time_set_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->water_drink_water_time_set_btn, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->water_drink_water_time_set_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->water_drink_water_time_set_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes water_set_drink_water_time_label
	ui->water_set_drink_water_time_label = lv_label_create(ui->water_set_water_info_frame);
	lv_label_set_text(ui->water_set_drink_water_time_label, "设置提醒时间");
	lv_label_set_long_mode(ui->water_set_drink_water_time_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->water_set_drink_water_time_label, 0, 10);
	lv_obj_set_size(ui->water_set_drink_water_time_label, 220, 16);

	//Write style for water_set_drink_water_time_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->water_set_drink_water_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->water_set_drink_water_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->water_set_drink_water_time_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->water_set_drink_water_time_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->water_set_drink_water_time_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->water_set_drink_water_time_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->water_set_drink_water_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->water_set_drink_water_time_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->water_set_drink_water_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->water_set_drink_water_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->water_set_drink_water_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->water_set_drink_water_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->water_set_drink_water_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->water_set_drink_water_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes water_water_time_roller_hour
	ui->water_water_time_roller_hour = lv_roller_create(ui->water_set_water_info_frame);
	lv_roller_set_options(ui->water_water_time_roller_hour, "0 hour\n1 hour\n2 hour", LV_ROLLER_MODE_INFINITE);
	lv_obj_set_pos(ui->water_water_time_roller_hour, 20, 40);
	lv_obj_set_width(ui->water_water_time_roller_hour, 80);

	//Write style for water_water_time_roller_hour, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_radius(ui->water_water_time_roller_hour, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->water_water_time_roller_hour, 175, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->water_water_time_roller_hour, lv_color_hex(0xdcdde1), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->water_water_time_roller_hour, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->water_water_time_roller_hour, lv_color_hex(0x7f7f7f), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->water_water_time_roller_hour, &lv_font_Apple_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->water_water_time_roller_hour, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->water_water_time_roller_hour, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->water_water_time_roller_hour, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->water_water_time_roller_hour, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->water_water_time_roller_hour, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->water_water_time_roller_hour, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for water_water_time_roller_hour, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
	lv_obj_set_style_radius(ui->water_water_time_roller_hour, 10, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_opa(ui->water_water_time_roller_hour, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_color(ui->water_water_time_roller_hour, lv_color_hex(0xdcdde1), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_grad_dir(ui->water_water_time_roller_hour, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_color(ui->water_water_time_roller_hour, lv_color_hex(0x333333), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_font(ui->water_water_time_roller_hour, &lv_font_Apple_12, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_opa(ui->water_water_time_roller_hour, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_align(ui->water_water_time_roller_hour, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_width(ui->water_water_time_roller_hour, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_left(ui->water_water_time_roller_hour, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_right(ui->water_water_time_roller_hour, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_shadow_width(ui->water_water_time_roller_hour, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

	//Write style for water_water_time_roller_hour, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
	lv_obj_set_style_radius(ui->water_water_time_roller_hour, 10, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_bg_opa(ui->water_water_time_roller_hour, 179, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_bg_color(ui->water_water_time_roller_hour, lv_color_hex(0xdcdde1), LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_bg_grad_dir(ui->water_water_time_roller_hour, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_text_color(ui->water_water_time_roller_hour, lv_color_hex(0x333333), LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_text_font(ui->water_water_time_roller_hour, &lv_font_Apple_12, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_text_opa(ui->water_water_time_roller_hour, 255, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_text_align(ui->water_water_time_roller_hour, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_border_width(ui->water_water_time_roller_hour, 0, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_pad_left(ui->water_water_time_roller_hour, 0, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_pad_right(ui->water_water_time_roller_hour, 0, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_shadow_width(ui->water_water_time_roller_hour, 0, LV_PART_MAIN|LV_STATE_DISABLED);

	//Write style for water_water_time_roller_hour, Part: LV_PART_SELECTED, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->water_water_time_roller_hour, 255, LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->water_water_time_roller_hour, lv_color_hex(0x2195f6), LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->water_water_time_roller_hour, LV_GRAD_DIR_NONE, LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->water_water_time_roller_hour, lv_color_hex(0xFFFFFF), LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->water_water_time_roller_hour, &lv_font_Apple_16, LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->water_water_time_roller_hour, 255, LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->water_water_time_roller_hour, LV_TEXT_ALIGN_CENTER, LV_PART_SELECTED|LV_STATE_DEFAULT);

	//Write style for water_water_time_roller_hour, Part: LV_PART_SELECTED, State: LV_STATE_FOCUSED.
	lv_obj_set_style_bg_opa(ui->water_water_time_roller_hour, 255, LV_PART_SELECTED|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_color(ui->water_water_time_roller_hour, lv_color_hex(0x2195f6), LV_PART_SELECTED|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_grad_dir(ui->water_water_time_roller_hour, LV_GRAD_DIR_NONE, LV_PART_SELECTED|LV_STATE_FOCUSED);
	lv_obj_set_style_text_color(ui->water_water_time_roller_hour, lv_color_hex(0xffffff), LV_PART_SELECTED|LV_STATE_FOCUSED);
	lv_obj_set_style_text_font(ui->water_water_time_roller_hour, &lv_font_Apple_16, LV_PART_SELECTED|LV_STATE_FOCUSED);
	lv_obj_set_style_text_opa(ui->water_water_time_roller_hour, 255, LV_PART_SELECTED|LV_STATE_FOCUSED);
	lv_obj_set_style_text_align(ui->water_water_time_roller_hour, LV_TEXT_ALIGN_CENTER, LV_PART_SELECTED|LV_STATE_FOCUSED);

	//Write style for water_water_time_roller_hour, Part: LV_PART_SELECTED, State: LV_STATE_DISABLED.
	lv_obj_set_style_bg_opa(ui->water_water_time_roller_hour, 255, LV_PART_SELECTED|LV_STATE_DISABLED);
	lv_obj_set_style_bg_color(ui->water_water_time_roller_hour, lv_color_hex(0x2195f6), LV_PART_SELECTED|LV_STATE_DISABLED);
	lv_obj_set_style_bg_grad_dir(ui->water_water_time_roller_hour, LV_GRAD_DIR_NONE, LV_PART_SELECTED|LV_STATE_DISABLED);
	lv_obj_set_style_text_color(ui->water_water_time_roller_hour, lv_color_hex(0xFFFFFF), LV_PART_SELECTED|LV_STATE_DISABLED);
	lv_obj_set_style_text_font(ui->water_water_time_roller_hour, &lv_font_Apple_16, LV_PART_SELECTED|LV_STATE_DISABLED);
	lv_obj_set_style_text_opa(ui->water_water_time_roller_hour, 255, LV_PART_SELECTED|LV_STATE_DISABLED);
	lv_obj_set_style_text_align(ui->water_water_time_roller_hour, LV_TEXT_ALIGN_CENTER, LV_PART_SELECTED|LV_STATE_DISABLED);

	lv_roller_set_visible_row_count(ui->water_water_time_roller_hour, 3);
	//Write codes water_water_info_frame
	ui->water_water_info_frame = lv_obj_create(ui->water_water_function_frame);
	lv_obj_set_pos(ui->water_water_info_frame, 0, 0);
	lv_obj_set_size(ui->water_water_info_frame, 220, 220);
	lv_obj_set_scrollbar_mode(ui->water_water_info_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for water_water_info_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->water_water_info_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->water_water_info_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->water_water_info_frame, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->water_water_info_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->water_water_info_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->water_water_info_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->water_water_info_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->water_water_info_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->water_water_info_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->water_water_info_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes water_water_drink_num_label
	ui->water_water_drink_num_label = lv_label_create(ui->water_water_info_frame);
	lv_label_set_text(ui->water_water_drink_num_label, "0ml/3000ml");
	lv_label_set_long_mode(ui->water_water_drink_num_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->water_water_drink_num_label, 0, 80);
	lv_obj_set_size(ui->water_water_drink_num_label, 220, 32);

	//Write style for water_water_drink_num_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->water_water_drink_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->water_water_drink_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->water_water_drink_num_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->water_water_drink_num_label, &lv_font_Apple_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->water_water_drink_num_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->water_water_drink_num_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->water_water_drink_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->water_water_drink_num_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->water_water_drink_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->water_water_drink_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->water_water_drink_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->water_water_drink_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->water_water_drink_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->water_water_drink_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes water_water_chicken_soup_label
	ui->water_water_chicken_soup_label = lv_label_create(ui->water_water_info_frame);
	lv_label_set_text(ui->water_water_chicken_soup_label, "一天八杯水，让您的身体始终保持清新活力");
	lv_label_set_long_mode(ui->water_water_chicken_soup_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->water_water_chicken_soup_label, 0, 30);
	lv_obj_set_size(ui->water_water_chicken_soup_label, 220, 24);

	//Write style for water_water_chicken_soup_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->water_water_chicken_soup_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->water_water_chicken_soup_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->water_water_chicken_soup_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->water_water_chicken_soup_label, &lv_font_Apple_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->water_water_chicken_soup_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->water_water_chicken_soup_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->water_water_chicken_soup_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->water_water_chicken_soup_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->water_water_chicken_soup_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->water_water_chicken_soup_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->water_water_chicken_soup_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->water_water_chicken_soup_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->water_water_chicken_soup_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->water_water_chicken_soup_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes water_water_schedule_bar
	ui->water_water_schedule_bar = lv_bar_create(ui->water_water_info_frame);
	lv_obj_set_style_anim_time(ui->water_water_schedule_bar, 1000, 0);
	lv_bar_set_mode(ui->water_water_schedule_bar, LV_BAR_MODE_NORMAL);
	lv_bar_set_range(ui->water_water_schedule_bar, 0, 100);
	lv_bar_set_value(ui->water_water_schedule_bar, 0, LV_ANIM_OFF);
	lv_obj_set_pos(ui->water_water_schedule_bar, 20, 10);
	lv_obj_set_size(ui->water_water_schedule_bar, 180, 10);

	//Write style for water_water_schedule_bar, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->water_water_schedule_bar, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->water_water_schedule_bar, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->water_water_schedule_bar, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->water_water_schedule_bar, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->water_water_schedule_bar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for water_water_schedule_bar, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->water_water_schedule_bar, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->water_water_schedule_bar, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->water_water_schedule_bar, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->water_water_schedule_bar, 10, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write codes water_water_img
	ui->water_water_img = lv_img_create(ui->water_water_info_frame);
	lv_obj_add_flag(ui->water_water_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->water_water_img, &_Water_alpha_64x64);
	lv_img_set_pivot(ui->water_water_img, 50,50);
	lv_img_set_angle(ui->water_water_img, 0);
	lv_obj_set_pos(ui->water_water_img, 78, 130);
	lv_obj_set_size(ui->water_water_img, 64, 64);

	//Write style for water_water_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->water_water_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes water_water_tips_label
	ui->water_water_tips_label = lv_label_create(ui->water_water_info_frame);
	lv_label_set_text(ui->water_water_tips_label, "点击记录");
	lv_label_set_long_mode(ui->water_water_tips_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->water_water_tips_label, 60, 200);
	lv_obj_set_size(ui->water_water_tips_label, 100, 16);

	//Write style for water_water_tips_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->water_water_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->water_water_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->water_water_tips_label, lv_color_hex(0xa1a1a1), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->water_water_tips_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->water_water_tips_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->water_water_tips_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->water_water_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->water_water_tips_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->water_water_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->water_water_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->water_water_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->water_water_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->water_water_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->water_water_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of water.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->water);

	//Init events for screen.
	events_init_water(ui);
}
