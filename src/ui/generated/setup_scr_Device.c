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



void setup_scr_Device(lv_ui *ui)
{
	//Write codes Device
	ui->Device = lv_obj_create(NULL);
	lv_obj_set_size(ui->Device, 240, 280);
	lv_obj_set_scrollbar_mode(ui->Device, LV_SCROLLBAR_MODE_OFF);

	//Write style for Device, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Device, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Device, lv_color_hex(0x222f3e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Device, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Device_restat_title_label
	ui->Device_restat_title_label = lv_label_create(ui->Device);
	lv_label_set_text(ui->Device_restat_title_label, "重启设备");
	lv_label_set_long_mode(ui->Device_restat_title_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Device_restat_title_label, 0, -10);
	lv_obj_set_size(ui->Device_restat_title_label, 240, 24);

	//Write style for Device_restat_title_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Device_restat_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Device_restat_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Device_restat_title_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Device_restat_title_label, &lv_font_Apple_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Device_restat_title_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Device_restat_title_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Device_restat_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Device_restat_title_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Device_restat_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Device_restat_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Device_restat_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Device_restat_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Device_restat_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Device_restat_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Device_restat_frame
	ui->Device_restat_frame = lv_obj_create(ui->Device);
	lv_obj_set_pos(ui->Device_restat_frame, 10, 80);
	lv_obj_set_size(ui->Device_restat_frame, 220, 220);
	lv_obj_set_scrollbar_mode(ui->Device_restat_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Device_restat_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Device_restat_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Device_restat_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Device_restat_frame, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Device_restat_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Device_restat_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Device_restat_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Device_restat_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Device_restat_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Device_restat_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Device_restat_frame, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->Device_restat_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->Device_restat_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->Device_restat_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->Device_restat_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->Device_restat_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Device_restat_dev_btn
	ui->Device_restat_dev_btn = lv_btn_create(ui->Device_restat_frame);
	ui->Device_restat_dev_btn_label = lv_label_create(ui->Device_restat_dev_btn);
	lv_label_set_text(ui->Device_restat_dev_btn_label, "重启设备");
	lv_label_set_long_mode(ui->Device_restat_dev_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Device_restat_dev_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Device_restat_dev_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->Device_restat_dev_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->Device_restat_dev_btn, 60, 130);
	lv_obj_set_size(ui->Device_restat_dev_btn, 100, 50);

	//Write style for Device_restat_dev_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Device_restat_dev_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Device_restat_dev_btn, lv_color_hex(0xee5253), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Device_restat_dev_btn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Device_restat_dev_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Device_restat_dev_btn, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Device_restat_dev_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Device_restat_dev_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Device_restat_dev_btn, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Device_restat_dev_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Device_restat_dev_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Device_restat_img
	ui->Device_restat_img = lv_img_create(ui->Device_restat_frame);
	lv_obj_add_flag(ui->Device_restat_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Device_restat_img, &_info_alpha_64x64);
	lv_img_set_pivot(ui->Device_restat_img, 50,50);
	lv_img_set_angle(ui->Device_restat_img, 0);
	lv_obj_set_pos(ui->Device_restat_img, 78, 20);
	lv_obj_set_size(ui->Device_restat_img, 64, 64);

	//Write style for Device_restat_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->Device_restat_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Device_tip_label
	ui->Device_tip_label = lv_label_create(ui->Device_restat_frame);
	lv_label_set_text(ui->Device_tip_label, "长按按钮重启");
	lv_label_set_long_mode(ui->Device_tip_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Device_tip_label, 0, 195);
	lv_obj_set_size(ui->Device_tip_label, 220, 12);

	//Write style for Device_tip_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Device_tip_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Device_tip_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Device_tip_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Device_tip_label, &lv_font_Apple_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Device_tip_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Device_tip_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Device_tip_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Device_tip_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Device_tip_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Device_tip_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Device_tip_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Device_tip_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Device_tip_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Device_tip_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Device_shutdown_time_frame
	ui->Device_shutdown_time_frame = lv_obj_create(ui->Device);
	lv_obj_set_pos(ui->Device_shutdown_time_frame, -240, 0);
	lv_obj_set_size(ui->Device_shutdown_time_frame, 240, 280);
	lv_obj_set_scrollbar_mode(ui->Device_shutdown_time_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Device_shutdown_time_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Device_shutdown_time_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Device_shutdown_time_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Device_shutdown_time_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Device_shutdown_time_frame, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Device_shutdown_time_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Device_shutdown_time_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Device_shutdown_time_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Device_shutdown_time_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Device_shutdown_time_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Device_shutdown_time_frame, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->Device_shutdown_time_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->Device_shutdown_time_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->Device_shutdown_time_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->Device_shutdown_time_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->Device_shutdown_time_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Device_shutdown_time_label
	ui->Device_shutdown_time_label = lv_label_create(ui->Device_shutdown_time_frame);
	lv_label_set_text(ui->Device_shutdown_time_label, "5");
	lv_label_set_long_mode(ui->Device_shutdown_time_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Device_shutdown_time_label, 0, 100);
	lv_obj_set_size(ui->Device_shutdown_time_label, 240, 48);

	//Write style for Device_shutdown_time_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Device_shutdown_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Device_shutdown_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Device_shutdown_time_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Device_shutdown_time_label, &lv_font_Apple_48, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Device_shutdown_time_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Device_shutdown_time_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Device_shutdown_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Device_shutdown_time_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Device_shutdown_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Device_shutdown_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Device_shutdown_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Device_shutdown_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Device_shutdown_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Device_shutdown_time_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Device_shutdown_tips_label
	ui->Device_shutdown_tips_label = lv_label_create(ui->Device_shutdown_time_frame);
	lv_label_set_text(ui->Device_shutdown_tips_label, "正在关闭你的设备");
	lv_label_set_long_mode(ui->Device_shutdown_tips_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Device_shutdown_tips_label, 0, 170);
	lv_obj_set_size(ui->Device_shutdown_tips_label, 240, 16);

	//Write style for Device_shutdown_tips_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Device_shutdown_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Device_shutdown_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Device_shutdown_tips_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Device_shutdown_tips_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Device_shutdown_tips_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Device_shutdown_tips_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Device_shutdown_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Device_shutdown_tips_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Device_shutdown_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Device_shutdown_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Device_shutdown_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Device_shutdown_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Device_shutdown_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Device_shutdown_tips_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Device_spinner
	ui->Device_spinner = lv_spinner_create(ui->Device_shutdown_time_frame, 500, 60);
	lv_obj_set_pos(ui->Device_spinner, 104, 220);
	lv_obj_set_size(ui->Device_spinner, 32, 32);

	//Write style for Device_spinner, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_pad_top(ui->Device_spinner, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Device_spinner, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Device_spinner, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Device_spinner, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Device_spinner, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_width(ui->Device_spinner, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->Device_spinner, 47, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->Device_spinner, lv_color_hex(0xd5d6de), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Device_spinner, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for Device_spinner, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_arc_width(ui->Device_spinner, 5, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->Device_spinner, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->Device_spinner, lv_color_hex(0xffffff), LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//The custom code of Device.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->Device);

	//Init events for screen.
	events_init_Device(ui);
}
