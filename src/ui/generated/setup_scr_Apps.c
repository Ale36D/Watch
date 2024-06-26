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



void setup_scr_Apps(lv_ui *ui)
{
	//Write codes Apps
	ui->Apps = lv_obj_create(NULL);
	lv_obj_set_size(ui->Apps, 240, 280);
	lv_obj_set_scrollbar_mode(ui->Apps, LV_SCROLLBAR_MODE_OFF);

	//Write style for Apps, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Apps, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Apps, lv_color_hex(0x222f3e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Apps, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Apps_apps_frame
	ui->Apps_apps_frame = lv_obj_create(ui->Apps);
	lv_obj_set_pos(ui->Apps_apps_frame, 20, 100);
	lv_obj_set_size(ui->Apps_apps_frame, 200, 200);
	lv_obj_set_scrollbar_mode(ui->Apps_apps_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Apps_apps_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Apps_apps_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Apps_apps_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Apps_apps_frame, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Apps_apps_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Apps_apps_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Apps_apps_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Apps_apps_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Apps_apps_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Apps_apps_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Apps_apps_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Apps_apps_title
	ui->Apps_apps_title = lv_label_create(ui->Apps);
	lv_label_set_text(ui->Apps_apps_title, "所有应用");
	lv_label_set_long_mode(ui->Apps_apps_title, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Apps_apps_title, 60, -10);
	lv_obj_set_size(ui->Apps_apps_title, 120, 24);

	//Write style for Apps_apps_title, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Apps_apps_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Apps_apps_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Apps_apps_title, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Apps_apps_title, &lv_font_Apple_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Apps_apps_title, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Apps_apps_title, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Apps_apps_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Apps_apps_title, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Apps_apps_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Apps_apps_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Apps_apps_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Apps_apps_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Apps_apps_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Apps_apps_title, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Apps_img_show_frame
	ui->Apps_img_show_frame = lv_obj_create(ui->Apps);
	lv_obj_set_pos(ui->Apps_img_show_frame, -225, 105);
	lv_obj_set_size(ui->Apps_img_show_frame, 220, 120);
	lv_obj_set_scrollbar_mode(ui->Apps_img_show_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Apps_img_show_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Apps_img_show_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Apps_img_show_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Apps_img_show_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Apps_img_show_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Apps_img_show_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Apps_img_show_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Apps_img_show_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Apps_img_show_frame, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->Apps_img_show_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->Apps_img_show_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->Apps_img_show_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->Apps_img_show_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->Apps_img_show_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Apps_app_name_label
	ui->Apps_app_name_label = lv_label_create(ui->Apps_img_show_frame);
	lv_label_set_text(ui->Apps_app_name_label, "Label");
	lv_label_set_long_mode(ui->Apps_app_name_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Apps_app_name_label, 110, 52);
	lv_obj_set_size(ui->Apps_app_name_label, 100, 16);

	//Write style for Apps_app_name_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Apps_app_name_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Apps_app_name_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Apps_app_name_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Apps_app_name_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Apps_app_name_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Apps_app_name_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Apps_app_name_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Apps_app_name_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Apps_app_name_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Apps_app_name_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Apps_app_name_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Apps_app_name_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Apps_app_name_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Apps_app_name_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Apps_app_img
	ui->Apps_app_img = lv_img_create(ui->Apps_img_show_frame);
	lv_obj_add_flag(ui->Apps_app_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_pivot(ui->Apps_app_img, 50,50);
	lv_img_set_angle(ui->Apps_app_img, 0);
	lv_obj_set_pos(ui->Apps_app_img, 10, 10);
	lv_obj_set_size(ui->Apps_app_img, 100, 100);

	//Write style for Apps_app_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->Apps_app_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of Apps.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->Apps);

	//Init events for screen.
	events_init_Apps(ui);
}
