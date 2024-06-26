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

void setup_scr_Settings(lv_ui *ui)
{
	// Write codes Settings
	ui->Settings = lv_obj_create(NULL);
	lv_obj_set_size(ui->Settings, 240, 280);
	lv_obj_set_scrollbar_mode(ui->Settings, LV_SCROLLBAR_MODE_OFF);

	// Write style for Settings, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Settings, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Settings, lv_color_hex(0x2f3640), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Settings, LV_GRAD_DIR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes Settings_Settings_title_label
	ui->Settings_Settings_title_label = lv_label_create(ui->Settings);
	lv_label_set_text(ui->Settings_Settings_title_label, "设置");
	lv_label_set_long_mode(ui->Settings_Settings_title_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Settings_Settings_title_label, 70, -10);
	lv_obj_set_size(ui->Settings_Settings_title_label, 100, 24);

	// Write style for Settings_Settings_title_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Settings_Settings_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Settings_Settings_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Settings_Settings_title_label, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Settings_Settings_title_label, &lv_font_Apple_24, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Settings_Settings_title_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Settings_Settings_title_label, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Settings_Settings_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Settings_Settings_title_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Settings_Settings_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Settings_Settings_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Settings_Settings_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Settings_Settings_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Settings_Settings_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Settings_Settings_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes Settings_Settings_list
	ui->Settings_Settings_list = lv_list_create(ui->Settings);
	lv_obj_set_pos(ui->Settings_Settings_list, 20, 50);
	lv_obj_set_size(ui->Settings_Settings_list, 200, 20);
	lv_obj_set_scrollbar_mode(ui->Settings_Settings_list, LV_SCROLLBAR_MODE_OFF);

	// Write style state: LV_STATE_DEFAULT for &style_Settings_Settings_list_main_main_default
	static lv_style_t style_Settings_Settings_list_main_main_default;
	ui_init_style(&style_Settings_Settings_list_main_main_default);

	lv_style_set_pad_top(&style_Settings_Settings_list_main_main_default, 10);
	lv_style_set_pad_left(&style_Settings_Settings_list_main_main_default, 10);
	lv_style_set_pad_right(&style_Settings_Settings_list_main_main_default, 10);
	lv_style_set_pad_bottom(&style_Settings_Settings_list_main_main_default, 10);
	lv_style_set_bg_opa(&style_Settings_Settings_list_main_main_default, 0);
	lv_style_set_border_width(&style_Settings_Settings_list_main_main_default, 0);
	lv_style_set_radius(&style_Settings_Settings_list_main_main_default, 10);
	lv_style_set_shadow_width(&style_Settings_Settings_list_main_main_default, 5);
	lv_style_set_shadow_color(&style_Settings_Settings_list_main_main_default, lv_color_hex(0x576574));
	lv_style_set_shadow_opa(&style_Settings_Settings_list_main_main_default, 255);
	lv_style_set_shadow_spread(&style_Settings_Settings_list_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_Settings_Settings_list_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_Settings_Settings_list_main_main_default, 0);
	lv_obj_add_style(ui->Settings_Settings_list, &style_Settings_Settings_list_main_main_default, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write style state: LV_STATE_FOCUSED for &style_Settings_Settings_list_main_main_focused
	static lv_style_t style_Settings_Settings_list_main_main_focused;
	ui_init_style(&style_Settings_Settings_list_main_main_focused);

	lv_style_set_pad_top(&style_Settings_Settings_list_main_main_focused, 10);
	lv_style_set_pad_left(&style_Settings_Settings_list_main_main_focused, 10);
	lv_style_set_pad_right(&style_Settings_Settings_list_main_main_focused, 10);
	lv_style_set_pad_bottom(&style_Settings_Settings_list_main_main_focused, 10);
	lv_style_set_bg_opa(&style_Settings_Settings_list_main_main_focused, 0);
	lv_style_set_border_width(&style_Settings_Settings_list_main_main_focused, 0);
	lv_style_set_radius(&style_Settings_Settings_list_main_main_focused, 15);
	lv_style_set_shadow_width(&style_Settings_Settings_list_main_main_focused, 5);
	lv_style_set_shadow_color(&style_Settings_Settings_list_main_main_focused, lv_color_hex(0x576574));
	lv_style_set_shadow_opa(&style_Settings_Settings_list_main_main_focused, 255);
	lv_style_set_shadow_spread(&style_Settings_Settings_list_main_main_focused, 0);
	lv_style_set_shadow_ofs_x(&style_Settings_Settings_list_main_main_focused, 0);
	lv_style_set_shadow_ofs_y(&style_Settings_Settings_list_main_main_focused, 0);
	lv_obj_add_style(ui->Settings_Settings_list, &style_Settings_Settings_list_main_main_focused, LV_PART_MAIN | LV_STATE_FOCUSED);

	// Write style state: LV_STATE_DISABLED for &style_Settings_Settings_list_main_main_disabled
	static lv_style_t style_Settings_Settings_list_main_main_disabled;
	ui_init_style(&style_Settings_Settings_list_main_main_disabled);

	lv_style_set_pad_top(&style_Settings_Settings_list_main_main_disabled, 10);
	lv_style_set_pad_left(&style_Settings_Settings_list_main_main_disabled, 10);
	lv_style_set_pad_right(&style_Settings_Settings_list_main_main_disabled, 10);
	lv_style_set_pad_bottom(&style_Settings_Settings_list_main_main_disabled, 10);
	lv_style_set_bg_opa(&style_Settings_Settings_list_main_main_disabled, 0);
	lv_style_set_border_width(&style_Settings_Settings_list_main_main_disabled, 0);
	lv_style_set_radius(&style_Settings_Settings_list_main_main_disabled, 15);
	lv_style_set_shadow_width(&style_Settings_Settings_list_main_main_disabled, 5);
	lv_style_set_shadow_color(&style_Settings_Settings_list_main_main_disabled, lv_color_hex(0x576574));
	lv_style_set_shadow_opa(&style_Settings_Settings_list_main_main_disabled, 255);
	lv_style_set_shadow_spread(&style_Settings_Settings_list_main_main_disabled, 0);
	lv_style_set_shadow_ofs_x(&style_Settings_Settings_list_main_main_disabled, 0);
	lv_style_set_shadow_ofs_y(&style_Settings_Settings_list_main_main_disabled, 0);
	lv_obj_add_style(ui->Settings_Settings_list, &style_Settings_Settings_list_main_main_disabled, LV_PART_MAIN | LV_STATE_DISABLED);

	// Write style state: LV_STATE_DEFAULT for &style_Settings_Settings_list_main_scrollbar_default
	static lv_style_t style_Settings_Settings_list_main_scrollbar_default;
	ui_init_style(&style_Settings_Settings_list_main_scrollbar_default);

	lv_style_set_radius(&style_Settings_Settings_list_main_scrollbar_default, 3);
	lv_style_set_bg_opa(&style_Settings_Settings_list_main_scrollbar_default, 0);
	lv_obj_add_style(ui->Settings_Settings_list, &style_Settings_Settings_list_main_scrollbar_default, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

	// Write codes Settings_about_frame
	ui->Settings_about_frame = lv_obj_create(ui->Settings);
	lv_obj_set_pos(ui->Settings_about_frame, -250, 0);
	lv_obj_set_size(ui->Settings_about_frame, 240, 280);
	lv_obj_set_scrollbar_mode(ui->Settings_about_frame, LV_SCROLLBAR_MODE_OFF);

	// Write style for Settings_about_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Settings_about_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Settings_about_frame, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Settings_about_frame, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Settings_about_frame, lv_color_hex(0x222f3e), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Settings_about_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Settings_about_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Settings_about_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Settings_about_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Settings_about_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Settings_about_frame, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->Settings_about_frame, lv_color_hex(0x576574), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->Settings_about_frame, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->Settings_about_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->Settings_about_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->Settings_about_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes Settings_img_1
	ui->Settings_img_1 = lv_img_create(ui->Settings_about_frame);
	lv_obj_add_flag(ui->Settings_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Settings_img_1, &_geek_alpha_100x100);
	lv_img_set_pivot(ui->Settings_img_1, 50, 50);
	lv_img_set_angle(ui->Settings_img_1, 0);
	lv_obj_set_pos(ui->Settings_img_1, 70, 29);
	lv_obj_set_size(ui->Settings_img_1, 100, 100);

	// Write style for Settings_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->Settings_img_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes Settings_label_2
	ui->Settings_label_2 = lv_label_create(ui->Settings_about_frame);
	lv_label_set_text(ui->Settings_label_2, "阿乐大大怪");
	lv_label_set_long_mode(ui->Settings_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Settings_label_2, 20, 140);
	lv_obj_set_size(ui->Settings_label_2, 200, 24);

	// Write style for Settings_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Settings_label_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Settings_label_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Settings_label_2, lv_color_hex(0xf9f9f9), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Settings_label_2, &lv_font_Apple_24, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Settings_label_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Settings_label_2, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Settings_label_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Settings_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Settings_label_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Settings_label_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Settings_label_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Settings_label_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Settings_label_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Settings_label_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes Settings_label_4
	ui->Settings_label_4 = lv_label_create(ui->Settings_about_frame);
	lv_label_set_text(ui->Settings_label_4, "ESP32 S3\nRAM:320KB\nFlash:16MB");
	lv_label_set_long_mode(ui->Settings_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Settings_label_4, 20, 175);
	lv_obj_set_size(ui->Settings_label_4, 200, 48);

	// Write style for Settings_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Settings_label_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Settings_label_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Settings_label_4, lv_color_hex(0xd6d6d6), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Settings_label_4, &lv_font_montserratMedium_16, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Settings_label_4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Settings_label_4, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Settings_label_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Settings_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Settings_label_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Settings_label_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Settings_label_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Settings_label_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Settings_label_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Settings_label_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes Settings_spinner_1
	ui->Settings_spinner_1 = lv_spinner_create(ui->Settings_about_frame, 500, 60);
	lv_obj_set_pos(ui->Settings_spinner_1, 104, 230);
	lv_obj_set_size(ui->Settings_spinner_1, 32, 32);

	// Write style for Settings_spinner_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_pad_top(ui->Settings_spinner_1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Settings_spinner_1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Settings_spinner_1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Settings_spinner_1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Settings_spinner_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_arc_width(ui->Settings_spinner_1, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->Settings_spinner_1, 47, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->Settings_spinner_1, lv_color_hex(0xd5d6de), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Settings_spinner_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write style for Settings_spinner_1, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_arc_width(ui->Settings_spinner_1, 3, LV_PART_INDICATOR | LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->Settings_spinner_1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->Settings_spinner_1, lv_color_hex(0xee5253), LV_PART_INDICATOR | LV_STATE_DEFAULT);

	// Write codes Settings_label_5
	ui->Settings_label_5 = lv_label_create(ui->Settings_about_frame);
	lv_label_set_text(ui->Settings_label_5, "System Running");
	lv_label_set_long_mode(ui->Settings_label_5, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Settings_label_5, 20, 260);
	lv_obj_set_size(ui->Settings_label_5, 200, 16);

	// Write style for Settings_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Settings_label_5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Settings_label_5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Settings_label_5, lv_color_hex(0x909090), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Settings_label_5, &lv_font_montserratMedium_16, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Settings_label_5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Settings_label_5, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Settings_label_5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Settings_label_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Settings_label_5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Settings_label_5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Settings_label_5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Settings_label_5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Settings_label_5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Settings_label_5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes Settings_task_info_frame
	ui->Settings_task_info_frame = lv_obj_create(ui->Settings);
	lv_obj_set_pos(ui->Settings_task_info_frame, -500, 0);
	lv_obj_set_size(ui->Settings_task_info_frame, 240, 280);
	lv_obj_set_scrollbar_mode(ui->Settings_task_info_frame, LV_SCROLLBAR_MODE_OFF);

	// Write style for Settings_task_info_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Settings_task_info_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Settings_task_info_frame, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Settings_task_info_frame, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Settings_task_info_frame, lv_color_hex(0x222f3e), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Settings_task_info_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Settings_task_info_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Settings_task_info_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Settings_task_info_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Settings_task_info_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Settings_task_info_frame, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->Settings_task_info_frame, lv_color_hex(0x576574), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->Settings_task_info_frame, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->Settings_task_info_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->Settings_task_info_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->Settings_task_info_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes Settings_img_2
	ui->Settings_img_2 = lv_img_create(ui->Settings_task_info_frame);
	lv_obj_add_flag(ui->Settings_img_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Settings_img_2, &_Process_2_alpha_100x100);
	lv_img_set_pivot(ui->Settings_img_2, 50, 50);
	lv_img_set_angle(ui->Settings_img_2, 0);
	lv_obj_set_pos(ui->Settings_img_2, 70, 30);
	lv_obj_set_size(ui->Settings_img_2, 100, 100);

	// Write style for Settings_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->Settings_img_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes Settings_task_info_label
	ui->Settings_task_info_label = lv_label_create(ui->Settings_task_info_frame);
	lv_label_set_text(ui->Settings_task_info_label, "Process");
	lv_label_set_long_mode(ui->Settings_task_info_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Settings_task_info_label, 8, 140);
	lv_obj_set_size(ui->Settings_task_info_label, 220, 140);

	// Write style for Settings_task_info_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Settings_task_info_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Settings_task_info_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Settings_task_info_label, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Settings_task_info_label, &lv_font_Apple_12, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Settings_task_info_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Settings_task_info_label, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Settings_task_info_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Settings_task_info_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Settings_task_info_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Settings_task_info_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Settings_task_info_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Settings_task_info_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Settings_task_info_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Settings_task_info_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// The custom code of Settings.

	// Update current screen layout.
	lv_obj_update_layout(ui->Settings);

	// Init events for screen.
	events_init_Settings(ui);
}
