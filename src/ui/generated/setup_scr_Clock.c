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



void setup_scr_Clock(lv_ui *ui)
{
	//Write codes Clock
	ui->Clock = lv_obj_create(NULL);
	lv_obj_set_size(ui->Clock, 240, 280);
	lv_obj_set_scrollbar_mode(ui->Clock, LV_SCROLLBAR_MODE_OFF);

	//Write style for Clock, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Clock, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Clock, lv_color_hex(0xe1b12c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Clock, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Clock_clock_img
	ui->Clock_clock_img = lv_img_create(ui->Clock);
	lv_obj_add_flag(ui->Clock_clock_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Clock_clock_img, &_crab_alpha_240x240);
	lv_img_set_pivot(ui->Clock_clock_img, 50,50);
	lv_img_set_angle(ui->Clock_clock_img, 0);
	lv_obj_set_pos(ui->Clock_clock_img, 120, 120);
	lv_obj_set_size(ui->Clock_clock_img, 240, 240);

	//Write style for Clock_clock_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->Clock_clock_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Clock_Clock_time_label
	ui->Clock_Clock_time_label = lv_label_create(ui->Clock);
	lv_label_set_text(ui->Clock_Clock_time_label, "12:12");
	lv_label_set_long_mode(ui->Clock_Clock_time_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Clock_Clock_time_label, 0, 199);
	lv_obj_set_size(ui->Clock_Clock_time_label, 240, 48);

	//Write style for Clock_Clock_time_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Clock_Clock_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Clock_Clock_time_label, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Clock_Clock_time_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Clock_Clock_time_label, &lv_font_AlimamaShuHeiTiBold_48, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Clock_Clock_time_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Clock_Clock_time_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Clock_Clock_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Clock_Clock_time_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Clock_Clock_time_label, 116, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Clock_Clock_time_label, lv_color_hex(0xe1b12c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Clock_Clock_time_label, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Clock_Clock_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Clock_Clock_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Clock_Clock_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Clock_Clock_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Clock_Clock_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Clock_clock_sec_bar
	ui->Clock_clock_sec_bar = lv_bar_create(ui->Clock);
	lv_obj_set_style_anim_time(ui->Clock_clock_sec_bar, 100, 0);
	lv_bar_set_mode(ui->Clock_clock_sec_bar, LV_BAR_MODE_NORMAL);
	lv_bar_set_range(ui->Clock_clock_sec_bar, 0, 60);
	lv_bar_set_value(ui->Clock_clock_sec_bar, 60, LV_ANIM_ON);
	lv_obj_set_pos(ui->Clock_clock_sec_bar, 30, 260);
	lv_obj_set_size(ui->Clock_clock_sec_bar, 180, 10);

	//Write style for Clock_clock_sec_bar, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Clock_clock_sec_bar, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Clock_clock_sec_bar, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Clock_clock_sec_bar, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Clock_clock_sec_bar, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Clock_clock_sec_bar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Clock_clock_sec_bar, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Clock_clock_sec_bar, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Clock_clock_sec_bar, lv_color_hex(0xfeca57), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Clock_clock_sec_bar, LV_GRAD_DIR_HOR, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->Clock_clock_sec_bar, lv_color_hex(0xee5253), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_main_stop(ui->Clock_clock_sec_bar, 0, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_stop(ui->Clock_clock_sec_bar, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Clock_clock_sec_bar, 10, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//The custom code of Clock.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->Clock);

	//Init events for screen.
	events_init_Clock(ui);
}
