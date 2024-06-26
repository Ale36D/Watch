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



void setup_scr_Sensor(lv_ui *ui)
{
	//Write codes Sensor
	ui->Sensor = lv_obj_create(NULL);
	lv_obj_set_size(ui->Sensor, 240, 280);
	lv_obj_set_scrollbar_mode(ui->Sensor, LV_SCROLLBAR_MODE_OFF);

	//Write style for Sensor, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Sensor, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Sensor, lv_color_hex(0x222f3e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Sensor, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Sensor_img
	ui->Sensor_img = lv_img_create(ui->Sensor);
	lv_obj_add_flag(ui->Sensor_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Sensor_img, &_aircraft_alpha_100x100);
	lv_img_set_pivot(ui->Sensor_img, 50,50);
	lv_img_set_angle(ui->Sensor_img, 0);
	lv_obj_set_pos(ui->Sensor_img, 70, 110);
	lv_obj_set_size(ui->Sensor_img, 100, 100);

	//Write style for Sensor_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->Sensor_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Sensor_sensor_title_label
	ui->Sensor_sensor_title_label = lv_label_create(ui->Sensor);
	lv_label_set_text(ui->Sensor_sensor_title_label, "传感器");
	lv_label_set_long_mode(ui->Sensor_sensor_title_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Sensor_sensor_title_label, 70, -10);
	lv_obj_set_size(ui->Sensor_sensor_title_label, 100, 24);

	//Write style for Sensor_sensor_title_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Sensor_sensor_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Sensor_sensor_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Sensor_sensor_title_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Sensor_sensor_title_label, &lv_font_Apple_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Sensor_sensor_title_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Sensor_sensor_title_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Sensor_sensor_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Sensor_sensor_title_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Sensor_sensor_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Sensor_sensor_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Sensor_sensor_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Sensor_sensor_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Sensor_sensor_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Sensor_sensor_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Sensor_sensor_frame
	ui->Sensor_sensor_frame = lv_obj_create(ui->Sensor);
	lv_obj_set_pos(ui->Sensor_sensor_frame, 10, 80);
	lv_obj_set_size(ui->Sensor_sensor_frame, 220, 20);
	lv_obj_set_scrollbar_mode(ui->Sensor_sensor_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Sensor_sensor_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Sensor_sensor_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Sensor_sensor_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Sensor_sensor_frame, 27, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Sensor_sensor_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Sensor_sensor_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Sensor_sensor_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Sensor_sensor_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Sensor_sensor_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Sensor_sensor_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Sensor_sensor_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Sensor_temp_frame
	ui->Sensor_temp_frame = lv_obj_create(ui->Sensor_sensor_frame);
	lv_obj_set_pos(ui->Sensor_temp_frame, 20, 20);
	lv_obj_set_size(ui->Sensor_temp_frame, 80, 80);
	lv_obj_set_scrollbar_mode(ui->Sensor_temp_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Sensor_temp_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Sensor_temp_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Sensor_temp_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Sensor_temp_frame, 204, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Sensor_temp_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Sensor_temp_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Sensor_temp_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Sensor_temp_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Sensor_temp_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Sensor_temp_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Sensor_temp_frame, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->Sensor_temp_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->Sensor_temp_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->Sensor_temp_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->Sensor_temp_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->Sensor_temp_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Sensor_temp_label
	ui->Sensor_temp_label = lv_label_create(ui->Sensor_temp_frame);
	lv_label_set_text(ui->Sensor_temp_label, "16°");
	lv_label_set_long_mode(ui->Sensor_temp_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Sensor_temp_label, 0, 40);
	lv_obj_set_size(ui->Sensor_temp_label, 80, 32);

	//Write style for Sensor_temp_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Sensor_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Sensor_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Sensor_temp_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Sensor_temp_label, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Sensor_temp_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Sensor_temp_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Sensor_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Sensor_temp_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Sensor_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Sensor_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Sensor_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Sensor_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Sensor_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Sensor_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Sensor_temp_tips_label
	ui->Sensor_temp_tips_label = lv_label_create(ui->Sensor_temp_frame);
	lv_label_set_text(ui->Sensor_temp_tips_label, "温度");
	lv_label_set_long_mode(ui->Sensor_temp_tips_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Sensor_temp_tips_label, 0, 10);
	lv_obj_set_size(ui->Sensor_temp_tips_label, 80, 16);

	//Write style for Sensor_temp_tips_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Sensor_temp_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Sensor_temp_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Sensor_temp_tips_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Sensor_temp_tips_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Sensor_temp_tips_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Sensor_temp_tips_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Sensor_temp_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Sensor_temp_tips_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Sensor_temp_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Sensor_temp_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Sensor_temp_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Sensor_temp_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Sensor_temp_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Sensor_temp_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Sensor_humi_frame
	ui->Sensor_humi_frame = lv_obj_create(ui->Sensor_sensor_frame);
	lv_obj_set_pos(ui->Sensor_humi_frame, 120, 20);
	lv_obj_set_size(ui->Sensor_humi_frame, 80, 80);
	lv_obj_set_scrollbar_mode(ui->Sensor_humi_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Sensor_humi_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Sensor_humi_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Sensor_humi_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Sensor_humi_frame, 202, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Sensor_humi_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Sensor_humi_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Sensor_humi_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Sensor_humi_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Sensor_humi_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Sensor_humi_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Sensor_humi_frame, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->Sensor_humi_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->Sensor_humi_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->Sensor_humi_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->Sensor_humi_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->Sensor_humi_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Sensor_humi_label
	ui->Sensor_humi_label = lv_label_create(ui->Sensor_humi_frame);
	lv_label_set_text(ui->Sensor_humi_label, "55%");
	lv_label_set_long_mode(ui->Sensor_humi_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Sensor_humi_label, 0, 40);
	lv_obj_set_size(ui->Sensor_humi_label, 80, 32);

	//Write style for Sensor_humi_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Sensor_humi_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Sensor_humi_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Sensor_humi_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Sensor_humi_label, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Sensor_humi_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Sensor_humi_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Sensor_humi_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Sensor_humi_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Sensor_humi_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Sensor_humi_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Sensor_humi_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Sensor_humi_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Sensor_humi_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Sensor_humi_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Sensor_humi_tips_label
	ui->Sensor_humi_tips_label = lv_label_create(ui->Sensor_humi_frame);
	lv_label_set_text(ui->Sensor_humi_tips_label, "湿度");
	lv_label_set_long_mode(ui->Sensor_humi_tips_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Sensor_humi_tips_label, 0, 10);
	lv_obj_set_size(ui->Sensor_humi_tips_label, 80, 16);

	//Write style for Sensor_humi_tips_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Sensor_humi_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Sensor_humi_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Sensor_humi_tips_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Sensor_humi_tips_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Sensor_humi_tips_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Sensor_humi_tips_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Sensor_humi_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Sensor_humi_tips_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Sensor_humi_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Sensor_humi_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Sensor_humi_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Sensor_humi_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Sensor_humi_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Sensor_humi_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Sensor_function_frame
	ui->Sensor_function_frame = lv_obj_create(ui->Sensor_sensor_frame);
	lv_obj_set_pos(ui->Sensor_function_frame, 20, 120);
	lv_obj_set_size(ui->Sensor_function_frame, 180, 80);
	lv_obj_set_scrollbar_mode(ui->Sensor_function_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Sensor_function_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Sensor_function_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Sensor_function_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Sensor_function_frame, 205, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Sensor_function_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Sensor_function_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Sensor_function_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Sensor_function_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Sensor_function_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Sensor_function_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Sensor_function_frame, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->Sensor_function_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->Sensor_function_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->Sensor_function_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->Sensor_function_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->Sensor_function_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Sensor_function_list_frame
	ui->Sensor_function_list_frame = lv_obj_create(ui->Sensor_function_frame);
	lv_obj_set_pos(ui->Sensor_function_list_frame, 10, 10);
	lv_obj_set_size(ui->Sensor_function_list_frame, 160, 30);
	lv_obj_set_scrollbar_mode(ui->Sensor_function_list_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Sensor_function_list_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Sensor_function_list_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Sensor_function_list_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Sensor_function_list_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Sensor_function_list_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Sensor_function_list_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Sensor_function_list_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Sensor_function_list_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Sensor_function_list_frame, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->Sensor_function_list_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->Sensor_function_list_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->Sensor_function_list_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->Sensor_function_list_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->Sensor_function_list_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Sensor_led_label
	ui->Sensor_led_label = lv_label_create(ui->Sensor_function_list_frame);
	lv_label_set_text(ui->Sensor_led_label, "手电筒");
	lv_label_set_long_mode(ui->Sensor_led_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Sensor_led_label, 10, 7);
	lv_obj_set_size(ui->Sensor_led_label, 70, 16);

	//Write style for Sensor_led_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Sensor_led_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Sensor_led_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Sensor_led_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Sensor_led_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Sensor_led_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Sensor_led_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Sensor_led_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Sensor_led_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Sensor_led_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Sensor_led_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Sensor_led_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Sensor_led_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Sensor_led_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Sensor_led_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Sensor_lamp_sw
	ui->Sensor_lamp_sw = lv_switch_create(ui->Sensor_function_list_frame);
	lv_obj_set_pos(ui->Sensor_lamp_sw, 110, 5);
	lv_obj_set_size(ui->Sensor_lamp_sw, 40, 20);

	//Write style for Sensor_lamp_sw, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Sensor_lamp_sw, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Sensor_lamp_sw, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Sensor_lamp_sw, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Sensor_lamp_sw, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Sensor_lamp_sw, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Sensor_lamp_sw, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Sensor_lamp_sw, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
	lv_obj_set_style_bg_opa(ui->Sensor_lamp_sw, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->Sensor_lamp_sw, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->Sensor_lamp_sw, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->Sensor_lamp_sw, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

	//Write style for Sensor_lamp_sw, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Sensor_lamp_sw, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Sensor_lamp_sw, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Sensor_lamp_sw, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Sensor_lamp_sw, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Sensor_lamp_sw, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes Sensor_funtion_lamp_frame
	ui->Sensor_funtion_lamp_frame = lv_obj_create(ui->Sensor);
	lv_obj_set_pos(ui->Sensor_funtion_lamp_frame, -240, 0);
	lv_obj_set_size(ui->Sensor_funtion_lamp_frame, 240, 280);
	lv_obj_set_scrollbar_mode(ui->Sensor_funtion_lamp_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Sensor_funtion_lamp_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Sensor_funtion_lamp_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Sensor_funtion_lamp_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Sensor_funtion_lamp_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Sensor_funtion_lamp_frame, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Sensor_funtion_lamp_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Sensor_funtion_lamp_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Sensor_funtion_lamp_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Sensor_funtion_lamp_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Sensor_funtion_lamp_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Sensor_funtion_lamp_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of Sensor.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->Sensor);

	//Init events for screen.
	events_init_Sensor(ui);
}
