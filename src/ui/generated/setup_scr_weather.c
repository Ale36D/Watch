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



void setup_scr_weather(lv_ui *ui)
{
	//Write codes weather
	ui->weather = lv_obj_create(NULL);
	lv_obj_set_size(ui->weather, 240, 280);
	lv_obj_set_scrollbar_mode(ui->weather, LV_SCROLLBAR_MODE_OFF);

	//Write style for weather, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->weather, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_weather_frame
	ui->weather_weather_frame = lv_obj_create(ui->weather);
	lv_obj_set_pos(ui->weather_weather_frame, 0, 0);
	lv_obj_set_size(ui->weather_weather_frame, 240, 280);
	lv_obj_set_scrollbar_mode(ui->weather_weather_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for weather_weather_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_weather_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_weather_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_weather_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->weather_weather_frame, lv_color_hex(0x222f3e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->weather_weather_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_weather_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_weather_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_weather_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_weather_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_weather_frame, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->weather_weather_frame, lv_color_hex(0x222f3e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->weather_weather_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->weather_weather_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->weather_weather_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->weather_weather_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_weather_title
	ui->weather_weather_title = lv_label_create(ui->weather_weather_frame);
	lv_label_set_text(ui->weather_weather_title, "天气");
	lv_label_set_long_mode(ui->weather_weather_title, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_weather_title, 70, -10);
	lv_obj_set_size(ui->weather_weather_title, 100, 24);

	//Write style for weather_weather_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_weather_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_weather_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_weather_title, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_weather_title, &lv_font_Apple_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_weather_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_weather_title, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_weather_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_weather_title, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_weather_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_weather_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_weather_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_weather_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_weather_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_weather_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_weather_load_frame
	ui->weather_weather_load_frame = lv_obj_create(ui->weather_weather_frame);
	lv_obj_set_pos(ui->weather_weather_load_frame, 60, 120);
	lv_obj_set_size(ui->weather_weather_load_frame, 120, 1);
	lv_obj_set_scrollbar_mode(ui->weather_weather_load_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for weather_weather_load_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_weather_load_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_weather_load_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_weather_load_frame, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->weather_weather_load_frame, lv_color_hex(0xc8d6e5), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->weather_weather_load_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_weather_load_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_weather_load_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_weather_load_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_weather_load_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_weather_load_frame, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->weather_weather_load_frame, lv_color_hex(0x222f3e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->weather_weather_load_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->weather_weather_load_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->weather_weather_load_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->weather_weather_load_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_Refresh_weather_data_label
	ui->weather_Refresh_weather_data_label = lv_label_create(ui->weather_weather_load_frame);
	lv_label_set_text(ui->weather_Refresh_weather_data_label, "加载数据中");
	lv_label_set_long_mode(ui->weather_Refresh_weather_data_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_Refresh_weather_data_label, 10, 10);
	lv_obj_set_size(ui->weather_Refresh_weather_data_label, 100, 16);

	//Write style for weather_Refresh_weather_data_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_Refresh_weather_data_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_Refresh_weather_data_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_Refresh_weather_data_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_Refresh_weather_data_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_Refresh_weather_data_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_Refresh_weather_data_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_Refresh_weather_data_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_Refresh_weather_data_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_Refresh_weather_data_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_Refresh_weather_data_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_Refresh_weather_data_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_Refresh_weather_data_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_Refresh_weather_data_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_Refresh_weather_data_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_weather_spinner
	ui->weather_weather_spinner = lv_spinner_create(ui->weather_weather_load_frame, 1000, 60);
	lv_obj_set_pos(ui->weather_weather_spinner, 44, 30);
	lv_obj_set_size(ui->weather_weather_spinner, 32, 32);

	//Write style for weather_weather_spinner, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_pad_top(ui->weather_weather_spinner, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_weather_spinner, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_weather_spinner, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_weather_spinner, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_weather_spinner, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_width(ui->weather_weather_spinner, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->weather_weather_spinner, 47, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->weather_weather_spinner, lv_color_hex(0xd5d6de), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_weather_spinner, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for weather_weather_spinner, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_arc_width(ui->weather_weather_spinner, 3, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->weather_weather_spinner, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->weather_weather_spinner, lv_color_hex(0x2e86de), LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write codes weather_weather_view
	ui->weather_weather_view = lv_tileview_create(ui->weather);
	ui->weather_weather_view_info = lv_tileview_add_tile(ui->weather_weather_view, 0, 0, LV_DIR_BOTTOM);
	ui->weather_weather_view_next = lv_tileview_add_tile(ui->weather_weather_view, 0, 1, LV_DIR_TOP | LV_DIR_BOTTOM);
	ui->weather_weather_view_lifeindex = lv_tileview_add_tile(ui->weather_weather_view, 0, 2, LV_DIR_TOP);
	lv_obj_set_pos(ui->weather_weather_view, -220, 49);
	lv_obj_set_size(ui->weather_weather_view, 220, 220);
	lv_obj_set_scrollbar_mode(ui->weather_weather_view, LV_SCROLLBAR_MODE_OFF);

	//Write style for weather_weather_view, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->weather_weather_view, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_weather_view, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_weather_view, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for weather_weather_view, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->weather_weather_view, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_weather_view, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);



	//Write codes weather_weather_info_frame
	ui->weather_weather_info_frame = lv_obj_create(ui->weather_weather_view_info);
	lv_obj_set_pos(ui->weather_weather_info_frame, 0, 0);
	lv_obj_set_size(ui->weather_weather_info_frame, 220, 220);
	lv_obj_set_scrollbar_mode(ui->weather_weather_info_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for weather_weather_info_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_weather_info_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_weather_info_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_weather_info_frame, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->weather_weather_info_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->weather_weather_info_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_weather_info_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_weather_info_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_weather_info_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_weather_info_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_weather_info_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_precip_frame
	ui->weather_precip_frame = lv_obj_create(ui->weather_weather_info_frame);
	lv_obj_set_pos(ui->weather_precip_frame, 120, 220);
	lv_obj_set_size(ui->weather_precip_frame, 80, 60);
	lv_obj_set_scrollbar_mode(ui->weather_precip_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for weather_precip_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_precip_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_precip_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_precip_frame, 130, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->weather_precip_frame, lv_color_hex(0x222f3e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->weather_precip_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_precip_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_precip_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_precip_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_precip_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_precip_frame, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->weather_precip_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->weather_precip_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->weather_precip_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->weather_precip_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->weather_precip_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_precip_title_label
	ui->weather_precip_title_label = lv_label_create(ui->weather_precip_frame);
	lv_label_set_text(ui->weather_precip_title_label, "降水几率");
	lv_label_set_long_mode(ui->weather_precip_title_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_precip_title_label, 0, 10);
	lv_obj_set_size(ui->weather_precip_title_label, 80, 16);

	//Write style for weather_precip_title_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_precip_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_precip_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_precip_title_label, lv_color_hex(0xf6f6f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_precip_title_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_precip_title_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_precip_title_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_precip_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_precip_title_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_precip_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_precip_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_precip_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_precip_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_precip_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_precip_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_precip_num_label
	ui->weather_precip_num_label = lv_label_create(ui->weather_precip_frame);
	lv_label_set_text(ui->weather_precip_num_label, "35%");
	lv_label_set_long_mode(ui->weather_precip_num_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_precip_num_label, 0, 30);
	lv_obj_set_size(ui->weather_precip_num_label, 80, 24);

	//Write style for weather_precip_num_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_precip_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_precip_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_precip_num_label, lv_color_hex(0xc8d6e5), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_precip_num_label, &lv_font_montserratMedium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_precip_num_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_precip_num_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_precip_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_precip_num_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_precip_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_precip_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_precip_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_precip_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_precip_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_precip_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_humidity_frame
	ui->weather_humidity_frame = lv_obj_create(ui->weather_weather_info_frame);
	lv_obj_set_pos(ui->weather_humidity_frame, 20, 220);
	lv_obj_set_size(ui->weather_humidity_frame, 80, 60);
	lv_obj_set_scrollbar_mode(ui->weather_humidity_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for weather_humidity_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_humidity_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_humidity_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_humidity_frame, 130, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->weather_humidity_frame, lv_color_hex(0x222f3e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->weather_humidity_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_humidity_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_humidity_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_humidity_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_humidity_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_humidity_frame, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->weather_humidity_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->weather_humidity_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->weather_humidity_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->weather_humidity_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->weather_humidity_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_humi_title_label
	ui->weather_humi_title_label = lv_label_create(ui->weather_humidity_frame);
	lv_label_set_text(ui->weather_humi_title_label, "湿度");
	lv_label_set_long_mode(ui->weather_humi_title_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_humi_title_label, 0, 10);
	lv_obj_set_size(ui->weather_humi_title_label, 80, 16);

	//Write style for weather_humi_title_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_humi_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_humi_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_humi_title_label, lv_color_hex(0xf6f6f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_humi_title_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_humi_title_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_humi_title_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_humi_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_humi_title_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_humi_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_humi_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_humi_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_humi_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_humi_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_humi_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_humi_num_label
	ui->weather_humi_num_label = lv_label_create(ui->weather_humidity_frame);
	lv_label_set_text(ui->weather_humi_num_label, "35%");
	lv_label_set_long_mode(ui->weather_humi_num_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_humi_num_label, 0, 30);
	lv_obj_set_size(ui->weather_humi_num_label, 80, 24);

	//Write style for weather_humi_num_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_humi_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_humi_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_humi_num_label, lv_color_hex(0xc8d6e5), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_humi_num_label, &lv_font_montserratMedium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_humi_num_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_humi_num_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_humi_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_humi_num_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_humi_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_humi_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_humi_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_humi_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_humi_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_humi_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_low_frame
	ui->weather_low_frame = lv_obj_create(ui->weather_weather_info_frame);
	lv_obj_set_pos(ui->weather_low_frame, 120, 150);
	lv_obj_set_size(ui->weather_low_frame, 80, 60);
	lv_obj_set_scrollbar_mode(ui->weather_low_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for weather_low_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_low_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_low_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_low_frame, 130, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->weather_low_frame, lv_color_hex(0x222f3e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->weather_low_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_low_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_low_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_low_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_low_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_low_frame, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->weather_low_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->weather_low_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->weather_low_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->weather_low_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->weather_low_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_low_num_label
	ui->weather_low_num_label = lv_label_create(ui->weather_low_frame);
	lv_label_set_text(ui->weather_low_num_label, "35");
	lv_label_set_long_mode(ui->weather_low_num_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_low_num_label, 0, 30);
	lv_obj_set_size(ui->weather_low_num_label, 80, 24);

	//Write style for weather_low_num_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_low_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_low_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_low_num_label, lv_color_hex(0xc8d6e5), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_low_num_label, &lv_font_montserratMedium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_low_num_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_low_num_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_low_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_low_num_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_low_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_low_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_low_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_low_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_low_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_low_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_low_title_label
	ui->weather_low_title_label = lv_label_create(ui->weather_low_frame);
	lv_label_set_text(ui->weather_low_title_label, "最低温");
	lv_label_set_long_mode(ui->weather_low_title_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_low_title_label, 0, 10);
	lv_obj_set_size(ui->weather_low_title_label, 80, 16);

	//Write style for weather_low_title_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_low_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_low_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_low_title_label, lv_color_hex(0xf6f6f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_low_title_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_low_title_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_low_title_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_low_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_low_title_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_low_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_low_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_low_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_low_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_low_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_low_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_high_frame
	ui->weather_high_frame = lv_obj_create(ui->weather_weather_info_frame);
	lv_obj_set_pos(ui->weather_high_frame, 20, 150);
	lv_obj_set_size(ui->weather_high_frame, 80, 60);
	lv_obj_set_scrollbar_mode(ui->weather_high_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for weather_high_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_high_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_high_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_high_frame, 130, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->weather_high_frame, lv_color_hex(0x222f3e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->weather_high_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_high_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_high_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_high_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_high_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_high_frame, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->weather_high_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->weather_high_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->weather_high_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->weather_high_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->weather_high_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_high_title_label
	ui->weather_high_title_label = lv_label_create(ui->weather_high_frame);
	lv_label_set_text(ui->weather_high_title_label, "最高温");
	lv_label_set_long_mode(ui->weather_high_title_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_high_title_label, 0, 10);
	lv_obj_set_size(ui->weather_high_title_label, 80, 16);

	//Write style for weather_high_title_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_high_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_high_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_high_title_label, lv_color_hex(0xf6f6f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_high_title_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_high_title_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_high_title_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_high_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_high_title_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_high_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_high_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_high_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_high_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_high_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_high_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_high_num_label
	ui->weather_high_num_label = lv_label_create(ui->weather_high_frame);
	lv_label_set_text(ui->weather_high_num_label, "35");
	lv_label_set_long_mode(ui->weather_high_num_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_high_num_label, 0, 30);
	lv_obj_set_size(ui->weather_high_num_label, 80, 24);

	//Write style for weather_high_num_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_high_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_high_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_high_num_label, lv_color_hex(0xc8d6e5), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_high_num_label, &lv_font_montserratMedium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_high_num_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_high_num_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_high_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_high_num_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_high_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_high_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_high_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_high_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_high_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_high_num_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_temp_label
	ui->weather_temp_label = lv_label_create(ui->weather_weather_info_frame);
	lv_label_set_text(ui->weather_temp_label, "16°");
	lv_label_set_long_mode(ui->weather_temp_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_temp_label, 60, 60);
	lv_obj_set_size(ui->weather_temp_label, 100, 48);

	//Write style for weather_temp_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_temp_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_temp_label, &lv_font_montserratMedium_48, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_temp_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_temp_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_temp_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_temp_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_city_name_label
	ui->weather_city_name_label = lv_label_create(ui->weather_weather_info_frame);
	lv_label_set_text(ui->weather_city_name_label, "菏泽");
	lv_label_set_long_mode(ui->weather_city_name_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_city_name_label, 60, 10);
	lv_obj_set_size(ui->weather_city_name_label, 100, 16);

	//Write style for weather_city_name_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_city_name_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_city_name_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_city_name_label, lv_color_hex(0xd2d2d2), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_city_name_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_city_name_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_city_name_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_city_name_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_city_name_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_city_name_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_city_name_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_city_name_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_city_name_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_city_name_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_city_name_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_text_night_label
	ui->weather_text_night_label = lv_label_create(ui->weather_weather_info_frame);
	lv_label_set_text(ui->weather_text_night_label, "晴天");
	lv_label_set_long_mode(ui->weather_text_night_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_text_night_label, 59, 120);
	lv_obj_set_size(ui->weather_text_night_label, 100, 16);

	//Write style for weather_text_night_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_text_night_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_text_night_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_text_night_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_text_night_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_text_night_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_text_night_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_text_night_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_text_night_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_text_night_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_text_night_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_text_night_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_text_night_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_text_night_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_text_night_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_wind_frame
	ui->weather_wind_frame = lv_obj_create(ui->weather_weather_info_frame);
	lv_obj_set_pos(ui->weather_wind_frame, 20, 290);
	lv_obj_set_size(ui->weather_wind_frame, 180, 80);
	lv_obj_set_scrollbar_mode(ui->weather_wind_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for weather_wind_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_wind_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_wind_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_wind_frame, 130, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->weather_wind_frame, lv_color_hex(0x222f3e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->weather_wind_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_wind_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_wind_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_wind_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_wind_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_wind_frame, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->weather_wind_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->weather_wind_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->weather_wind_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->weather_wind_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->weather_wind_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_wind_title_label
	ui->weather_wind_title_label = lv_label_create(ui->weather_wind_frame);
	lv_label_set_text(ui->weather_wind_title_label, "风速和等级");
	lv_label_set_long_mode(ui->weather_wind_title_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_wind_title_label, 0, 10);
	lv_obj_set_size(ui->weather_wind_title_label, 180, 16);

	//Write style for weather_wind_title_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_wind_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_wind_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_wind_title_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_wind_title_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_wind_title_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_wind_title_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_wind_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_wind_title_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_wind_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_wind_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_wind_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_wind_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_wind_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_wind_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_wind_speed_label
	ui->weather_wind_speed_label = lv_label_create(ui->weather_wind_frame);
	lv_label_set_text(ui->weather_wind_speed_label, "9.66km/h");
	lv_label_set_long_mode(ui->weather_wind_speed_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_wind_speed_label, 0, 35);
	lv_obj_set_size(ui->weather_wind_speed_label, 180, 16);

	//Write style for weather_wind_speed_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_wind_speed_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_wind_speed_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_wind_speed_label, lv_color_hex(0xc8d6e5), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_wind_speed_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_wind_speed_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_wind_speed_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_wind_speed_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_wind_speed_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_wind_speed_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_wind_speed_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_wind_speed_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_wind_speed_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_wind_speed_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_wind_speed_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_wind_scale_label
	ui->weather_wind_scale_label = lv_label_create(ui->weather_wind_frame);
	lv_label_set_text(ui->weather_wind_scale_label, "2级");
	lv_label_set_long_mode(ui->weather_wind_scale_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_wind_scale_label, 0, 55);
	lv_obj_set_size(ui->weather_wind_scale_label, 90, 16);

	//Write style for weather_wind_scale_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_wind_scale_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_wind_scale_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_wind_scale_label, lv_color_hex(0xc8d6e5), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_wind_scale_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_wind_scale_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_wind_scale_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_wind_scale_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_wind_scale_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_wind_scale_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_wind_scale_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_wind_scale_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_wind_scale_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_wind_scale_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_wind_scale_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_wind_direction_degree_label
	ui->weather_wind_direction_degree_label = lv_label_create(ui->weather_wind_frame);
	lv_label_set_text(ui->weather_wind_direction_degree_label, "165°");
	lv_label_set_long_mode(ui->weather_wind_direction_degree_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_wind_direction_degree_label, 90, 55);
	lv_obj_set_size(ui->weather_wind_direction_degree_label, 90, 16);

	//Write style for weather_wind_direction_degree_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_wind_direction_degree_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_wind_direction_degree_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_wind_direction_degree_label, lv_color_hex(0xc8d6e5), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_wind_direction_degree_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_wind_direction_degree_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_wind_direction_degree_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_wind_direction_degree_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_wind_direction_degree_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_wind_direction_degree_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_wind_direction_degree_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_wind_direction_degree_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_wind_direction_degree_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_wind_direction_degree_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_wind_direction_degree_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_update_weather_time_label
	ui->weather_update_weather_time_label = lv_label_create(ui->weather_weather_info_frame);
	lv_label_set_text(ui->weather_update_weather_time_label, "更新时间\n2024-5-18");
	lv_label_set_long_mode(ui->weather_update_weather_time_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_update_weather_time_label, 0, 380);
	lv_obj_set_size(ui->weather_update_weather_time_label, 220, 24);

	//Write style for weather_update_weather_time_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_update_weather_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_update_weather_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_update_weather_time_label, lv_color_hex(0xcfcfcf), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_update_weather_time_label, &lv_font_Apple_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_update_weather_time_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_update_weather_time_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_update_weather_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_update_weather_time_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_update_weather_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_update_weather_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_update_weather_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_update_weather_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_update_weather_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_update_weather_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);



	//Write codes weather_weather_next_frame
	ui->weather_weather_next_frame = lv_obj_create(ui->weather_weather_view_next);
	lv_obj_set_pos(ui->weather_weather_next_frame, 0, 0);
	lv_obj_set_size(ui->weather_weather_next_frame, 220, 220);
	lv_obj_set_scrollbar_mode(ui->weather_weather_next_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for weather_weather_next_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_weather_next_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_weather_next_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_weather_next_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_weather_next_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_weather_next_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_weather_next_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_weather_next_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_weather_next_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_hl_frame
	ui->weather_hl_frame = lv_obj_create(ui->weather_weather_next_frame);
	lv_obj_set_pos(ui->weather_hl_frame, 0, 110);
	lv_obj_set_size(ui->weather_hl_frame, 220, 100);
	lv_obj_set_scrollbar_mode(ui->weather_hl_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for weather_hl_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_hl_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_hl_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_hl_frame, 232, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->weather_hl_frame, lv_color_hex(0x2f3640), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->weather_hl_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_hl_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_hl_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_hl_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_hl_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_hl_frame, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->weather_hl_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->weather_hl_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->weather_hl_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->weather_hl_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->weather_hl_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_label_15
	ui->weather_label_15 = lv_label_create(ui->weather_hl_frame);
	lv_label_set_text(ui->weather_label_15, "未来三天气温");
	lv_label_set_long_mode(ui->weather_label_15, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_label_15, 0, 80);
	lv_obj_set_size(ui->weather_label_15, 220, 16);

	//Write style for weather_label_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_label_15, lv_color_hex(0xd4d4d4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_label_15, &lv_font_Apple_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_label_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_label_15, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_label_15, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_hl_one_label
	ui->weather_hl_one_label = lv_label_create(ui->weather_hl_frame);
	lv_label_set_text(ui->weather_hl_one_label, "35\n15");
	lv_label_set_long_mode(ui->weather_hl_one_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_hl_one_label, 64, 15);
	lv_obj_set_size(ui->weather_hl_one_label, 40, 48);

	//Write style for weather_hl_one_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_hl_one_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_hl_one_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_hl_one_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_hl_one_label, &lv_font_montserratMedium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_hl_one_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_hl_one_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_hl_one_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_hl_one_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_hl_one_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_hl_one_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_hl_one_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_hl_one_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_hl_one_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_hl_one_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_hl_two_label
	ui->weather_hl_two_label = lv_label_create(ui->weather_hl_frame);
	lv_label_set_text(ui->weather_hl_two_label, "35\n15");
	lv_label_set_long_mode(ui->weather_hl_two_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_hl_two_label, 116, 15);
	lv_obj_set_size(ui->weather_hl_two_label, 40, 48);

	//Write style for weather_hl_two_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_hl_two_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_hl_two_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_hl_two_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_hl_two_label, &lv_font_montserratMedium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_hl_two_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_hl_two_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_hl_two_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_hl_two_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_hl_two_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_hl_two_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_hl_two_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_hl_two_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_hl_two_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_hl_two_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_hl_three_label
	ui->weather_hl_three_label = lv_label_create(ui->weather_hl_frame);
	lv_label_set_text(ui->weather_hl_three_label, "35\n15");
	lv_label_set_long_mode(ui->weather_hl_three_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_hl_three_label, 168, 15);
	lv_obj_set_size(ui->weather_hl_three_label, 40, 48);

	//Write style for weather_hl_three_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_hl_three_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_hl_three_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_hl_three_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_hl_three_label, &lv_font_montserratMedium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_hl_three_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_hl_three_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_hl_three_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_hl_three_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_hl_three_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_hl_three_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_hl_three_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_hl_three_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_hl_three_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_hl_three_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_hl_prompt_label
	ui->weather_hl_prompt_label = lv_label_create(ui->weather_hl_frame);
	lv_label_set_text(ui->weather_hl_prompt_label, "H\nL");
	lv_label_set_long_mode(ui->weather_hl_prompt_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_hl_prompt_label, 12, 15);
	lv_obj_set_size(ui->weather_hl_prompt_label, 40, 48);

	//Write style for weather_hl_prompt_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_hl_prompt_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_hl_prompt_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_hl_prompt_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_hl_prompt_label, &lv_font_montserratMedium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_hl_prompt_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_hl_prompt_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_hl_prompt_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_hl_prompt_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_hl_prompt_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_hl_prompt_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_hl_prompt_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_hl_prompt_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_hl_prompt_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_hl_prompt_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_next_three_frame
	ui->weather_next_three_frame = lv_obj_create(ui->weather_weather_next_frame);
	lv_obj_set_pos(ui->weather_next_three_frame, 0, 0);
	lv_obj_set_size(ui->weather_next_three_frame, 220, 100);
	lv_obj_set_scrollbar_mode(ui->weather_next_three_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for weather_next_three_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_next_three_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_next_three_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_next_three_frame, 231, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->weather_next_three_frame, lv_color_hex(0x353b48), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->weather_next_three_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_next_three_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_next_three_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_next_three_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_next_three_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_next_three_frame, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->weather_next_three_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->weather_next_three_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->weather_next_three_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->weather_next_three_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->weather_next_three_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_img_1
	ui->weather_img_1 = lv_img_create(ui->weather_next_three_frame);
	lv_obj_add_flag(ui->weather_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_pivot(ui->weather_img_1, 50,50);
	lv_img_set_angle(ui->weather_img_1, 0);
	lv_obj_set_pos(ui->weather_img_1, 19, 5);
	lv_obj_set_size(ui->weather_img_1, 48, 48);

	//Write style for weather_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->weather_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_img_2
	ui->weather_img_2 = lv_img_create(ui->weather_next_three_frame);
	lv_obj_add_flag(ui->weather_img_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_pivot(ui->weather_img_2, 50,50);
	lv_img_set_angle(ui->weather_img_2, 0);
	lv_obj_set_pos(ui->weather_img_2, 86, 5);
	lv_obj_set_size(ui->weather_img_2, 48, 48);

	//Write style for weather_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->weather_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_img_3
	ui->weather_img_3 = lv_img_create(ui->weather_next_three_frame);
	lv_obj_add_flag(ui->weather_img_3, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_pivot(ui->weather_img_3, 50,50);
	lv_img_set_angle(ui->weather_img_3, 0);
	lv_obj_set_pos(ui->weather_img_3, 153, 5);
	lv_obj_set_size(ui->weather_img_3, 48, 48);

	//Write style for weather_img_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->weather_img_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_text_day_one_label
	ui->weather_text_day_one_label = lv_label_create(ui->weather_next_three_frame);
	lv_label_set_text(ui->weather_text_day_one_label, "阴天");
	lv_label_set_long_mode(ui->weather_text_day_one_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_text_day_one_label, 10, 55);
	lv_obj_set_size(ui->weather_text_day_one_label, 60, 16);

	//Write style for weather_text_day_one_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_text_day_one_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_text_day_one_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_text_day_one_label, lv_color_hex(0xf3f3f3), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_text_day_one_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_text_day_one_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_text_day_one_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_text_day_one_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_text_day_one_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_text_day_one_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_text_day_one_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_text_day_one_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_text_day_one_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_text_day_one_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_text_day_one_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_text_day_two_label
	ui->weather_text_day_two_label = lv_label_create(ui->weather_next_three_frame);
	lv_label_set_text(ui->weather_text_day_two_label, "有雾");
	lv_label_set_long_mode(ui->weather_text_day_two_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_text_day_two_label, 80, 55);
	lv_obj_set_size(ui->weather_text_day_two_label, 60, 16);

	//Write style for weather_text_day_two_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_text_day_two_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_text_day_two_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_text_day_two_label, lv_color_hex(0xf3f3f3), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_text_day_two_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_text_day_two_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_text_day_two_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_text_day_two_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_text_day_two_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_text_day_two_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_text_day_two_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_text_day_two_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_text_day_two_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_text_day_two_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_text_day_two_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_text_day_three_label
	ui->weather_text_day_three_label = lv_label_create(ui->weather_next_three_frame);
	lv_label_set_text(ui->weather_text_day_three_label, "晴天");
	lv_label_set_long_mode(ui->weather_text_day_three_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_text_day_three_label, 150, 55);
	lv_obj_set_size(ui->weather_text_day_three_label, 60, 16);

	//Write style for weather_text_day_three_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_text_day_three_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_text_day_three_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_text_day_three_label, lv_color_hex(0xf3f3f3), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_text_day_three_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_text_day_three_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_text_day_three_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_text_day_three_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_text_day_three_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_text_day_three_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_text_day_three_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_text_day_three_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_text_day_three_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_text_day_three_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_text_day_three_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_label_8
	ui->weather_label_8 = lv_label_create(ui->weather_next_three_frame);
	lv_label_set_text(ui->weather_label_8, "未来三天天气");
	lv_label_set_long_mode(ui->weather_label_8, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_label_8, 0, 80);
	lv_obj_set_size(ui->weather_label_8, 220, 16);

	//Write style for weather_label_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_label_8, lv_color_hex(0xd4d4d4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_label_8, &lv_font_Apple_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_label_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_label_8, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_label_8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_rain_frame
	ui->weather_rain_frame = lv_obj_create(ui->weather_weather_next_frame);
	lv_obj_set_pos(ui->weather_rain_frame, 0, 220);
	lv_obj_set_size(ui->weather_rain_frame, 220, 100);
	lv_obj_set_scrollbar_mode(ui->weather_rain_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for weather_rain_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_rain_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_rain_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_rain_frame, 230, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->weather_rain_frame, lv_color_hex(0x2f3640), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->weather_rain_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_rain_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_rain_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_rain_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_rain_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_rain_frame, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->weather_rain_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->weather_rain_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->weather_rain_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->weather_rain_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->weather_rain_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_label_14
	ui->weather_label_14 = lv_label_create(ui->weather_rain_frame);
	lv_label_set_text(ui->weather_label_14, "未来三天降水");
	lv_label_set_long_mode(ui->weather_label_14, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_label_14, 0, 80);
	lv_obj_set_size(ui->weather_label_14, 220, 16);

	//Write style for weather_label_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_label_14, lv_color_hex(0xd4d4d4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_label_14, &lv_font_Apple_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_label_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_label_14, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_label_14, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_rain_one_label
	ui->weather_rain_one_label = lv_label_create(ui->weather_rain_frame);
	lv_label_set_text(ui->weather_rain_one_label, "16");
	lv_label_set_long_mode(ui->weather_rain_one_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_rain_one_label, 19, 30);
	lv_obj_set_size(ui->weather_rain_one_label, 60, 24);

	//Write style for weather_rain_one_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_rain_one_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_rain_one_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_rain_one_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_rain_one_label, &lv_font_montserratMedium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_rain_one_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_rain_one_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_rain_one_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_rain_one_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_rain_one_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_rain_one_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_rain_one_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_rain_one_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_rain_one_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_rain_one_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_rain_two_label
	ui->weather_rain_two_label = lv_label_create(ui->weather_rain_frame);
	lv_label_set_text(ui->weather_rain_two_label, "16");
	lv_label_set_long_mode(ui->weather_rain_two_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_rain_two_label, 84, 30);
	lv_obj_set_size(ui->weather_rain_two_label, 60, 24);

	//Write style for weather_rain_two_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_rain_two_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_rain_two_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_rain_two_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_rain_two_label, &lv_font_montserratMedium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_rain_two_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_rain_two_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_rain_two_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_rain_two_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_rain_two_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_rain_two_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_rain_two_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_rain_two_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_rain_two_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_rain_two_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_rain_three_label
	ui->weather_rain_three_label = lv_label_create(ui->weather_rain_frame);
	lv_label_set_text(ui->weather_rain_three_label, "16");
	lv_label_set_long_mode(ui->weather_rain_three_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_rain_three_label, 149, 30);
	lv_obj_set_size(ui->weather_rain_three_label, 60, 24);

	//Write style for weather_rain_three_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_rain_three_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_rain_three_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_rain_three_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_rain_three_label, &lv_font_montserratMedium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_rain_three_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_rain_three_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_rain_three_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_rain_three_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_rain_three_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_rain_three_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_rain_three_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_rain_three_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_rain_three_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_rain_three_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_rain_unit_label
	ui->weather_rain_unit_label = lv_label_create(ui->weather_rain_frame);
	lv_label_set_text(ui->weather_rain_unit_label, "单位mm");
	lv_label_set_long_mode(ui->weather_rain_unit_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_rain_unit_label, 0, 60);
	lv_obj_set_size(ui->weather_rain_unit_label, 220, 14);

	//Write style for weather_rain_unit_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_rain_unit_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_rain_unit_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_rain_unit_label, lv_color_hex(0xacacac), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_rain_unit_label, &lv_font_Apple_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_rain_unit_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_rain_unit_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_rain_unit_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_rain_unit_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_rain_unit_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_rain_unit_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_rain_unit_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_rain_unit_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_rain_unit_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_rain_unit_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);



	//Write codes weather_lifeindex_frame
	ui->weather_lifeindex_frame = lv_obj_create(ui->weather_weather_view_lifeindex);
	lv_obj_set_pos(ui->weather_lifeindex_frame, 0, 0);
	lv_obj_set_size(ui->weather_lifeindex_frame, 220, 220);
	lv_obj_set_scrollbar_mode(ui->weather_lifeindex_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for weather_lifeindex_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_lifeindex_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_lifeindex_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_lifeindex_frame, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->weather_lifeindex_frame, lv_color_hex(0xc8d6e5), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->weather_lifeindex_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_lifeindex_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_lifeindex_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_lifeindex_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_lifeindex_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_lifeindex_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_yinjiu_frame
	ui->weather_yinjiu_frame = lv_obj_create(ui->weather_lifeindex_frame);
	lv_obj_set_pos(ui->weather_yinjiu_frame, 10, 0);
	lv_obj_set_size(ui->weather_yinjiu_frame, 200, 120);
	lv_obj_set_scrollbar_mode(ui->weather_yinjiu_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for weather_yinjiu_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_yinjiu_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_yinjiu_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_yinjiu_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->weather_yinjiu_frame, lv_color_hex(0x303952), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->weather_yinjiu_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_yinjiu_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_yinjiu_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_yinjiu_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_yinjiu_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_yinjiu_frame, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->weather_yinjiu_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->weather_yinjiu_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->weather_yinjiu_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->weather_yinjiu_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->weather_yinjiu_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_btn_1
	ui->weather_btn_1 = lv_btn_create(ui->weather_yinjiu_frame);
	ui->weather_btn_1_label = lv_label_create(ui->weather_btn_1);
	lv_label_set_text(ui->weather_btn_1_label, "饮酒");
	lv_label_set_long_mode(ui->weather_btn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->weather_btn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->weather_btn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->weather_btn_1_label, LV_PCT(100));
	lv_obj_set_pos(ui->weather_btn_1, 5, 5);
	lv_obj_set_size(ui->weather_btn_1, 50, 24);

	//Write style for weather_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->weather_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->weather_btn_1, lv_color_hex(0x10ac84), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->weather_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->weather_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_btn_1, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_yj_label
	ui->weather_yj_label = lv_label_create(ui->weather_yinjiu_frame);
	lv_label_set_text(ui->weather_yj_label, "炎热的天气可能增加啤酒对您的诱惑，适量饮用啤酒会给您带来清凉的感觉，但千万注意不要过量呦！");
	lv_label_set_long_mode(ui->weather_yj_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_yj_label, 10, 35);
	lv_obj_set_size(ui->weather_yj_label, 180, 80);

	//Write style for weather_yj_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_yj_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_yj_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_yj_label, lv_color_hex(0xecf0f1), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_yj_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_yj_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_yj_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_yj_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_yj_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_yj_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_yj_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_yj_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_yj_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_yj_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_yj_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_yj_stats_btn
	ui->weather_yj_stats_btn = lv_btn_create(ui->weather_yinjiu_frame);
	ui->weather_yj_stats_btn_label = lv_label_create(ui->weather_yj_stats_btn);
	lv_label_set_text(ui->weather_yj_stats_btn_label, "适宜");
	lv_label_set_long_mode(ui->weather_yj_stats_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->weather_yj_stats_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->weather_yj_stats_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->weather_yj_stats_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->weather_yj_stats_btn, 145, 5);
	lv_obj_set_size(ui->weather_yj_stats_btn, 50, 24);

	//Write style for weather_yj_stats_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->weather_yj_stats_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->weather_yj_stats_btn, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->weather_yj_stats_btn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->weather_yj_stats_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_yj_stats_btn, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_yj_stats_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_yj_stats_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_yj_stats_btn, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_yj_stats_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_yj_stats_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_chuanyi_frame
	ui->weather_chuanyi_frame = lv_obj_create(ui->weather_lifeindex_frame);
	lv_obj_set_pos(ui->weather_chuanyi_frame, 10, 130);
	lv_obj_set_size(ui->weather_chuanyi_frame, 200, 120);
	lv_obj_set_scrollbar_mode(ui->weather_chuanyi_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for weather_chuanyi_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_chuanyi_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_chuanyi_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_chuanyi_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->weather_chuanyi_frame, lv_color_hex(0x353b48), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->weather_chuanyi_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_chuanyi_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_chuanyi_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_chuanyi_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_chuanyi_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_chuanyi_frame, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->weather_chuanyi_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->weather_chuanyi_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->weather_chuanyi_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->weather_chuanyi_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->weather_chuanyi_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_btn_4
	ui->weather_btn_4 = lv_btn_create(ui->weather_chuanyi_frame);
	ui->weather_btn_4_label = lv_label_create(ui->weather_btn_4);
	lv_label_set_text(ui->weather_btn_4_label, "穿衣");
	lv_label_set_long_mode(ui->weather_btn_4_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->weather_btn_4_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->weather_btn_4, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->weather_btn_4_label, LV_PCT(100));
	lv_obj_set_pos(ui->weather_btn_4, 5, 5);
	lv_obj_set_size(ui->weather_btn_4, 50, 24);

	//Write style for weather_btn_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->weather_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->weather_btn_4, lv_color_hex(0xff9f43), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->weather_btn_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->weather_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_btn_4, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_btn_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_btn_4, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_btn_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_cy_label
	ui->weather_cy_label = lv_label_create(ui->weather_chuanyi_frame);
	lv_label_set_text(ui->weather_cy_label, "天气热，建议着短裙、短裤、短薄外套、T恤等夏季服装。");
	lv_label_set_long_mode(ui->weather_cy_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_cy_label, 10, 35);
	lv_obj_set_size(ui->weather_cy_label, 180, 80);

	//Write style for weather_cy_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_cy_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_cy_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_cy_label, lv_color_hex(0xecf0f1), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_cy_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_cy_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_cy_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_cy_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_cy_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_cy_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_cy_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_cy_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_cy_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_cy_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_cy_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_cy_stats_btn
	ui->weather_cy_stats_btn = lv_btn_create(ui->weather_chuanyi_frame);
	ui->weather_cy_stats_btn_label = lv_label_create(ui->weather_cy_stats_btn);
	lv_label_set_text(ui->weather_cy_stats_btn_label, "热");
	lv_label_set_long_mode(ui->weather_cy_stats_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->weather_cy_stats_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->weather_cy_stats_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->weather_cy_stats_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->weather_cy_stats_btn, 145, 5);
	lv_obj_set_size(ui->weather_cy_stats_btn, 50, 24);

	//Write style for weather_cy_stats_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->weather_cy_stats_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->weather_cy_stats_btn, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->weather_cy_stats_btn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->weather_cy_stats_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_cy_stats_btn, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_cy_stats_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_cy_stats_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_cy_stats_btn, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_cy_stats_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_cy_stats_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_hufu_frame
	ui->weather_hufu_frame = lv_obj_create(ui->weather_lifeindex_frame);
	lv_obj_set_pos(ui->weather_hufu_frame, 10, 260);
	lv_obj_set_size(ui->weather_hufu_frame, 200, 120);
	lv_obj_set_scrollbar_mode(ui->weather_hufu_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for weather_hufu_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_hufu_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_hufu_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_hufu_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->weather_hufu_frame, lv_color_hex(0x1B1464), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->weather_hufu_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_hufu_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_hufu_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_hufu_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_hufu_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_hufu_frame, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->weather_hufu_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->weather_hufu_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->weather_hufu_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->weather_hufu_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->weather_hufu_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_btn_6
	ui->weather_btn_6 = lv_btn_create(ui->weather_hufu_frame);
	ui->weather_btn_6_label = lv_label_create(ui->weather_btn_6);
	lv_label_set_text(ui->weather_btn_6_label, "护肤");
	lv_label_set_long_mode(ui->weather_btn_6_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->weather_btn_6_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->weather_btn_6, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->weather_btn_6_label, LV_PCT(100));
	lv_obj_set_pos(ui->weather_btn_6, 5, 5);
	lv_obj_set_size(ui->weather_btn_6, 50, 24);

	//Write style for weather_btn_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->weather_btn_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->weather_btn_6, lv_color_hex(0xee5253), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->weather_btn_6, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->weather_btn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_btn_6, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_btn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_btn_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_btn_6, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_btn_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_btn_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_hf_label
	ui->weather_hf_label = lv_label_create(ui->weather_hufu_frame);
	lv_label_set_text(ui->weather_hf_label, "紫外线强度较弱，建议涂擦SPF在12-15之间，PA+的防晒护肤品。");
	lv_label_set_long_mode(ui->weather_hf_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_hf_label, 10, 35);
	lv_obj_set_size(ui->weather_hf_label, 180, 80);

	//Write style for weather_hf_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_hf_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_hf_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_hf_label, lv_color_hex(0xecf0f1), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_hf_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_hf_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_hf_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_hf_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_hf_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_hf_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_hf_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_hf_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_hf_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_hf_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_hf_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_hf_stats_btn
	ui->weather_hf_stats_btn = lv_btn_create(ui->weather_hufu_frame);
	ui->weather_hf_stats_btn_label = lv_label_create(ui->weather_hf_stats_btn);
	lv_label_set_text(ui->weather_hf_stats_btn_label, "弱");
	lv_label_set_long_mode(ui->weather_hf_stats_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->weather_hf_stats_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->weather_hf_stats_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->weather_hf_stats_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->weather_hf_stats_btn, 145, 5);
	lv_obj_set_size(ui->weather_hf_stats_btn, 50, 24);

	//Write style for weather_hf_stats_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->weather_hf_stats_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->weather_hf_stats_btn, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->weather_hf_stats_btn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->weather_hf_stats_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_hf_stats_btn, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_hf_stats_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_hf_stats_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_hf_stats_btn, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_hf_stats_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_hf_stats_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_xinqing_frame
	ui->weather_xinqing_frame = lv_obj_create(ui->weather_lifeindex_frame);
	lv_obj_set_pos(ui->weather_xinqing_frame, 10, 390);
	lv_obj_set_size(ui->weather_xinqing_frame, 200, 120);
	lv_obj_set_scrollbar_mode(ui->weather_xinqing_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for weather_xinqing_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_xinqing_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_xinqing_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_xinqing_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->weather_xinqing_frame, lv_color_hex(0x6F1E51), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->weather_xinqing_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_xinqing_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_xinqing_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_xinqing_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_xinqing_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_xinqing_frame, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->weather_xinqing_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->weather_xinqing_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->weather_xinqing_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->weather_xinqing_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->weather_xinqing_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_btn_8
	ui->weather_btn_8 = lv_btn_create(ui->weather_xinqing_frame);
	ui->weather_btn_8_label = lv_label_create(ui->weather_btn_8);
	lv_label_set_text(ui->weather_btn_8_label, "心情");
	lv_label_set_long_mode(ui->weather_btn_8_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->weather_btn_8_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->weather_btn_8, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->weather_btn_8_label, LV_PCT(100));
	lv_obj_set_pos(ui->weather_btn_8, 5, 5);
	lv_obj_set_size(ui->weather_btn_8, 50, 24);

	//Write style for weather_btn_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->weather_btn_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->weather_btn_8, lv_color_hex(0xB53471), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->weather_btn_8, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->weather_btn_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_btn_8, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_btn_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_btn_8, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_btn_8, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_btn_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_btn_8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_xq_label
	ui->weather_xq_label = lv_label_create(ui->weather_xinqing_frame);
	lv_label_set_text(ui->weather_xq_label, "天气较好，温度适宜，心情会不错，学习、工作效率较高。");
	lv_label_set_long_mode(ui->weather_xq_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->weather_xq_label, 10, 45);
	lv_obj_set_size(ui->weather_xq_label, 180, 64);

	//Write style for weather_xq_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->weather_xq_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_xq_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_xq_label, lv_color_hex(0xecf0f1), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_xq_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_xq_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->weather_xq_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->weather_xq_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_xq_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->weather_xq_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->weather_xq_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->weather_xq_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->weather_xq_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->weather_xq_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_xq_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes weather_xq_stats_btn
	ui->weather_xq_stats_btn = lv_btn_create(ui->weather_xinqing_frame);
	ui->weather_xq_stats_btn_label = lv_label_create(ui->weather_xq_stats_btn);
	lv_label_set_text(ui->weather_xq_stats_btn_label, "好");
	lv_label_set_long_mode(ui->weather_xq_stats_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->weather_xq_stats_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->weather_xq_stats_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->weather_xq_stats_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->weather_xq_stats_btn, 145, 5);
	lv_obj_set_size(ui->weather_xq_stats_btn, 50, 24);

	//Write style for weather_xq_stats_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->weather_xq_stats_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->weather_xq_stats_btn, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->weather_xq_stats_btn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->weather_xq_stats_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->weather_xq_stats_btn, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->weather_xq_stats_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->weather_xq_stats_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->weather_xq_stats_btn, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->weather_xq_stats_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->weather_xq_stats_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of weather.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->weather);

	//Init events for screen.
	events_init_weather(ui);
}
