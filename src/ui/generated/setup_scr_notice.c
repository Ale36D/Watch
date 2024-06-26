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



void setup_scr_notice(lv_ui *ui)
{
	//Write codes notice
	ui->notice = lv_obj_create(NULL);
	lv_obj_set_size(ui->notice, 240, 280);
	lv_obj_set_scrollbar_mode(ui->notice, LV_SCROLLBAR_MODE_OFF);

	//Write style for notice, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->notice, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->notice, lv_color_hex(0x222f3e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->notice, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes notice_notice_frame
	ui->notice_notice_frame = lv_obj_create(ui->notice);
	lv_obj_set_pos(ui->notice_notice_frame, 10, -100);
	lv_obj_set_size(ui->notice_notice_frame, 220, 110);
	lv_obj_set_scrollbar_mode(ui->notice_notice_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for notice_notice_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->notice_notice_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->notice_notice_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->notice_notice_frame, 218, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->notice_notice_frame, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->notice_notice_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->notice_notice_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->notice_notice_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->notice_notice_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->notice_notice_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->notice_notice_frame, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->notice_notice_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->notice_notice_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->notice_notice_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->notice_notice_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->notice_notice_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes notice_notice_title_label
	ui->notice_notice_title_label = lv_label_create(ui->notice_notice_frame);
	lv_label_set_text(ui->notice_notice_title_label, "Message");
	lv_label_set_long_mode(ui->notice_notice_title_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->notice_notice_title_label, 10, 10);
	lv_obj_set_size(ui->notice_notice_title_label, 200, 18);

	//Write style for notice_notice_title_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->notice_notice_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->notice_notice_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->notice_notice_title_label, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->notice_notice_title_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->notice_notice_title_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->notice_notice_title_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->notice_notice_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->notice_notice_title_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->notice_notice_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->notice_notice_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->notice_notice_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->notice_notice_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->notice_notice_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->notice_notice_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes notice_notice_img_label
	ui->notice_notice_img_label = lv_label_create(ui->notice_notice_frame);
	lv_label_set_text(ui->notice_notice_img_label, "" LV_SYMBOL_BELL "");
	lv_label_set_long_mode(ui->notice_notice_img_label, LV_LABEL_LONG_DOT);
	lv_obj_set_pos(ui->notice_notice_img_label, 10, 10);
	lv_obj_set_size(ui->notice_notice_img_label, 16, 16);

	//Write style for notice_notice_img_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->notice_notice_img_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->notice_notice_img_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->notice_notice_img_label, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->notice_notice_img_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->notice_notice_img_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->notice_notice_img_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->notice_notice_img_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->notice_notice_img_label, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->notice_notice_img_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->notice_notice_img_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->notice_notice_img_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->notice_notice_img_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->notice_notice_img_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->notice_notice_img_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes notice_notice_notice_img
	ui->notice_notice_notice_img = lv_img_create(ui->notice_notice_frame);
	lv_obj_add_flag(ui->notice_notice_notice_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->notice_notice_notice_img, &_message_3_alpha_48x48);
	lv_img_set_pivot(ui->notice_notice_notice_img, 50,50);
	lv_img_set_angle(ui->notice_notice_notice_img, 0);
	lv_obj_set_pos(ui->notice_notice_notice_img, 86, 45);
	lv_obj_set_size(ui->notice_notice_notice_img, 48, 48);

	//Write style for notice_notice_notice_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->notice_notice_notice_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes notice_notice_label
	ui->notice_notice_label = lv_label_create(ui->notice_notice_frame);
	lv_label_set_text(ui->notice_notice_label, "通知内容");
	lv_label_set_long_mode(ui->notice_notice_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->notice_notice_label, 9, 40);
	lv_obj_set_size(ui->notice_notice_label, 200, 60);

	//Write style for notice_notice_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->notice_notice_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->notice_notice_label, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->notice_notice_label, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->notice_notice_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->notice_notice_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->notice_notice_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->notice_notice_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->notice_notice_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->notice_notice_label, 129, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->notice_notice_label, lv_color_hex(0xdcdde1), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->notice_notice_label, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->notice_notice_label, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->notice_notice_label, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->notice_notice_label, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->notice_notice_label, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->notice_notice_label, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->notice_notice_label, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->notice_notice_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->notice_notice_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->notice_notice_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->notice_notice_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes notice_notice_anim_btn
	ui->notice_notice_anim_btn = lv_btn_create(ui->notice);
	ui->notice_notice_anim_btn_label = lv_label_create(ui->notice_notice_anim_btn);
	lv_label_set_text(ui->notice_notice_anim_btn_label, "播放动画");
	lv_label_set_long_mode(ui->notice_notice_anim_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->notice_notice_anim_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->notice_notice_anim_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->notice_notice_anim_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->notice_notice_anim_btn, 70, 180);
	lv_obj_set_size(ui->notice_notice_anim_btn, 100, 50);

	//Write style for notice_notice_anim_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->notice_notice_anim_btn, 230, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->notice_notice_anim_btn, lv_color_hex(0x2F35DA), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->notice_notice_anim_btn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->notice_notice_anim_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->notice_notice_anim_btn, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->notice_notice_anim_btn, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->notice_notice_anim_btn, lv_color_hex(0x40739e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->notice_notice_anim_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->notice_notice_anim_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->notice_notice_anim_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->notice_notice_anim_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->notice_notice_anim_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->notice_notice_anim_btn, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->notice_notice_anim_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->notice_notice_anim_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of notice.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->notice);

	//Init events for screen.
	events_init_notice(ui);
}
