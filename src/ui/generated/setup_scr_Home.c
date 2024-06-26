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



void setup_scr_Home(lv_ui *ui)
{
	//Write codes Home
	ui->Home = lv_obj_create(NULL);
	lv_obj_set_size(ui->Home, 240, 280);
	lv_obj_set_scrollbar_mode(ui->Home, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Home, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Home, lv_color_hex(0x2f3640), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Home, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_home_frame
	ui->Home_home_frame = lv_obj_create(ui->Home);
	lv_obj_set_pos(ui->Home_home_frame, 0, 60);
	lv_obj_set_size(ui->Home_home_frame, 240, 240);
	lv_obj_set_scrollbar_mode(ui->Home_home_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home_home_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_home_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_home_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_home_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_home_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_home_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_home_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_home_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_home_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_view
	ui->Home_view = lv_tileview_create(ui->Home_home_frame);
	ui->Home_view_apps = lv_tileview_add_tile(ui->Home_view, 0, 0, LV_DIR_RIGHT);
	lv_obj_set_pos(ui->Home_view, 720, 0);
	lv_obj_set_size(ui->Home_view, 240, 240);
	lv_obj_set_scrollbar_mode(ui->Home_view, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home_view, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Home_view, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_view, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_view, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Home_view, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Home_view, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Home_view, lv_color_hex(0xeaeff3), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Home_view, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_view, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);



	//Write codes Home_allapps_frame
	ui->Home_allapps_frame = lv_obj_create(ui->Home_view_apps);
	lv_obj_set_pos(ui->Home_allapps_frame, 70, 50);
	lv_obj_set_size(ui->Home_allapps_frame, 100, 140);
	lv_obj_set_scrollbar_mode(ui->Home_allapps_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home_allapps_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_allapps_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_allapps_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_allapps_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_allapps_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_allapps_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_allapps_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_allapps_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_allapps_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_allapps_img
	ui->Home_allapps_img = lv_img_create(ui->Home_allapps_frame);
	lv_obj_add_flag(ui->Home_allapps_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Home_allapps_img, &_apps_alpha_100x100);
	lv_img_set_pivot(ui->Home_allapps_img, 50,50);
	lv_img_set_angle(ui->Home_allapps_img, 0);
	lv_obj_set_pos(ui->Home_allapps_img, 0, 0);
	lv_obj_set_size(ui->Home_allapps_img, 100, 100);

	//Write style for Home_allapps_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->Home_allapps_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_allapps_label
	ui->Home_allapps_label = lv_label_create(ui->Home_allapps_frame);
	lv_label_set_text(ui->Home_allapps_label, "APP列表");
	lv_label_set_long_mode(ui->Home_allapps_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Home_allapps_label, 0, 110);
	lv_obj_set_size(ui->Home_allapps_label, 100, 16);

	//Write style for Home_allapps_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_allapps_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_allapps_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Home_allapps_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Home_allapps_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Home_allapps_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Home_allapps_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Home_allapps_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Home_allapps_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_allapps_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_allapps_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_allapps_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_allapps_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_allapps_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_allapps_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_func_frame
	ui->Home_func_frame = lv_obj_create(ui->Home_home_frame);
	lv_obj_set_pos(ui->Home_func_frame, 480, 0);
	lv_obj_set_size(ui->Home_func_frame, 240, 240);
	lv_obj_set_scrollbar_mode(ui->Home_func_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home_func_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_func_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_func_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_func_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_func_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_func_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_func_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_func_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_func_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_weather_bg_frame
	ui->Home_weather_bg_frame = lv_obj_create(ui->Home_func_frame);
	lv_obj_set_pos(ui->Home_weather_bg_frame, 0, 0);
	lv_obj_set_size(ui->Home_weather_bg_frame, 240, 240);
	lv_obj_set_scrollbar_mode(ui->Home_weather_bg_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home_weather_bg_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_weather_bg_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_weather_bg_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_weather_bg_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_weather_bg_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_weather_bg_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_weather_bg_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_weather_bg_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_weather_bg_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_weather_frame
	ui->Home_weather_frame = lv_obj_create(ui->Home_weather_bg_frame);
	lv_obj_set_pos(ui->Home_weather_frame, 20, 10);
	lv_obj_set_size(ui->Home_weather_frame, 200, 100);
	lv_obj_set_scrollbar_mode(ui->Home_weather_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home_weather_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_weather_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_weather_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_weather_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Home_weather_frame, lv_color_hex(0x2e86de), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Home_weather_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_weather_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_weather_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_weather_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_weather_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_weather_frame, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->Home_weather_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->Home_weather_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->Home_weather_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->Home_weather_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->Home_weather_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_img_5
	ui->Home_img_5 = lv_img_create(ui->Home_weather_frame);
	lv_obj_add_flag(ui->Home_img_5, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Home_img_5, &_location_1_alpha_32x32);
	lv_img_set_pivot(ui->Home_img_5, 50,50);
	lv_img_set_angle(ui->Home_img_5, 0);
	lv_obj_set_pos(ui->Home_img_5, 70, 34);
	lv_obj_set_size(ui->Home_img_5, 32, 32);

	//Write style for Home_img_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->Home_img_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_weather_location_label
	ui->Home_weather_location_label = lv_label_create(ui->Home_weather_frame);
	lv_label_set_text(ui->Home_weather_location_label, "菏泽");
	lv_label_set_long_mode(ui->Home_weather_location_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Home_weather_location_label, 16, 28);
	lv_obj_set_size(ui->Home_weather_location_label, 75, 16);

	//Write style for Home_weather_location_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_weather_location_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_weather_location_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Home_weather_location_label, lv_color_hex(0xdbdbdb), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Home_weather_location_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Home_weather_location_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Home_weather_location_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Home_weather_location_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Home_weather_location_label, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_weather_location_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_weather_location_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_weather_location_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_weather_location_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_weather_location_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_weather_location_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_weather_temp_label
	ui->Home_weather_temp_label = lv_label_create(ui->Home_weather_frame);
	lv_label_set_text(ui->Home_weather_temp_label, "16°");
	lv_label_set_long_mode(ui->Home_weather_temp_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Home_weather_temp_label, 100, 34);
	lv_obj_set_size(ui->Home_weather_temp_label, 80, 32);

	//Write style for Home_weather_temp_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_weather_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_weather_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Home_weather_temp_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Home_weather_temp_label, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Home_weather_temp_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Home_weather_temp_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Home_weather_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Home_weather_temp_label, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_weather_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_weather_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_weather_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_weather_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_weather_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_weather_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_weather_code_label
	ui->Home_weather_code_label = lv_label_create(ui->Home_weather_frame);
	lv_label_set_text(ui->Home_weather_code_label, "晴");
	lv_label_set_long_mode(ui->Home_weather_code_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Home_weather_code_label, 16, 58);
	lv_obj_set_size(ui->Home_weather_code_label, 50, 16);

	//Write style for Home_weather_code_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_weather_code_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_weather_code_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Home_weather_code_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Home_weather_code_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Home_weather_code_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Home_weather_code_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Home_weather_code_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Home_weather_code_label, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_weather_code_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_weather_code_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_weather_code_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_weather_code_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_weather_code_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_weather_code_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_hint_frame
	ui->Home_hint_frame = lv_obj_create(ui->Home_weather_bg_frame);
	lv_obj_set_pos(ui->Home_hint_frame, 20, 130);
	lv_obj_set_size(ui->Home_hint_frame, 200, 100);
	lv_obj_set_scrollbar_mode(ui->Home_hint_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home_hint_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_hint_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_hint_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_hint_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Home_hint_frame, lv_color_hex(0x341f97), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Home_hint_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_hint_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_hint_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_hint_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_hint_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_hint_frame, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->Home_hint_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->Home_hint_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->Home_hint_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->Home_hint_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->Home_hint_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_hint_label
	ui->Home_hint_label = lv_label_create(ui->Home_hint_frame);
	lv_label_set_text(ui->Home_hint_label, "今天记得喝水");
	lv_label_set_long_mode(ui->Home_hint_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Home_hint_label, 10, 10);
	lv_obj_set_size(ui->Home_hint_label, 109, 16);

	//Write style for Home_hint_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_hint_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_hint_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Home_hint_label, lv_color_hex(0xd0d0d0), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Home_hint_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Home_hint_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Home_hint_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Home_hint_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Home_hint_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_hint_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_hint_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_hint_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_hint_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_hint_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_hint_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_hint_btn
	ui->Home_hint_btn = lv_btn_create(ui->Home_hint_frame);
	ui->Home_hint_btn_label = lv_label_create(ui->Home_hint_btn);
	lv_label_set_text(ui->Home_hint_btn_label, "设置");
	lv_label_set_long_mode(ui->Home_hint_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Home_hint_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Home_hint_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->Home_hint_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->Home_hint_btn, 145, 4);
	lv_obj_set_size(ui->Home_hint_btn, 50, 32);

	//Write style for Home_hint_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Home_hint_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Home_hint_btn, lv_color_hex(0x5f27cd), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Home_hint_btn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Home_hint_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_hint_btn, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_hint_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Home_hint_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Home_hint_btn, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Home_hint_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Home_hint_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_img_6
	ui->Home_img_6 = lv_img_create(ui->Home_hint_frame);
	lv_obj_add_flag(ui->Home_img_6, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Home_img_6, &_notice_2_alpha_32x32);
	lv_img_set_pivot(ui->Home_img_6, 50,50);
	lv_img_set_angle(ui->Home_img_6, 0);
	lv_obj_set_pos(ui->Home_img_6, 10, 40);
	lv_obj_set_size(ui->Home_img_6, 32, 32);

	//Write style for Home_img_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->Home_img_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_next_drink_water_time_label
	ui->Home_next_drink_water_time_label = lv_label_create(ui->Home_hint_frame);
	lv_label_set_text(ui->Home_next_drink_water_time_label, "XXX分钟后");
	lv_label_set_long_mode(ui->Home_next_drink_water_time_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Home_next_drink_water_time_label, 50, 44);
	lv_obj_set_size(ui->Home_next_drink_water_time_label, 140, 24);

	//Write style for Home_next_drink_water_time_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_next_drink_water_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_next_drink_water_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Home_next_drink_water_time_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Home_next_drink_water_time_label, &lv_font_Apple_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Home_next_drink_water_time_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Home_next_drink_water_time_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Home_next_drink_water_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Home_next_drink_water_time_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_next_drink_water_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_next_drink_water_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_next_drink_water_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_next_drink_water_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_next_drink_water_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_next_drink_water_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_Next_drinking_water_bar
	ui->Home_Next_drinking_water_bar = lv_bar_create(ui->Home_hint_frame);
	lv_obj_set_style_anim_time(ui->Home_Next_drinking_water_bar, 100, 0);
	lv_bar_set_mode(ui->Home_Next_drinking_water_bar, LV_BAR_MODE_NORMAL);
	lv_bar_set_range(ui->Home_Next_drinking_water_bar, 0, 100);
	lv_bar_set_value(ui->Home_Next_drinking_water_bar, 1, LV_ANIM_ON);
	lv_obj_set_pos(ui->Home_Next_drinking_water_bar, 11, 93);
	lv_obj_set_size(ui->Home_Next_drinking_water_bar, 180, 5);

	//Write style for Home_Next_drinking_water_bar, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Home_Next_drinking_water_bar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_Next_drinking_water_bar, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_Next_drinking_water_bar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Home_Next_drinking_water_bar, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Home_Next_drinking_water_bar, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Home_Next_drinking_water_bar, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Home_Next_drinking_water_bar, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_Next_drinking_water_bar, 10, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write codes Home_Drinked_label
	ui->Home_Drinked_label = lv_label_create(ui->Home_hint_frame);
	lv_label_set_text(ui->Home_Drinked_label, "0/3000ml");
	lv_label_set_long_mode(ui->Home_Drinked_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Home_Drinked_label, 0, 76);
	lv_obj_set_size(ui->Home_Drinked_label, 200, 12);

	//Write style for Home_Drinked_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_Drinked_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_Drinked_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Home_Drinked_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Home_Drinked_label, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Home_Drinked_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Home_Drinked_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Home_Drinked_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Home_Drinked_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_Drinked_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_Drinked_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_Drinked_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_Drinked_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_Drinked_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_Drinked_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_time_frame
	ui->Home_time_frame = lv_obj_create(ui->Home_home_frame);
	lv_obj_set_pos(ui->Home_time_frame, 0, 0);
	lv_obj_set_size(ui->Home_time_frame, 240, 240);
	lv_obj_set_scrollbar_mode(ui->Home_time_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home_time_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_time_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_time_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_time_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_time_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_time_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_time_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_time_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_time_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_home_time_frame
	ui->Home_home_time_frame = lv_obj_create(ui->Home_time_frame);
	lv_obj_set_pos(ui->Home_home_time_frame, 40, 80);
	lv_obj_set_size(ui->Home_home_time_frame, 160, 100);
	lv_obj_set_scrollbar_mode(ui->Home_home_time_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home_home_time_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_home_time_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_home_time_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_home_time_frame, 52, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Home_home_time_frame, lv_color_hex(0xdfe6e9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Home_home_time_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_home_time_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_home_time_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_home_time_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_home_time_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_home_time_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_home_sec_label
	ui->Home_home_sec_label = lv_bar_create(ui->Home_home_time_frame);
	lv_obj_set_style_anim_time(ui->Home_home_sec_label, 100, 0);
	lv_bar_set_mode(ui->Home_home_sec_label, LV_BAR_MODE_NORMAL);
	lv_bar_set_range(ui->Home_home_sec_label, 0, 60);
	lv_bar_set_value(ui->Home_home_sec_label, 50, LV_ANIM_ON);
	lv_obj_set_pos(ui->Home_home_sec_label, 30, 85);
	lv_obj_set_size(ui->Home_home_sec_label, 100, 10);

	//Write style for Home_home_sec_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Home_home_sec_label, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Home_home_sec_label, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Home_home_sec_label, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_home_sec_label, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_home_sec_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Home_home_sec_label, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Home_home_sec_label, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Home_home_sec_label, lv_color_hex(0x2FDAAE), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Home_home_sec_label, LV_GRAD_DIR_HOR, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->Home_home_sec_label, lv_color_hex(0x26B08C), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_main_stop(ui->Home_home_sec_label, 0, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_stop(ui->Home_home_sec_label, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_home_sec_label, 10, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write codes Home_temp_label
	ui->Home_temp_label = lv_label_create(ui->Home_home_time_frame);
	lv_label_set_text(ui->Home_temp_label, "室温：15°");
	lv_label_set_long_mode(ui->Home_temp_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Home_temp_label, 30, 10);
	lv_obj_set_size(ui->Home_temp_label, 100, 16);

	//Write style for Home_temp_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Home_temp_label, lv_color_hex(0xb2bec3), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Home_temp_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Home_temp_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Home_temp_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Home_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Home_temp_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_home_time_label
	ui->Home_home_time_label = lv_label_create(ui->Home_home_time_frame);
	lv_label_set_text(ui->Home_home_time_label, "18:39");
	lv_label_set_long_mode(ui->Home_home_time_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Home_home_time_label, 0, 30);
	lv_obj_set_size(ui->Home_home_time_label, 160, 48);

	//Write style for Home_home_time_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_home_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_home_time_label, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Home_home_time_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Home_home_time_label, &lv_font_Apple_48, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Home_home_time_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Home_home_time_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Home_home_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Home_home_time_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_home_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_home_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_home_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_home_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_home_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_home_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_enlarge_img
	ui->Home_enlarge_img = lv_img_create(ui->Home_home_time_frame);
	lv_obj_add_flag(ui->Home_enlarge_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Home_enlarge_img, &_enlarge_alpha_32x32);
	lv_img_set_pivot(ui->Home_enlarge_img, 50,50);
	lv_img_set_angle(ui->Home_enlarge_img, 0);
	lv_obj_set_pos(ui->Home_enlarge_img, 127, 0);
	lv_obj_set_size(ui->Home_enlarge_img, 32, 32);

	//Write style for Home_enlarge_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->Home_enlarge_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_info_label
	ui->Home_info_label = lv_label_create(ui->Home_time_frame);
	lv_label_set_text(ui->Home_info_label, "今天宜出行");
	lv_label_set_long_mode(ui->Home_info_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Home_info_label, 70, 30);
	lv_obj_set_size(ui->Home_info_label, 100, 16);

	//Write style for Home_info_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_info_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_info_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Home_info_label, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Home_info_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Home_info_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Home_info_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Home_info_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Home_info_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_info_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_info_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_info_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_info_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_info_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_info_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_time_bg_frame
	ui->Home_time_bg_frame = lv_obj_create(ui->Home_home_frame);
	lv_obj_set_pos(ui->Home_time_bg_frame, 240, 0);
	lv_obj_set_size(ui->Home_time_bg_frame, 240, 240);
	lv_obj_set_scrollbar_mode(ui->Home_time_bg_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home_time_bg_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_time_bg_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_time_bg_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_time_bg_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_time_bg_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_time_bg_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_time_bg_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_time_bg_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->Home_time_bg_frame, &_happy_240x240, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->Home_time_bg_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_time_bg_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_status_bar_frame
	ui->Home_status_bar_frame = lv_obj_create(ui->Home);
	lv_obj_set_pos(ui->Home_status_bar_frame, 0, -30);
	lv_obj_set_size(ui->Home_status_bar_frame, 240, 60);
	lv_obj_set_scrollbar_mode(ui->Home_status_bar_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home_status_bar_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_status_bar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_status_bar_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_status_bar_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Home_status_bar_frame, lv_color_hex(0x57606f), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Home_status_bar_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_status_bar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_status_bar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_status_bar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_status_bar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_status_bar_frame, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->Home_status_bar_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->Home_status_bar_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->Home_status_bar_frame, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->Home_status_bar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->Home_status_bar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_battery_value_label
	ui->Home_battery_value_label = lv_label_create(ui->Home_status_bar_frame);
	lv_label_set_text(ui->Home_battery_value_label, "100\n");
	lv_label_set_long_mode(ui->Home_battery_value_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Home_battery_value_label, 175, 38);
	lv_obj_set_size(ui->Home_battery_value_label, 30, 12);

	//Write style for Home_battery_value_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_battery_value_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_battery_value_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Home_battery_value_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Home_battery_value_label, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Home_battery_value_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Home_battery_value_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Home_battery_value_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Home_battery_value_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_battery_value_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_battery_value_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_battery_value_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_battery_value_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_battery_value_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_battery_value_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_wifi_stats_label
	ui->Home_wifi_stats_label = lv_label_create(ui->Home_status_bar_frame);
	lv_label_set_text(ui->Home_wifi_stats_label, "" LV_SYMBOL_WARNING " ");
	lv_label_set_long_mode(ui->Home_wifi_stats_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Home_wifi_stats_label, 50, 37);
	lv_obj_set_size(ui->Home_wifi_stats_label, 20, 16);

	//Write style for Home_wifi_stats_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_wifi_stats_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_wifi_stats_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Home_wifi_stats_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Home_wifi_stats_label, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Home_wifi_stats_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Home_wifi_stats_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Home_wifi_stats_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Home_wifi_stats_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_wifi_stats_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_wifi_stats_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_wifi_stats_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_wifi_stats_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_wifi_stats_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_wifi_stats_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_voice_stats_label
	ui->Home_voice_stats_label = lv_label_create(ui->Home_status_bar_frame);
	lv_label_set_text(ui->Home_voice_stats_label, "" LV_SYMBOL_VOLUME_MAX " ");
	lv_label_set_long_mode(ui->Home_voice_stats_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Home_voice_stats_label, 75, 37);
	lv_obj_set_size(ui->Home_voice_stats_label, 20, 16);

	//Write style for Home_voice_stats_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_voice_stats_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_voice_stats_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Home_voice_stats_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Home_voice_stats_label, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Home_voice_stats_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Home_voice_stats_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Home_voice_stats_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Home_voice_stats_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_voice_stats_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_voice_stats_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_voice_stats_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_voice_stats_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_voice_stats_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_voice_stats_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_weather_stats_label
	ui->Home_weather_stats_label = lv_label_create(ui->Home_status_bar_frame);
	lv_label_set_text(ui->Home_weather_stats_label, "" LV_SYMBOL_GPS "");
	lv_label_set_long_mode(ui->Home_weather_stats_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Home_weather_stats_label, 100, 37);
	lv_obj_set_size(ui->Home_weather_stats_label, 20, 16);

	//Write style for Home_weather_stats_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_weather_stats_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_weather_stats_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Home_weather_stats_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Home_weather_stats_label, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Home_weather_stats_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Home_weather_stats_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Home_weather_stats_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Home_weather_stats_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_weather_stats_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_weather_stats_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_weather_stats_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_weather_stats_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_weather_stats_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_weather_stats_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_loaddata_spinner
	ui->Home_loaddata_spinner = lv_spinner_create(ui->Home_status_bar_frame, 1000, 60);
	lv_obj_set_pos(ui->Home_loaddata_spinner, 205, 33);
	lv_obj_set_size(ui->Home_loaddata_spinner, 24, 24);

	//Write style for Home_loaddata_spinner, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_pad_top(ui->Home_loaddata_spinner, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_loaddata_spinner, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_loaddata_spinner, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_loaddata_spinner, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_loaddata_spinner, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_width(ui->Home_loaddata_spinner, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->Home_loaddata_spinner, 47, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->Home_loaddata_spinner, lv_color_hex(0xd5d6de), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_loaddata_spinner, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Home_loaddata_spinner, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_arc_width(ui->Home_loaddata_spinner, 3, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->Home_loaddata_spinner, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->Home_loaddata_spinner, lv_color_hex(0x54a0ff), LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write codes Home_battery_label
	ui->Home_battery_label = lv_label_create(ui->Home_status_bar_frame);
	lv_label_set_text(ui->Home_battery_label, "" LV_SYMBOL_BATTERY_FULL " ");
	lv_label_set_long_mode(ui->Home_battery_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Home_battery_label, 20, 37);
	lv_obj_set_size(ui->Home_battery_label, 20, 16);

	//Write style for Home_battery_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_battery_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_battery_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Home_battery_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Home_battery_label, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Home_battery_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Home_battery_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Home_battery_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Home_battery_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_battery_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_battery_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_battery_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_battery_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_battery_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_battery_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_notice_label
	ui->Home_notice_label = lv_label_create(ui->Home_status_bar_frame);
	lv_label_set_text(ui->Home_notice_label, "" LV_SYMBOL_BELL " ");
	lv_label_set_long_mode(ui->Home_notice_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Home_notice_label, 125, 37);
	lv_obj_set_size(ui->Home_notice_label, 20, 16);

	//Write style for Home_notice_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_notice_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_notice_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Home_notice_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Home_notice_label, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Home_notice_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Home_notice_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Home_notice_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Home_notice_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_notice_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_notice_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_notice_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_notice_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_notice_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_notice_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_Mqtt_label
	ui->Home_Mqtt_label = lv_label_create(ui->Home_status_bar_frame);
	lv_label_set_text(ui->Home_Mqtt_label, "" LV_SYMBOL_ENVELOPE " ");
	lv_label_set_long_mode(ui->Home_Mqtt_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Home_Mqtt_label, 150, 37);
	lv_obj_set_size(ui->Home_Mqtt_label, 20, 16);

	//Write style for Home_Mqtt_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_Mqtt_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_Mqtt_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Home_Mqtt_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Home_Mqtt_label, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Home_Mqtt_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Home_Mqtt_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Home_Mqtt_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Home_Mqtt_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_Mqtt_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_Mqtt_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_Mqtt_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_Mqtt_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_Mqtt_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_Mqtt_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_control_center_frame
	ui->Home_control_center_frame = lv_obj_create(ui->Home);
	lv_obj_set_pos(ui->Home_control_center_frame, 0, -280);
	lv_obj_set_size(ui->Home_control_center_frame, 240, 280);
	lv_obj_set_scrollbar_mode(ui->Home_control_center_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home_control_center_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_control_center_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_control_center_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_control_center_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Home_control_center_frame, lv_color_hex(0x353b48), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Home_control_center_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_control_center_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_control_center_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_control_center_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_control_center_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_control_center_frame, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->Home_control_center_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->Home_control_center_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->Home_control_center_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->Home_control_center_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->Home_control_center_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_noticebar_frame
	ui->Home_noticebar_frame = lv_obj_create(ui->Home_control_center_frame);
	lv_obj_set_pos(ui->Home_noticebar_frame, 240, 0);
	lv_obj_set_size(ui->Home_noticebar_frame, 240, 280);
	lv_obj_set_scrollbar_mode(ui->Home_noticebar_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home_noticebar_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_noticebar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_noticebar_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_noticebar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_noticebar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_noticebar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_noticebar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_noticebar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_noticebar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_system_run_title_label
	ui->Home_system_run_title_label = lv_label_create(ui->Home_noticebar_frame);
	lv_label_set_text(ui->Home_system_run_title_label, "运行状况");
	lv_label_set_long_mode(ui->Home_system_run_title_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Home_system_run_title_label, 60, 20);
	lv_obj_set_size(ui->Home_system_run_title_label, 120, 24);

	//Write style for Home_system_run_title_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_system_run_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_system_run_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Home_system_run_title_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Home_system_run_title_label, &lv_font_Apple_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Home_system_run_title_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Home_system_run_title_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Home_system_run_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Home_system_run_title_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_system_run_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_system_run_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_system_run_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_system_run_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_system_run_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_system_run_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_memory_info_frame
	ui->Home_memory_info_frame = lv_obj_create(ui->Home_noticebar_frame);
	lv_obj_set_pos(ui->Home_memory_info_frame, 10, 60);
	lv_obj_set_size(ui->Home_memory_info_frame, 220, 80);
	lv_obj_set_scrollbar_mode(ui->Home_memory_info_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home_memory_info_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_memory_info_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_memory_info_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_memory_info_frame, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Home_memory_info_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Home_memory_info_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_memory_info_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_memory_info_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_memory_info_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_memory_info_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_memory_info_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_free_memory_label
	ui->Home_free_memory_label = lv_label_create(ui->Home_memory_info_frame);
	lv_label_set_text(ui->Home_free_memory_label, "剩余:320KB");
	lv_label_set_long_mode(ui->Home_free_memory_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Home_free_memory_label, 100, 15);
	lv_obj_set_size(ui->Home_free_memory_label, 110, 14);

	//Write style for Home_free_memory_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_free_memory_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_free_memory_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Home_free_memory_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Home_free_memory_label, &lv_font_Apple_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Home_free_memory_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Home_free_memory_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Home_free_memory_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Home_free_memory_label, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_free_memory_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_free_memory_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_free_memory_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_free_memory_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_free_memory_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_free_memory_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_img_7
	ui->Home_img_7 = lv_img_create(ui->Home_memory_info_frame);
	lv_obj_add_flag(ui->Home_img_7, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Home_img_7, &_memory_2_alpha_64x32);
	lv_img_set_pivot(ui->Home_img_7, 50,50);
	lv_img_set_angle(ui->Home_img_7, 0);
	lv_obj_set_pos(ui->Home_img_7, 20, 25);
	lv_obj_set_size(ui->Home_img_7, 64, 32);

	//Write style for Home_img_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->Home_img_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_free_memory_bar
	ui->Home_free_memory_bar = lv_bar_create(ui->Home_memory_info_frame);
	lv_obj_set_style_anim_time(ui->Home_free_memory_bar, 1000, 0);
	lv_bar_set_mode(ui->Home_free_memory_bar, LV_BAR_MODE_NORMAL);
	lv_bar_set_range(ui->Home_free_memory_bar, 0, 100);
	lv_bar_set_value(ui->Home_free_memory_bar, 90, LV_ANIM_ON);
	lv_obj_set_pos(ui->Home_free_memory_bar, 100, 35);
	lv_obj_set_size(ui->Home_free_memory_bar, 110, 10);

	//Write style for Home_free_memory_bar, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Home_free_memory_bar, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Home_free_memory_bar, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Home_free_memory_bar, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_free_memory_bar, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_free_memory_bar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Home_free_memory_bar, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Home_free_memory_bar, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Home_free_memory_bar, lv_color_hex(0xee5253), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Home_free_memory_bar, LV_GRAD_DIR_HOR, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->Home_free_memory_bar, lv_color_hex(0x10ac84), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_main_stop(ui->Home_free_memory_bar, 0, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_stop(ui->Home_free_memory_bar, 180, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_free_memory_bar, 10, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write codes Home_now_use_memory_percentage_label
	ui->Home_now_use_memory_percentage_label = lv_label_create(ui->Home_memory_info_frame);
	lv_label_set_text(ui->Home_now_use_memory_percentage_label, "占用:50%");
	lv_label_set_long_mode(ui->Home_now_use_memory_percentage_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Home_now_use_memory_percentage_label, 100, 55);
	lv_obj_set_size(ui->Home_now_use_memory_percentage_label, 110, 14);

	//Write style for Home_now_use_memory_percentage_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_now_use_memory_percentage_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_now_use_memory_percentage_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Home_now_use_memory_percentage_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Home_now_use_memory_percentage_label, &lv_font_Apple_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Home_now_use_memory_percentage_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Home_now_use_memory_percentage_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Home_now_use_memory_percentage_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Home_now_use_memory_percentage_label, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_now_use_memory_percentage_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_now_use_memory_percentage_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_now_use_memory_percentage_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_now_use_memory_percentage_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_now_use_memory_percentage_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_now_use_memory_percentage_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_recent_tasks_frame
	ui->Home_recent_tasks_frame = lv_obj_create(ui->Home_noticebar_frame);
	lv_obj_set_pos(ui->Home_recent_tasks_frame, 9, 150);
	lv_obj_set_size(ui->Home_recent_tasks_frame, 220, 80);
	lv_obj_set_scrollbar_mode(ui->Home_recent_tasks_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home_recent_tasks_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_recent_tasks_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_recent_tasks_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_recent_tasks_frame, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Home_recent_tasks_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Home_recent_tasks_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_recent_tasks_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_recent_tasks_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_recent_tasks_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_recent_tasks_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_recent_tasks_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_brightness_frame
	ui->Home_brightness_frame = lv_obj_create(ui->Home_recent_tasks_frame);
	lv_obj_set_pos(ui->Home_brightness_frame, 10, 10);
	lv_obj_set_size(ui->Home_brightness_frame, 200, 60);
	lv_obj_set_scrollbar_mode(ui->Home_brightness_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home_brightness_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_brightness_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_brightness_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_brightness_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_brightness_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_brightness_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_brightness_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_brightness_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_brightness_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_brightness_rslider
	ui->Home_brightness_rslider = lv_slider_create(ui->Home_brightness_frame);
	lv_slider_set_range(ui->Home_brightness_rslider, 0, 100);
	lv_slider_set_mode(ui->Home_brightness_rslider, LV_SLIDER_MODE_NORMAL);
	lv_slider_set_value(ui->Home_brightness_rslider, 50, LV_ANIM_OFF);
	lv_obj_set_pos(ui->Home_brightness_rslider, 0, 35);
	lv_obj_set_size(ui->Home_brightness_rslider, 200, 25);

	//Write style for Home_brightness_rslider, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Home_brightness_rslider, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Home_brightness_rslider, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Home_brightness_rslider, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_brightness_rslider, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_outline_width(ui->Home_brightness_rslider, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_brightness_rslider, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Home_brightness_rslider, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Home_brightness_rslider, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Home_brightness_rslider, lv_color_hex(0xdcdde1), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Home_brightness_rslider, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_brightness_rslider, 50, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write style for Home_brightness_rslider, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Home_brightness_rslider, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_brightness_rslider, 50, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes Home_brightness_value_label
	ui->Home_brightness_value_label = lv_label_create(ui->Home_brightness_frame);
	lv_label_set_text(ui->Home_brightness_value_label, " 亮度调节 50%");
	lv_label_set_long_mode(ui->Home_brightness_value_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Home_brightness_value_label, 0, 8);
	lv_obj_set_size(ui->Home_brightness_value_label, 200, 16);

	//Write style for Home_brightness_value_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_brightness_value_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_brightness_value_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Home_brightness_value_label, lv_color_hex(0xebebeb), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Home_brightness_value_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Home_brightness_value_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Home_brightness_value_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Home_brightness_value_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Home_brightness_value_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_brightness_value_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_brightness_value_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_brightness_value_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_brightness_value_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_brightness_value_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_brightness_value_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_functionbar_frame
	ui->Home_functionbar_frame = lv_obj_create(ui->Home_control_center_frame);
	lv_obj_set_pos(ui->Home_functionbar_frame, 0, 0);
	lv_obj_set_size(ui->Home_functionbar_frame, 240, 280);
	lv_obj_set_scrollbar_mode(ui->Home_functionbar_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home_functionbar_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_functionbar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_functionbar_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_functionbar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_functionbar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_functionbar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_functionbar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_functionbar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_functionbar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_functionbar_date_label
	ui->Home_functionbar_date_label = lv_label_create(ui->Home_functionbar_frame);
	lv_label_set_text(ui->Home_functionbar_date_label, "2024-05-05 | Sun");
	lv_label_set_long_mode(ui->Home_functionbar_date_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Home_functionbar_date_label, 10, 100);
	lv_obj_set_size(ui->Home_functionbar_date_label, 220, 16);

	//Write style for Home_functionbar_date_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_functionbar_date_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_functionbar_date_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Home_functionbar_date_label, lv_color_hex(0xdadada), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Home_functionbar_date_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Home_functionbar_date_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Home_functionbar_date_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Home_functionbar_date_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Home_functionbar_date_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_functionbar_date_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_functionbar_date_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_functionbar_date_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_functionbar_date_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_functionbar_date_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_functionbar_date_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_retrunback_btn
	ui->Home_retrunback_btn = lv_btn_create(ui->Home_functionbar_frame);
	ui->Home_retrunback_btn_label = lv_label_create(ui->Home_retrunback_btn);
	lv_label_set_text(ui->Home_retrunback_btn_label, "");
	lv_label_set_long_mode(ui->Home_retrunback_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Home_retrunback_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Home_retrunback_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->Home_retrunback_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->Home_retrunback_btn, 69, 264);
	lv_obj_set_size(ui->Home_retrunback_btn, 100, 6);

	//Write style for Home_retrunback_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Home_retrunback_btn, 218, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Home_retrunback_btn, lv_color_hex(0xf5f6fa), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Home_retrunback_btn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Home_retrunback_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_retrunback_btn, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_retrunback_btn, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->Home_retrunback_btn, lv_color_hex(0x353b48), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->Home_retrunback_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->Home_retrunback_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->Home_retrunback_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->Home_retrunback_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Home_retrunback_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Home_retrunback_btn, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Home_retrunback_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Home_retrunback_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_functionbar_time_label
	ui->Home_functionbar_time_label = lv_label_create(ui->Home_functionbar_frame);
	lv_label_set_text(ui->Home_functionbar_time_label, "12:12\n");
	lv_label_set_long_mode(ui->Home_functionbar_time_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Home_functionbar_time_label, 50, 50);
	lv_obj_set_size(ui->Home_functionbar_time_label, 140, 36);

	//Write style for Home_functionbar_time_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_functionbar_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_functionbar_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Home_functionbar_time_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Home_functionbar_time_label, &lv_font_Apple_36, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Home_functionbar_time_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Home_functionbar_time_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Home_functionbar_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Home_functionbar_time_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_functionbar_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_functionbar_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_functionbar_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_functionbar_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_functionbar_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_functionbar_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_today_free_time_bar
	ui->Home_today_free_time_bar = lv_bar_create(ui->Home_functionbar_frame);
	lv_obj_set_style_anim_time(ui->Home_today_free_time_bar, 100, 0);
	lv_bar_set_mode(ui->Home_today_free_time_bar, LV_BAR_MODE_NORMAL);
	lv_bar_set_range(ui->Home_today_free_time_bar, 0, 60);
	lv_bar_set_value(ui->Home_today_free_time_bar, 50, LV_ANIM_ON);
	lv_obj_set_pos(ui->Home_today_free_time_bar, 70, 135);
	lv_obj_set_size(ui->Home_today_free_time_bar, 100, 10);

	//Write style for Home_today_free_time_bar, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Home_today_free_time_bar, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Home_today_free_time_bar, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Home_today_free_time_bar, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_today_free_time_bar, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_today_free_time_bar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Home_today_free_time_bar, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Home_today_free_time_bar, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Home_today_free_time_bar, lv_color_hex(0x10ac84), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Home_today_free_time_bar, LV_GRAD_DIR_HOR, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->Home_today_free_time_bar, lv_color_hex(0xee5253), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_main_stop(ui->Home_today_free_time_bar, 90, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_stop(ui->Home_today_free_time_bar, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_today_free_time_bar, 10, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write codes Home_today_free_time_label
	ui->Home_today_free_time_label = lv_label_create(ui->Home_functionbar_frame);
	lv_label_set_text(ui->Home_today_free_time_label, "今天还有24小时");
	lv_label_set_long_mode(ui->Home_today_free_time_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Home_today_free_time_label, 10, 153);
	lv_obj_set_size(ui->Home_today_free_time_label, 220, 14);

	//Write style for Home_today_free_time_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_today_free_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_today_free_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Home_today_free_time_label, lv_color_hex(0xa5a5a5), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Home_today_free_time_label, &lv_font_Apple_14, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Home_today_free_time_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Home_today_free_time_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Home_today_free_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Home_today_free_time_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_today_free_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_today_free_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_today_free_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_today_free_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_today_free_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_today_free_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_quick_app_frame
	ui->Home_quick_app_frame = lv_obj_create(ui->Home_functionbar_frame);
	lv_obj_set_pos(ui->Home_quick_app_frame, 10, 180);
	lv_obj_set_size(ui->Home_quick_app_frame, 220, 60);
	lv_obj_set_scrollbar_mode(ui->Home_quick_app_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home_quick_app_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_quick_app_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_quick_app_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_quick_app_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_quick_app_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_quick_app_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_quick_app_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_quick_app_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_quick_app_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_bluetools_frame
	ui->Home_bluetools_frame = lv_obj_create(ui->Home_quick_app_frame);
	lv_obj_set_pos(ui->Home_bluetools_frame, 240, 0);
	lv_obj_set_size(ui->Home_bluetools_frame, 60, 60);
	lv_obj_set_scrollbar_mode(ui->Home_bluetools_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home_bluetools_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_bluetools_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_bluetools_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_bluetools_frame, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Home_bluetools_frame, lv_color_hex(0xdfe6e9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Home_bluetools_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_bluetools_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_bluetools_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_bluetools_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_bluetools_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_bluetools_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_bluetools_img_frame
	ui->Home_bluetools_img_frame = lv_obj_create(ui->Home_bluetools_frame);
	lv_obj_set_pos(ui->Home_bluetools_img_frame, 0, 0);
	lv_obj_set_size(ui->Home_bluetools_img_frame, 60, 60);
	lv_obj_set_scrollbar_mode(ui->Home_bluetools_img_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home_bluetools_img_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_bluetools_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_bluetools_img_frame, 30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_bluetools_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_bluetools_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_bluetools_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_bluetools_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_bluetools_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_bluetools_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_bluetools_frame_img
	ui->Home_bluetools_frame_img = lv_img_create(ui->Home_bluetools_img_frame);
	lv_obj_add_flag(ui->Home_bluetools_frame_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Home_bluetools_frame_img, &_blue_alpha_48x48);
	lv_img_set_pivot(ui->Home_bluetools_frame_img, 50,50);
	lv_img_set_angle(ui->Home_bluetools_frame_img, 0);
	lv_obj_set_pos(ui->Home_bluetools_frame_img, 5, 5);
	lv_obj_set_size(ui->Home_bluetools_frame_img, 48, 48);

	//Write style for Home_bluetools_frame_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->Home_bluetools_frame_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_voice_frame
	ui->Home_voice_frame = lv_obj_create(ui->Home_quick_app_frame);
	lv_obj_set_pos(ui->Home_voice_frame, 160, 0);
	lv_obj_set_size(ui->Home_voice_frame, 60, 60);
	lv_obj_set_scrollbar_mode(ui->Home_voice_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home_voice_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_voice_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_voice_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_voice_frame, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Home_voice_frame, lv_color_hex(0xdfe6e9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Home_voice_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_voice_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_voice_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_voice_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_voice_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_voice_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_voice_img_frame
	ui->Home_voice_img_frame = lv_obj_create(ui->Home_voice_frame);
	lv_obj_set_pos(ui->Home_voice_img_frame, 0, 0);
	lv_obj_set_size(ui->Home_voice_img_frame, 60, 60);
	lv_obj_set_scrollbar_mode(ui->Home_voice_img_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home_voice_img_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_voice_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_voice_img_frame, 30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_voice_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_voice_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_voice_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_voice_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_voice_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_voice_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_voice_img
	ui->Home_voice_img = lv_img_create(ui->Home_voice_img_frame);
	lv_obj_add_flag(ui->Home_voice_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Home_voice_img, &_no_vocie_alpha_48x48);
	lv_img_set_pivot(ui->Home_voice_img, 50,50);
	lv_img_set_angle(ui->Home_voice_img, 0);
	lv_obj_set_pos(ui->Home_voice_img, 6, 6);
	lv_obj_set_size(ui->Home_voice_img, 48, 48);

	//Write style for Home_voice_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->Home_voice_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_lock_frame
	ui->Home_lock_frame = lv_obj_create(ui->Home_quick_app_frame);
	lv_obj_set_pos(ui->Home_lock_frame, 80, 0);
	lv_obj_set_size(ui->Home_lock_frame, 60, 60);
	lv_obj_set_scrollbar_mode(ui->Home_lock_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home_lock_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_lock_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_lock_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_lock_frame, 54, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Home_lock_frame, lv_color_hex(0xdfe6e9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Home_lock_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_lock_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_lock_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_lock_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_lock_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_lock_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_lcok_img_frame
	ui->Home_lcok_img_frame = lv_obj_create(ui->Home_lock_frame);
	lv_obj_set_pos(ui->Home_lcok_img_frame, 6, 6);
	lv_obj_set_size(ui->Home_lcok_img_frame, 48, 48);
	lv_obj_set_scrollbar_mode(ui->Home_lcok_img_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home_lcok_img_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_lcok_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_lcok_img_frame, 30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_lcok_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_lcok_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_lcok_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_lcok_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_lcok_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_lcok_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_lock_img
	ui->Home_lock_img = lv_img_create(ui->Home_lcok_img_frame);
	lv_obj_add_flag(ui->Home_lock_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Home_lock_img, &_watch_alpha_48x48);
	lv_img_set_pivot(ui->Home_lock_img, 50,50);
	lv_img_set_angle(ui->Home_lock_img, 0);
	lv_obj_set_pos(ui->Home_lock_img, 0, 0);
	lv_obj_set_size(ui->Home_lock_img, 48, 48);

	//Write style for Home_lock_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->Home_lock_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_settings_frame
	ui->Home_settings_frame = lv_obj_create(ui->Home_quick_app_frame);
	lv_obj_set_pos(ui->Home_settings_frame, 0, 0);
	lv_obj_set_size(ui->Home_settings_frame, 60, 60);
	lv_obj_set_scrollbar_mode(ui->Home_settings_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home_settings_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_settings_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_settings_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_settings_frame, 52, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Home_settings_frame, lv_color_hex(0xdfe6e9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Home_settings_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_settings_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_settings_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_settings_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_settings_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_settings_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_settings_img_frame
	ui->Home_settings_img_frame = lv_obj_create(ui->Home_settings_frame);
	lv_obj_set_pos(ui->Home_settings_img_frame, 0, 0);
	lv_obj_set_size(ui->Home_settings_img_frame, 60, 60);
	lv_obj_set_scrollbar_mode(ui->Home_settings_img_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home_settings_img_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_settings_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_settings_img_frame, 30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_settings_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_settings_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_settings_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_settings_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_settings_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_settings_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_settings_img
	ui->Home_settings_img = lv_img_create(ui->Home_settings_img_frame);
	lv_obj_add_flag(ui->Home_settings_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Home_settings_img, &_settings_3_alpha_48x48);
	lv_img_set_pivot(ui->Home_settings_img, 50,50);
	lv_img_set_angle(ui->Home_settings_img, 0);
	lv_obj_set_pos(ui->Home_settings_img, 6, 6);
	lv_obj_set_size(ui->Home_settings_img, 48, 48);

	//Write style for Home_settings_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->Home_settings_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_rgb_frame
	ui->Home_rgb_frame = lv_obj_create(ui->Home_quick_app_frame);
	lv_obj_set_pos(ui->Home_rgb_frame, 320, 0);
	lv_obj_set_size(ui->Home_rgb_frame, 60, 60);
	lv_obj_set_scrollbar_mode(ui->Home_rgb_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home_rgb_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_rgb_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_rgb_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_rgb_frame, 53, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Home_rgb_frame, lv_color_hex(0xdfe6e9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Home_rgb_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_rgb_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_rgb_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_rgb_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_rgb_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_rgb_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_rgb_img_frame
	ui->Home_rgb_img_frame = lv_obj_create(ui->Home_rgb_frame);
	lv_obj_set_pos(ui->Home_rgb_img_frame, 0, 0);
	lv_obj_set_size(ui->Home_rgb_img_frame, 60, 60);
	lv_obj_set_scrollbar_mode(ui->Home_rgb_img_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home_rgb_img_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_rgb_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_rgb_img_frame, 30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_rgb_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_rgb_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_rgb_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_rgb_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_rgb_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_rgb_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_rgb_img
	ui->Home_rgb_img = lv_img_create(ui->Home_rgb_img_frame);
	lv_obj_add_flag(ui->Home_rgb_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Home_rgb_img, &_rgb_alpha_48x48);
	lv_img_set_pivot(ui->Home_rgb_img, 50,50);
	lv_img_set_angle(ui->Home_rgb_img, 0);
	lv_obj_set_pos(ui->Home_rgb_img, 5, 5);
	lv_obj_set_size(ui->Home_rgb_img, 48, 48);

	//Write style for Home_rgb_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->Home_rgb_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_note_frame
	ui->Home_note_frame = lv_obj_create(ui->Home_quick_app_frame);
	lv_obj_set_pos(ui->Home_note_frame, 400, 0);
	lv_obj_set_size(ui->Home_note_frame, 60, 60);
	lv_obj_set_scrollbar_mode(ui->Home_note_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home_note_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_note_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_note_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_note_frame, 53, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Home_note_frame, lv_color_hex(0xdfe6e9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Home_note_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_note_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_note_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_note_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_note_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_note_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_note_img_frame
	ui->Home_note_img_frame = lv_obj_create(ui->Home_note_frame);
	lv_obj_set_pos(ui->Home_note_img_frame, 0, 0);
	lv_obj_set_size(ui->Home_note_img_frame, 60, 60);
	lv_obj_set_scrollbar_mode(ui->Home_note_img_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home_note_img_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_note_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_note_img_frame, 30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_note_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_note_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_note_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_note_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_note_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_note_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_note_img
	ui->Home_note_img = lv_img_create(ui->Home_note_img_frame);
	lv_obj_add_flag(ui->Home_note_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Home_note_img, &_note_alpha_48x48);
	lv_img_set_pivot(ui->Home_note_img, 50,50);
	lv_img_set_angle(ui->Home_note_img, 0);
	lv_obj_set_pos(ui->Home_note_img, 5, 5);
	lv_obj_set_size(ui->Home_note_img, 48, 48);

	//Write style for Home_note_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->Home_note_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_dev_restart_frame
	ui->Home_dev_restart_frame = lv_obj_create(ui->Home_quick_app_frame);
	lv_obj_set_pos(ui->Home_dev_restart_frame, 480, 0);
	lv_obj_set_size(ui->Home_dev_restart_frame, 60, 60);
	lv_obj_set_scrollbar_mode(ui->Home_dev_restart_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home_dev_restart_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_dev_restart_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_dev_restart_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_dev_restart_frame, 53, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Home_dev_restart_frame, lv_color_hex(0xdfe6e9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Home_dev_restart_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_dev_restart_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_dev_restart_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_dev_restart_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_dev_restart_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_dev_restart_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_dev_restart_img_frame
	ui->Home_dev_restart_img_frame = lv_obj_create(ui->Home_dev_restart_frame);
	lv_obj_set_pos(ui->Home_dev_restart_img_frame, 0, 0);
	lv_obj_set_size(ui->Home_dev_restart_img_frame, 60, 60);
	lv_obj_set_scrollbar_mode(ui->Home_dev_restart_img_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home_dev_restart_img_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_dev_restart_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_dev_restart_img_frame, 30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_dev_restart_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_dev_restart_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_dev_restart_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_dev_restart_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_dev_restart_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_dev_restart_img_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_dev_restart_img
	ui->Home_dev_restart_img = lv_img_create(ui->Home_dev_restart_img_frame);
	lv_obj_add_flag(ui->Home_dev_restart_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Home_dev_restart_img, &_devrestart_alpha_48x48);
	lv_img_set_pivot(ui->Home_dev_restart_img, 50,50);
	lv_img_set_angle(ui->Home_dev_restart_img, 0);
	lv_obj_set_pos(ui->Home_dev_restart_img, 5, 5);
	lv_obj_set_size(ui->Home_dev_restart_img, 48, 48);

	//Write style for Home_dev_restart_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->Home_dev_restart_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_hotzone_frame
	ui->Home_hotzone_frame = lv_obj_create(ui->Home_functionbar_frame);
	lv_obj_set_pos(ui->Home_hotzone_frame, 10, 249);
	lv_obj_set_size(ui->Home_hotzone_frame, 220, 30);
	lv_obj_set_scrollbar_mode(ui->Home_hotzone_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home_hotzone_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_hotzone_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_hotzone_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_hotzone_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_hotzone_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_hotzone_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_hotzone_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_hotzone_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_hotzone_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_sidebar_frame
	ui->Home_sidebar_frame = lv_obj_create(ui->Home);
	lv_obj_set_pos(ui->Home_sidebar_frame, -245, 40);
	lv_obj_set_size(ui->Home_sidebar_frame, 240, 240);
	lv_obj_set_scrollbar_mode(ui->Home_sidebar_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Home_sidebar_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_sidebar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_sidebar_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_sidebar_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Home_sidebar_frame, lv_color_hex(0x2f3640), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Home_sidebar_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_sidebar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_sidebar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_sidebar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_sidebar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_sidebar_frame, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->Home_sidebar_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->Home_sidebar_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->Home_sidebar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->Home_sidebar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->Home_sidebar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_sidebar_return_btn
	ui->Home_sidebar_return_btn = lv_btn_create(ui->Home_sidebar_frame);
	ui->Home_sidebar_return_btn_label = lv_label_create(ui->Home_sidebar_return_btn);
	lv_label_set_text(ui->Home_sidebar_return_btn_label, "" LV_SYMBOL_LEFT " ");
	lv_label_set_long_mode(ui->Home_sidebar_return_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Home_sidebar_return_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Home_sidebar_return_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->Home_sidebar_return_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->Home_sidebar_return_btn, 20, 20);
	lv_obj_set_size(ui->Home_sidebar_return_btn, 50, 25);

	//Write style for Home_sidebar_return_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Home_sidebar_return_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Home_sidebar_return_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_sidebar_return_btn, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_sidebar_return_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Home_sidebar_return_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Home_sidebar_return_btn, &lv_font_montserratMedium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Home_sidebar_return_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Home_sidebar_return_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Home_sidebar_tips_label
	ui->Home_sidebar_tips_label = lv_label_create(ui->Home_sidebar_frame);
	lv_label_set_text(ui->Home_sidebar_tips_label, "Error");
	lv_label_set_long_mode(ui->Home_sidebar_tips_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Home_sidebar_tips_label, 70, 124);
	lv_obj_set_size(ui->Home_sidebar_tips_label, 100, 24);

	//Write style for Home_sidebar_tips_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Home_sidebar_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Home_sidebar_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Home_sidebar_tips_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Home_sidebar_tips_label, &lv_font_Apple_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Home_sidebar_tips_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Home_sidebar_tips_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Home_sidebar_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Home_sidebar_tips_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Home_sidebar_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Home_sidebar_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Home_sidebar_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Home_sidebar_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Home_sidebar_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Home_sidebar_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of Home.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->Home);

	//Init events for screen.
	events_init_Home(ui);
}
