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



void setup_scr_Start(lv_ui *ui)
{
	//Write codes Start
	ui->Start = lv_obj_create(NULL);
	lv_obj_set_size(ui->Start, 240, 280);
	lv_obj_set_scrollbar_mode(ui->Start, LV_SCROLLBAR_MODE_OFF);

	//Write style for Start, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Start, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Start, lv_color_hex(0x222f3e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Start, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Start_starrt_img
	ui->Start_starrt_img = lv_img_create(ui->Start);
	lv_obj_add_flag(ui->Start_starrt_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Start_starrt_img, &_8148004_emoji_heart_eyes_icon_alpha_240x240);
	lv_img_set_pivot(ui->Start_starrt_img, 50,50);
	lv_img_set_angle(ui->Start_starrt_img, 0);
	lv_obj_set_pos(ui->Start_starrt_img, 0, 20);
	lv_obj_set_size(ui->Start_starrt_img, 240, 240);

	//Write style for Start_starrt_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->Start_starrt_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Start_start_spinner
	ui->Start_start_spinner = lv_spinner_create(ui->Start, 500, 100);
	lv_obj_set_pos(ui->Start_start_spinner, 104, 260);
	lv_obj_set_size(ui->Start_start_spinner, 32, 32);

	//Write style for Start_start_spinner, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_pad_top(ui->Start_start_spinner, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Start_start_spinner, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Start_start_spinner, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Start_start_spinner, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Start_start_spinner, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_width(ui->Start_start_spinner, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->Start_start_spinner, 47, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->Start_start_spinner, lv_color_hex(0xd5d6de), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Start_start_spinner, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Start_start_spinner, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_arc_width(ui->Start_start_spinner, 5, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->Start_start_spinner, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->Start_start_spinner, lv_color_hex(0xffffff), LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write codes Start_ui_show_label
	ui->Start_ui_show_label = lv_label_create(ui->Start);
	lv_label_set_text(ui->Start_ui_show_label, "ALE UI");
	lv_label_set_long_mode(ui->Start_ui_show_label, LV_LABEL_LONG_DOT);
	lv_obj_set_pos(ui->Start_ui_show_label, 0, 200);
	lv_obj_set_size(ui->Start_ui_show_label, 1, 32);

	//Write style for Start_ui_show_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Start_ui_show_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Start_ui_show_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Start_ui_show_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Start_ui_show_label, &lv_font_Apple_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Start_ui_show_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Start_ui_show_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Start_ui_show_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Start_ui_show_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Start_ui_show_label, 189, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Start_ui_show_label, lv_color_hex(0x222f3e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Start_ui_show_label, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Start_ui_show_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Start_ui_show_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Start_ui_show_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Start_ui_show_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Start_ui_show_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of Start.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->Start);

	//Init events for screen.
	events_init_Start(ui);
}
