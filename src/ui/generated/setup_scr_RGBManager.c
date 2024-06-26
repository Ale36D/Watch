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



void setup_scr_RGBManager(lv_ui *ui)
{
	//Write codes RGBManager
	ui->RGBManager = lv_obj_create(NULL);
	lv_obj_set_size(ui->RGBManager, 240, 280);
	lv_obj_set_scrollbar_mode(ui->RGBManager, LV_SCROLLBAR_MODE_OFF);

	//Write style for RGBManager, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->RGBManager, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->RGBManager, lv_color_hex(0x222f3e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->RGBManager, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RGBManager_Rgb_title_label
	ui->RGBManager_Rgb_title_label = lv_label_create(ui->RGBManager);
	lv_label_set_text(ui->RGBManager_Rgb_title_label, "RGB管理");
	lv_label_set_long_mode(ui->RGBManager_Rgb_title_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RGBManager_Rgb_title_label, 0, -10);
	lv_obj_set_size(ui->RGBManager_Rgb_title_label, 240, 24);

	//Write style for RGBManager_Rgb_title_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RGBManager_Rgb_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RGBManager_Rgb_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RGBManager_Rgb_title_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RGBManager_Rgb_title_label, &lv_font_Apple_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RGBManager_Rgb_title_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RGBManager_Rgb_title_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RGBManager_Rgb_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RGBManager_Rgb_title_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RGBManager_Rgb_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RGBManager_Rgb_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RGBManager_Rgb_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RGBManager_Rgb_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RGBManager_Rgb_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RGBManager_Rgb_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RGBManager_RGB_Contianer
	ui->RGBManager_RGB_Contianer = lv_obj_create(ui->RGBManager);
	lv_obj_set_pos(ui->RGBManager_RGB_Contianer, 10, 80);
	lv_obj_set_size(ui->RGBManager_RGB_Contianer, 220, 220);
	lv_obj_set_scrollbar_mode(ui->RGBManager_RGB_Contianer, LV_SCROLLBAR_MODE_OFF);

	//Write style for RGBManager_RGB_Contianer, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RGBManager_RGB_Contianer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RGBManager_RGB_Contianer, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RGBManager_RGB_Contianer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RGBManager_RGB_Contianer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RGBManager_RGB_Contianer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RGBManager_RGB_Contianer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RGBManager_RGB_Contianer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RGBManager_RGB_Contianer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RGBManager_RGB_frame
	ui->RGBManager_RGB_frame = lv_obj_create(ui->RGBManager_RGB_Contianer);
	lv_obj_set_pos(ui->RGBManager_RGB_frame, 0, 0);
	lv_obj_set_size(ui->RGBManager_RGB_frame, 220, 720);
	lv_obj_set_scrollbar_mode(ui->RGBManager_RGB_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for RGBManager_RGB_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RGBManager_RGB_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RGBManager_RGB_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RGBManager_RGB_frame, 27, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->RGBManager_RGB_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->RGBManager_RGB_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RGBManager_RGB_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RGBManager_RGB_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RGBManager_RGB_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RGBManager_RGB_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RGBManager_RGB_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RGBManager_RGB_set_frame
	ui->RGBManager_RGB_set_frame = lv_obj_create(ui->RGBManager_RGB_frame);
	lv_obj_set_pos(ui->RGBManager_RGB_set_frame, 0, 0);
	lv_obj_set_size(ui->RGBManager_RGB_set_frame, 200, 280);
	lv_obj_set_scrollbar_mode(ui->RGBManager_RGB_set_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for RGBManager_RGB_set_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RGBManager_RGB_set_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RGBManager_RGB_set_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RGBManager_RGB_set_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RGBManager_RGB_set_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RGBManager_RGB_set_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RGBManager_RGB_set_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RGBManager_RGB_set_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RGBManager_RGB_set_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RGBManager_R_slider
	ui->RGBManager_R_slider = lv_slider_create(ui->RGBManager_RGB_set_frame);
	lv_slider_set_range(ui->RGBManager_R_slider, 0, 255);
	lv_slider_set_mode(ui->RGBManager_R_slider, LV_SLIDER_MODE_NORMAL);
	lv_slider_set_value(ui->RGBManager_R_slider, 100, LV_ANIM_OFF);
	lv_obj_set_pos(ui->RGBManager_R_slider, 24, 45);
	lv_obj_set_size(ui->RGBManager_R_slider, 20, 160);

	//Write style for RGBManager_R_slider, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->RGBManager_R_slider, 130, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->RGBManager_R_slider, lv_color_hex(0x868686), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->RGBManager_R_slider, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RGBManager_R_slider, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_outline_width(ui->RGBManager_R_slider, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RGBManager_R_slider, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for RGBManager_R_slider, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->RGBManager_R_slider, 205, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->RGBManager_R_slider, lv_color_hex(0xee5253), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->RGBManager_R_slider, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RGBManager_R_slider, 50, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write style for RGBManager_R_slider, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->RGBManager_R_slider, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RGBManager_R_slider, 50, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes RGBManager_RGB_set_title_label
	ui->RGBManager_RGB_set_title_label = lv_label_create(ui->RGBManager_RGB_set_frame);
	lv_label_set_text(ui->RGBManager_RGB_set_title_label, "色彩");
	lv_label_set_long_mode(ui->RGBManager_RGB_set_title_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RGBManager_RGB_set_title_label, 10, 10);
	lv_obj_set_size(ui->RGBManager_RGB_set_title_label, 180, 16);

	//Write style for RGBManager_RGB_set_title_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RGBManager_RGB_set_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RGBManager_RGB_set_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RGBManager_RGB_set_title_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RGBManager_RGB_set_title_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RGBManager_RGB_set_title_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RGBManager_RGB_set_title_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RGBManager_RGB_set_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RGBManager_RGB_set_title_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RGBManager_RGB_set_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RGBManager_RGB_set_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RGBManager_RGB_set_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RGBManager_RGB_set_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RGBManager_RGB_set_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RGBManager_RGB_set_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RGBManager_G_slider
	ui->RGBManager_G_slider = lv_slider_create(ui->RGBManager_RGB_set_frame);
	lv_slider_set_range(ui->RGBManager_G_slider, 0, 255);
	lv_slider_set_mode(ui->RGBManager_G_slider, LV_SLIDER_MODE_NORMAL);
	lv_slider_set_value(ui->RGBManager_G_slider, 100, LV_ANIM_OFF);
	lv_obj_set_pos(ui->RGBManager_G_slider, 68, 45);
	lv_obj_set_size(ui->RGBManager_G_slider, 20, 160);

	//Write style for RGBManager_G_slider, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->RGBManager_G_slider, 130, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->RGBManager_G_slider, lv_color_hex(0x868686), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->RGBManager_G_slider, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RGBManager_G_slider, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_outline_width(ui->RGBManager_G_slider, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RGBManager_G_slider, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for RGBManager_G_slider, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->RGBManager_G_slider, 205, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->RGBManager_G_slider, lv_color_hex(0x26B08C), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->RGBManager_G_slider, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RGBManager_G_slider, 50, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write style for RGBManager_G_slider, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->RGBManager_G_slider, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RGBManager_G_slider, 50, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes RGBManager_B_slider
	ui->RGBManager_B_slider = lv_slider_create(ui->RGBManager_RGB_set_frame);
	lv_slider_set_range(ui->RGBManager_B_slider, 0, 255);
	lv_slider_set_mode(ui->RGBManager_B_slider, LV_SLIDER_MODE_NORMAL);
	lv_slider_set_value(ui->RGBManager_B_slider, 100, LV_ANIM_OFF);
	lv_obj_set_pos(ui->RGBManager_B_slider, 112, 45);
	lv_obj_set_size(ui->RGBManager_B_slider, 20, 160);

	//Write style for RGBManager_B_slider, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->RGBManager_B_slider, 130, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->RGBManager_B_slider, lv_color_hex(0x868686), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->RGBManager_B_slider, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RGBManager_B_slider, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_outline_width(ui->RGBManager_B_slider, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RGBManager_B_slider, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for RGBManager_B_slider, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->RGBManager_B_slider, 205, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->RGBManager_B_slider, lv_color_hex(0x2F35DA), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->RGBManager_B_slider, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RGBManager_B_slider, 50, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write style for RGBManager_B_slider, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->RGBManager_B_slider, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RGBManager_B_slider, 50, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes RGBManager_RGB_Value_set_btn
	ui->RGBManager_RGB_Value_set_btn = lv_btn_create(ui->RGBManager_RGB_set_frame);
	ui->RGBManager_RGB_Value_set_btn_label = lv_label_create(ui->RGBManager_RGB_Value_set_btn);
	lv_label_set_text(ui->RGBManager_RGB_Value_set_btn_label, "设置");
	lv_label_set_long_mode(ui->RGBManager_RGB_Value_set_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->RGBManager_RGB_Value_set_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->RGBManager_RGB_Value_set_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->RGBManager_RGB_Value_set_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->RGBManager_RGB_Value_set_btn, 50, 220);
	lv_obj_set_size(ui->RGBManager_RGB_Value_set_btn, 100, 50);

	//Write style for RGBManager_RGB_Value_set_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->RGBManager_RGB_Value_set_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->RGBManager_RGB_Value_set_btn, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->RGBManager_RGB_Value_set_btn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->RGBManager_RGB_Value_set_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RGBManager_RGB_Value_set_btn, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RGBManager_RGB_Value_set_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RGBManager_RGB_Value_set_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RGBManager_RGB_Value_set_btn, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RGBManager_RGB_Value_set_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RGBManager_RGB_Value_set_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RGBManager_brightness_slider
	ui->RGBManager_brightness_slider = lv_slider_create(ui->RGBManager_RGB_set_frame);
	lv_slider_set_range(ui->RGBManager_brightness_slider, 0, 255);
	lv_slider_set_mode(ui->RGBManager_brightness_slider, LV_SLIDER_MODE_NORMAL);
	lv_slider_set_value(ui->RGBManager_brightness_slider, 100, LV_ANIM_OFF);
	lv_obj_set_pos(ui->RGBManager_brightness_slider, 156, 45);
	lv_obj_set_size(ui->RGBManager_brightness_slider, 20, 160);

	//Write style for RGBManager_brightness_slider, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->RGBManager_brightness_slider, 130, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->RGBManager_brightness_slider, lv_color_hex(0x868686), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->RGBManager_brightness_slider, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RGBManager_brightness_slider, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_outline_width(ui->RGBManager_brightness_slider, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RGBManager_brightness_slider, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for RGBManager_brightness_slider, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->RGBManager_brightness_slider, 205, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->RGBManager_brightness_slider, lv_color_hex(0xffffff), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->RGBManager_brightness_slider, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RGBManager_brightness_slider, 50, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write style for RGBManager_brightness_slider, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->RGBManager_brightness_slider, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RGBManager_brightness_slider, 50, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes RGBManager_Preset_frame
	ui->RGBManager_Preset_frame = lv_obj_create(ui->RGBManager_RGB_frame);
	lv_obj_set_pos(ui->RGBManager_Preset_frame, 0, 289);
	lv_obj_set_size(ui->RGBManager_Preset_frame, 200, 200);
	lv_obj_set_scrollbar_mode(ui->RGBManager_Preset_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for RGBManager_Preset_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RGBManager_Preset_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RGBManager_Preset_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RGBManager_Preset_frame, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->RGBManager_Preset_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->RGBManager_Preset_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RGBManager_Preset_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RGBManager_Preset_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RGBManager_Preset_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RGBManager_Preset_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RGBManager_Preset_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RGBManager_Preset_label
	ui->RGBManager_Preset_label = lv_label_create(ui->RGBManager_Preset_frame);
	lv_label_set_text(ui->RGBManager_Preset_label, "预设");
	lv_label_set_long_mode(ui->RGBManager_Preset_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RGBManager_Preset_label, 10, 10);
	lv_obj_set_size(ui->RGBManager_Preset_label, 180, 16);

	//Write style for RGBManager_Preset_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RGBManager_Preset_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RGBManager_Preset_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RGBManager_Preset_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RGBManager_Preset_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RGBManager_Preset_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RGBManager_Preset_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RGBManager_Preset_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RGBManager_Preset_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RGBManager_Preset_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RGBManager_Preset_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RGBManager_Preset_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RGBManager_Preset_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RGBManager_Preset_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RGBManager_Preset_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RGBManager_Preset_btn
	ui->RGBManager_Preset_btn = lv_btn_create(ui->RGBManager_Preset_frame);
	ui->RGBManager_Preset_btn_label = lv_label_create(ui->RGBManager_Preset_btn);
	lv_label_set_text(ui->RGBManager_Preset_btn_label, "设置");
	lv_label_set_long_mode(ui->RGBManager_Preset_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->RGBManager_Preset_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->RGBManager_Preset_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->RGBManager_Preset_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->RGBManager_Preset_btn, 50, 140);
	lv_obj_set_size(ui->RGBManager_Preset_btn, 100, 50);

	//Write style for RGBManager_Preset_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->RGBManager_Preset_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->RGBManager_Preset_btn, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->RGBManager_Preset_btn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->RGBManager_Preset_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RGBManager_Preset_btn, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RGBManager_Preset_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RGBManager_Preset_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RGBManager_Preset_btn, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RGBManager_Preset_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RGBManager_Preset_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RGBManager_Preset_roller
	ui->RGBManager_Preset_roller = lv_roller_create(ui->RGBManager_Preset_frame);
	lv_roller_set_options(ui->RGBManager_Preset_roller, "暖光\n冷光\n彩虹\n自定义", LV_ROLLER_MODE_INFINITE);
	lv_obj_set_pos(ui->RGBManager_Preset_roller, 60, 45);
	lv_obj_set_width(ui->RGBManager_Preset_roller, 80);

	//Write style for RGBManager_Preset_roller, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_radius(ui->RGBManager_Preset_roller, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RGBManager_Preset_roller, 175, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->RGBManager_Preset_roller, lv_color_hex(0xdcdde1), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->RGBManager_Preset_roller, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RGBManager_Preset_roller, lv_color_hex(0x7f7f7f), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RGBManager_Preset_roller, &lv_font_Apple_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RGBManager_Preset_roller, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RGBManager_Preset_roller, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->RGBManager_Preset_roller, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RGBManager_Preset_roller, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RGBManager_Preset_roller, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RGBManager_Preset_roller, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for RGBManager_Preset_roller, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
	lv_obj_set_style_radius(ui->RGBManager_Preset_roller, 10, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_opa(ui->RGBManager_Preset_roller, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_color(ui->RGBManager_Preset_roller, lv_color_hex(0xdcdde1), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_grad_dir(ui->RGBManager_Preset_roller, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_color(ui->RGBManager_Preset_roller, lv_color_hex(0x333333), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_font(ui->RGBManager_Preset_roller, &lv_font_Apple_12, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_opa(ui->RGBManager_Preset_roller, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_align(ui->RGBManager_Preset_roller, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_width(ui->RGBManager_Preset_roller, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_left(ui->RGBManager_Preset_roller, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_right(ui->RGBManager_Preset_roller, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_shadow_width(ui->RGBManager_Preset_roller, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

	//Write style for RGBManager_Preset_roller, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
	lv_obj_set_style_radius(ui->RGBManager_Preset_roller, 10, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_bg_opa(ui->RGBManager_Preset_roller, 179, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_bg_color(ui->RGBManager_Preset_roller, lv_color_hex(0xdcdde1), LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_bg_grad_dir(ui->RGBManager_Preset_roller, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_text_color(ui->RGBManager_Preset_roller, lv_color_hex(0x333333), LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_text_font(ui->RGBManager_Preset_roller, &lv_font_Apple_12, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_text_opa(ui->RGBManager_Preset_roller, 255, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_text_align(ui->RGBManager_Preset_roller, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_border_width(ui->RGBManager_Preset_roller, 0, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_pad_left(ui->RGBManager_Preset_roller, 0, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_pad_right(ui->RGBManager_Preset_roller, 0, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_shadow_width(ui->RGBManager_Preset_roller, 0, LV_PART_MAIN|LV_STATE_DISABLED);

	//Write style for RGBManager_Preset_roller, Part: LV_PART_SELECTED, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->RGBManager_Preset_roller, 255, LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->RGBManager_Preset_roller, lv_color_hex(0x2195f6), LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->RGBManager_Preset_roller, LV_GRAD_DIR_NONE, LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RGBManager_Preset_roller, lv_color_hex(0xFFFFFF), LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RGBManager_Preset_roller, &lv_font_Apple_16, LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RGBManager_Preset_roller, 255, LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RGBManager_Preset_roller, LV_TEXT_ALIGN_CENTER, LV_PART_SELECTED|LV_STATE_DEFAULT);

	//Write style for RGBManager_Preset_roller, Part: LV_PART_SELECTED, State: LV_STATE_FOCUSED.
	lv_obj_set_style_bg_opa(ui->RGBManager_Preset_roller, 255, LV_PART_SELECTED|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_color(ui->RGBManager_Preset_roller, lv_color_hex(0x2195f6), LV_PART_SELECTED|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_grad_dir(ui->RGBManager_Preset_roller, LV_GRAD_DIR_NONE, LV_PART_SELECTED|LV_STATE_FOCUSED);
	lv_obj_set_style_text_color(ui->RGBManager_Preset_roller, lv_color_hex(0xffffff), LV_PART_SELECTED|LV_STATE_FOCUSED);
	lv_obj_set_style_text_font(ui->RGBManager_Preset_roller, &lv_font_Apple_16, LV_PART_SELECTED|LV_STATE_FOCUSED);
	lv_obj_set_style_text_opa(ui->RGBManager_Preset_roller, 255, LV_PART_SELECTED|LV_STATE_FOCUSED);
	lv_obj_set_style_text_align(ui->RGBManager_Preset_roller, LV_TEXT_ALIGN_CENTER, LV_PART_SELECTED|LV_STATE_FOCUSED);

	//Write style for RGBManager_Preset_roller, Part: LV_PART_SELECTED, State: LV_STATE_DISABLED.
	lv_obj_set_style_bg_opa(ui->RGBManager_Preset_roller, 255, LV_PART_SELECTED|LV_STATE_DISABLED);
	lv_obj_set_style_bg_color(ui->RGBManager_Preset_roller, lv_color_hex(0x2195f6), LV_PART_SELECTED|LV_STATE_DISABLED);
	lv_obj_set_style_bg_grad_dir(ui->RGBManager_Preset_roller, LV_GRAD_DIR_NONE, LV_PART_SELECTED|LV_STATE_DISABLED);
	lv_obj_set_style_text_color(ui->RGBManager_Preset_roller, lv_color_hex(0xFFFFFF), LV_PART_SELECTED|LV_STATE_DISABLED);
	lv_obj_set_style_text_font(ui->RGBManager_Preset_roller, &lv_font_Apple_16, LV_PART_SELECTED|LV_STATE_DISABLED);
	lv_obj_set_style_text_opa(ui->RGBManager_Preset_roller, 255, LV_PART_SELECTED|LV_STATE_DISABLED);
	lv_obj_set_style_text_align(ui->RGBManager_Preset_roller, LV_TEXT_ALIGN_CENTER, LV_PART_SELECTED|LV_STATE_DISABLED);

	lv_roller_set_visible_row_count(ui->RGBManager_Preset_roller, 3);
	//Write codes RGBManager_RGB_num_frame
	ui->RGBManager_RGB_num_frame = lv_obj_create(ui->RGBManager_RGB_frame);
	lv_obj_set_pos(ui->RGBManager_RGB_num_frame, 0, 500);
	lv_obj_set_size(ui->RGBManager_RGB_num_frame, 200, 200);
	lv_obj_set_scrollbar_mode(ui->RGBManager_RGB_num_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for RGBManager_RGB_num_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RGBManager_RGB_num_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RGBManager_RGB_num_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RGBManager_RGB_num_frame, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->RGBManager_RGB_num_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->RGBManager_RGB_num_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RGBManager_RGB_num_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RGBManager_RGB_num_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RGBManager_RGB_num_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RGBManager_RGB_num_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RGBManager_RGB_num_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RGBManager_label_1
	ui->RGBManager_label_1 = lv_label_create(ui->RGBManager_RGB_num_frame);
	lv_label_set_text(ui->RGBManager_label_1, "灯珠数量");
	lv_label_set_long_mode(ui->RGBManager_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->RGBManager_label_1, 10, 10);
	lv_obj_set_size(ui->RGBManager_label_1, 180, 16);

	//Write style for RGBManager_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->RGBManager_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RGBManager_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RGBManager_label_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RGBManager_label_1, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RGBManager_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->RGBManager_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->RGBManager_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RGBManager_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RGBManager_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->RGBManager_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RGBManager_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->RGBManager_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RGBManager_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RGBManager_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RGBManager_num_ten_roller
	ui->RGBManager_num_ten_roller = lv_roller_create(ui->RGBManager_RGB_num_frame);
	lv_roller_set_options(ui->RGBManager_num_ten_roller, "1\n2\n3\n4\n5\n6\n7\n8\n9\n0", LV_ROLLER_MODE_INFINITE);
	lv_obj_set_pos(ui->RGBManager_num_ten_roller, 10, 45);
	lv_obj_set_width(ui->RGBManager_num_ten_roller, 80);

	//Write style for RGBManager_num_ten_roller, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_radius(ui->RGBManager_num_ten_roller, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RGBManager_num_ten_roller, 175, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->RGBManager_num_ten_roller, lv_color_hex(0xdcdde1), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->RGBManager_num_ten_roller, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RGBManager_num_ten_roller, lv_color_hex(0x7f7f7f), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RGBManager_num_ten_roller, &lv_font_Apple_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RGBManager_num_ten_roller, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RGBManager_num_ten_roller, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->RGBManager_num_ten_roller, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RGBManager_num_ten_roller, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RGBManager_num_ten_roller, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RGBManager_num_ten_roller, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for RGBManager_num_ten_roller, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
	lv_obj_set_style_radius(ui->RGBManager_num_ten_roller, 10, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_opa(ui->RGBManager_num_ten_roller, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_color(ui->RGBManager_num_ten_roller, lv_color_hex(0xdcdde1), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_grad_dir(ui->RGBManager_num_ten_roller, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_color(ui->RGBManager_num_ten_roller, lv_color_hex(0x333333), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_font(ui->RGBManager_num_ten_roller, &lv_font_Apple_12, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_opa(ui->RGBManager_num_ten_roller, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_align(ui->RGBManager_num_ten_roller, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_width(ui->RGBManager_num_ten_roller, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_left(ui->RGBManager_num_ten_roller, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_right(ui->RGBManager_num_ten_roller, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_shadow_width(ui->RGBManager_num_ten_roller, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

	//Write style for RGBManager_num_ten_roller, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
	lv_obj_set_style_radius(ui->RGBManager_num_ten_roller, 10, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_bg_opa(ui->RGBManager_num_ten_roller, 179, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_bg_color(ui->RGBManager_num_ten_roller, lv_color_hex(0xdcdde1), LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_bg_grad_dir(ui->RGBManager_num_ten_roller, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_text_color(ui->RGBManager_num_ten_roller, lv_color_hex(0x333333), LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_text_font(ui->RGBManager_num_ten_roller, &lv_font_Apple_12, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_text_opa(ui->RGBManager_num_ten_roller, 255, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_text_align(ui->RGBManager_num_ten_roller, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_border_width(ui->RGBManager_num_ten_roller, 0, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_pad_left(ui->RGBManager_num_ten_roller, 0, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_pad_right(ui->RGBManager_num_ten_roller, 0, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_shadow_width(ui->RGBManager_num_ten_roller, 0, LV_PART_MAIN|LV_STATE_DISABLED);

	//Write style for RGBManager_num_ten_roller, Part: LV_PART_SELECTED, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->RGBManager_num_ten_roller, 255, LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->RGBManager_num_ten_roller, lv_color_hex(0x2195f6), LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->RGBManager_num_ten_roller, LV_GRAD_DIR_NONE, LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RGBManager_num_ten_roller, lv_color_hex(0xFFFFFF), LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RGBManager_num_ten_roller, &lv_font_Apple_16, LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RGBManager_num_ten_roller, 255, LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RGBManager_num_ten_roller, LV_TEXT_ALIGN_CENTER, LV_PART_SELECTED|LV_STATE_DEFAULT);

	//Write style for RGBManager_num_ten_roller, Part: LV_PART_SELECTED, State: LV_STATE_FOCUSED.
	lv_obj_set_style_bg_opa(ui->RGBManager_num_ten_roller, 255, LV_PART_SELECTED|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_color(ui->RGBManager_num_ten_roller, lv_color_hex(0x2195f6), LV_PART_SELECTED|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_grad_dir(ui->RGBManager_num_ten_roller, LV_GRAD_DIR_NONE, LV_PART_SELECTED|LV_STATE_FOCUSED);
	lv_obj_set_style_text_color(ui->RGBManager_num_ten_roller, lv_color_hex(0xffffff), LV_PART_SELECTED|LV_STATE_FOCUSED);
	lv_obj_set_style_text_font(ui->RGBManager_num_ten_roller, &lv_font_Apple_16, LV_PART_SELECTED|LV_STATE_FOCUSED);
	lv_obj_set_style_text_opa(ui->RGBManager_num_ten_roller, 255, LV_PART_SELECTED|LV_STATE_FOCUSED);
	lv_obj_set_style_text_align(ui->RGBManager_num_ten_roller, LV_TEXT_ALIGN_CENTER, LV_PART_SELECTED|LV_STATE_FOCUSED);

	//Write style for RGBManager_num_ten_roller, Part: LV_PART_SELECTED, State: LV_STATE_DISABLED.
	lv_obj_set_style_bg_opa(ui->RGBManager_num_ten_roller, 255, LV_PART_SELECTED|LV_STATE_DISABLED);
	lv_obj_set_style_bg_color(ui->RGBManager_num_ten_roller, lv_color_hex(0x2195f6), LV_PART_SELECTED|LV_STATE_DISABLED);
	lv_obj_set_style_bg_grad_dir(ui->RGBManager_num_ten_roller, LV_GRAD_DIR_NONE, LV_PART_SELECTED|LV_STATE_DISABLED);
	lv_obj_set_style_text_color(ui->RGBManager_num_ten_roller, lv_color_hex(0xFFFFFF), LV_PART_SELECTED|LV_STATE_DISABLED);
	lv_obj_set_style_text_font(ui->RGBManager_num_ten_roller, &lv_font_Apple_16, LV_PART_SELECTED|LV_STATE_DISABLED);
	lv_obj_set_style_text_opa(ui->RGBManager_num_ten_roller, 255, LV_PART_SELECTED|LV_STATE_DISABLED);
	lv_obj_set_style_text_align(ui->RGBManager_num_ten_roller, LV_TEXT_ALIGN_CENTER, LV_PART_SELECTED|LV_STATE_DISABLED);

	lv_roller_set_visible_row_count(ui->RGBManager_num_ten_roller, 3);
	//Write codes RGBManager_default_btn
	ui->RGBManager_default_btn = lv_btn_create(ui->RGBManager_RGB_num_frame);
	ui->RGBManager_default_btn_label = lv_label_create(ui->RGBManager_default_btn);
	lv_label_set_text(ui->RGBManager_default_btn_label, "默认");
	lv_label_set_long_mode(ui->RGBManager_default_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->RGBManager_default_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->RGBManager_default_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->RGBManager_default_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->RGBManager_default_btn, 10, 140);
	lv_obj_set_size(ui->RGBManager_default_btn, 80, 50);

	//Write style for RGBManager_default_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->RGBManager_default_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->RGBManager_default_btn, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->RGBManager_default_btn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->RGBManager_default_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RGBManager_default_btn, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RGBManager_default_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RGBManager_default_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RGBManager_default_btn, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RGBManager_default_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RGBManager_default_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RGBManager_set_num_btn
	ui->RGBManager_set_num_btn = lv_btn_create(ui->RGBManager_RGB_num_frame);
	ui->RGBManager_set_num_btn_label = lv_label_create(ui->RGBManager_set_num_btn);
	lv_label_set_text(ui->RGBManager_set_num_btn_label, "设置");
	lv_label_set_long_mode(ui->RGBManager_set_num_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->RGBManager_set_num_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->RGBManager_set_num_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->RGBManager_set_num_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->RGBManager_set_num_btn, 107, 140);
	lv_obj_set_size(ui->RGBManager_set_num_btn, 80, 50);

	//Write style for RGBManager_set_num_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->RGBManager_set_num_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->RGBManager_set_num_btn, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->RGBManager_set_num_btn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->RGBManager_set_num_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->RGBManager_set_num_btn, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RGBManager_set_num_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RGBManager_set_num_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RGBManager_set_num_btn, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RGBManager_set_num_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RGBManager_set_num_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes RGBManager_num_individual_roller
	ui->RGBManager_num_individual_roller = lv_roller_create(ui->RGBManager_RGB_num_frame);
	lv_roller_set_options(ui->RGBManager_num_individual_roller, "1\n2\n3\n4\n5\n6\n7\n8\n9\n0", LV_ROLLER_MODE_INFINITE);
	lv_obj_set_pos(ui->RGBManager_num_individual_roller, 110, 45);
	lv_obj_set_width(ui->RGBManager_num_individual_roller, 80);

	//Write style for RGBManager_num_individual_roller, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_radius(ui->RGBManager_num_individual_roller, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->RGBManager_num_individual_roller, 175, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->RGBManager_num_individual_roller, lv_color_hex(0xdcdde1), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->RGBManager_num_individual_roller, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RGBManager_num_individual_roller, lv_color_hex(0x7f7f7f), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RGBManager_num_individual_roller, &lv_font_Apple_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RGBManager_num_individual_roller, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RGBManager_num_individual_roller, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->RGBManager_num_individual_roller, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->RGBManager_num_individual_roller, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->RGBManager_num_individual_roller, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->RGBManager_num_individual_roller, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for RGBManager_num_individual_roller, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
	lv_obj_set_style_radius(ui->RGBManager_num_individual_roller, 10, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_opa(ui->RGBManager_num_individual_roller, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_color(ui->RGBManager_num_individual_roller, lv_color_hex(0xdcdde1), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_grad_dir(ui->RGBManager_num_individual_roller, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_color(ui->RGBManager_num_individual_roller, lv_color_hex(0x333333), LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_font(ui->RGBManager_num_individual_roller, &lv_font_Apple_12, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_opa(ui->RGBManager_num_individual_roller, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_text_align(ui->RGBManager_num_individual_roller, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_border_width(ui->RGBManager_num_individual_roller, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_left(ui->RGBManager_num_individual_roller, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_pad_right(ui->RGBManager_num_individual_roller, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
	lv_obj_set_style_shadow_width(ui->RGBManager_num_individual_roller, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

	//Write style for RGBManager_num_individual_roller, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
	lv_obj_set_style_radius(ui->RGBManager_num_individual_roller, 10, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_bg_opa(ui->RGBManager_num_individual_roller, 179, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_bg_color(ui->RGBManager_num_individual_roller, lv_color_hex(0xdcdde1), LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_bg_grad_dir(ui->RGBManager_num_individual_roller, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_text_color(ui->RGBManager_num_individual_roller, lv_color_hex(0x333333), LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_text_font(ui->RGBManager_num_individual_roller, &lv_font_Apple_12, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_text_opa(ui->RGBManager_num_individual_roller, 255, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_text_align(ui->RGBManager_num_individual_roller, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_border_width(ui->RGBManager_num_individual_roller, 0, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_pad_left(ui->RGBManager_num_individual_roller, 0, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_pad_right(ui->RGBManager_num_individual_roller, 0, LV_PART_MAIN|LV_STATE_DISABLED);
	lv_obj_set_style_shadow_width(ui->RGBManager_num_individual_roller, 0, LV_PART_MAIN|LV_STATE_DISABLED);

	//Write style for RGBManager_num_individual_roller, Part: LV_PART_SELECTED, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->RGBManager_num_individual_roller, 255, LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->RGBManager_num_individual_roller, lv_color_hex(0x2195f6), LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->RGBManager_num_individual_roller, LV_GRAD_DIR_NONE, LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->RGBManager_num_individual_roller, lv_color_hex(0xFFFFFF), LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->RGBManager_num_individual_roller, &lv_font_Apple_16, LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->RGBManager_num_individual_roller, 255, LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->RGBManager_num_individual_roller, LV_TEXT_ALIGN_CENTER, LV_PART_SELECTED|LV_STATE_DEFAULT);

	//Write style for RGBManager_num_individual_roller, Part: LV_PART_SELECTED, State: LV_STATE_FOCUSED.
	lv_obj_set_style_bg_opa(ui->RGBManager_num_individual_roller, 255, LV_PART_SELECTED|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_color(ui->RGBManager_num_individual_roller, lv_color_hex(0x2195f6), LV_PART_SELECTED|LV_STATE_FOCUSED);
	lv_obj_set_style_bg_grad_dir(ui->RGBManager_num_individual_roller, LV_GRAD_DIR_NONE, LV_PART_SELECTED|LV_STATE_FOCUSED);
	lv_obj_set_style_text_color(ui->RGBManager_num_individual_roller, lv_color_hex(0xffffff), LV_PART_SELECTED|LV_STATE_FOCUSED);
	lv_obj_set_style_text_font(ui->RGBManager_num_individual_roller, &lv_font_Apple_16, LV_PART_SELECTED|LV_STATE_FOCUSED);
	lv_obj_set_style_text_opa(ui->RGBManager_num_individual_roller, 255, LV_PART_SELECTED|LV_STATE_FOCUSED);
	lv_obj_set_style_text_align(ui->RGBManager_num_individual_roller, LV_TEXT_ALIGN_CENTER, LV_PART_SELECTED|LV_STATE_FOCUSED);

	//Write style for RGBManager_num_individual_roller, Part: LV_PART_SELECTED, State: LV_STATE_DISABLED.
	lv_obj_set_style_bg_opa(ui->RGBManager_num_individual_roller, 255, LV_PART_SELECTED|LV_STATE_DISABLED);
	lv_obj_set_style_bg_color(ui->RGBManager_num_individual_roller, lv_color_hex(0x2195f6), LV_PART_SELECTED|LV_STATE_DISABLED);
	lv_obj_set_style_bg_grad_dir(ui->RGBManager_num_individual_roller, LV_GRAD_DIR_NONE, LV_PART_SELECTED|LV_STATE_DISABLED);
	lv_obj_set_style_text_color(ui->RGBManager_num_individual_roller, lv_color_hex(0xFFFFFF), LV_PART_SELECTED|LV_STATE_DISABLED);
	lv_obj_set_style_text_font(ui->RGBManager_num_individual_roller, &lv_font_Apple_16, LV_PART_SELECTED|LV_STATE_DISABLED);
	lv_obj_set_style_text_opa(ui->RGBManager_num_individual_roller, 255, LV_PART_SELECTED|LV_STATE_DISABLED);
	lv_obj_set_style_text_align(ui->RGBManager_num_individual_roller, LV_TEXT_ALIGN_CENTER, LV_PART_SELECTED|LV_STATE_DISABLED);

	lv_roller_set_visible_row_count(ui->RGBManager_num_individual_roller, 3);
	//The custom code of RGBManager.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->RGBManager);

	//Init events for screen.
	events_init_RGBManager(ui);
}
