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



void setup_scr_Note(lv_ui *ui)
{
	//Write codes Note
	ui->Note = lv_obj_create(NULL);
	lv_obj_set_size(ui->Note, 240, 280);
	lv_obj_set_scrollbar_mode(ui->Note, LV_SCROLLBAR_MODE_OFF);

	//Write style for Note, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Note, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Note, lv_color_hex(0x222f3e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Note, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Note_Note_title_label
	ui->Note_Note_title_label = lv_label_create(ui->Note);
	lv_label_set_text(ui->Note_Note_title_label, "别忘了");
	lv_label_set_long_mode(ui->Note_Note_title_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Note_Note_title_label, 0, -10);
	lv_obj_set_size(ui->Note_Note_title_label, 240, 24);

	//Write style for Note_Note_title_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Note_Note_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Note_Note_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Note_Note_title_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Note_Note_title_label, &lv_font_Apple_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Note_Note_title_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Note_Note_title_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Note_Note_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Note_Note_title_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Note_Note_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Note_Note_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Note_Note_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Note_Note_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Note_Note_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Note_Note_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Note_note_frame
	ui->Note_note_frame = lv_obj_create(ui->Note);
	lv_obj_set_pos(ui->Note_note_frame, 10, 80);
	lv_obj_set_size(ui->Note_note_frame, 220, 220);
	lv_obj_set_scrollbar_mode(ui->Note_note_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for Note_note_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Note_note_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Note_note_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Note_note_frame, 28, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Note_note_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Note_note_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Note_note_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Note_note_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Note_note_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Note_note_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Note_note_frame, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->Note_note_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->Note_note_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->Note_note_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->Note_note_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->Note_note_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Note_note_body_label
	ui->Note_note_body_label = lv_label_create(ui->Note_note_frame);
	lv_label_set_text(ui->Note_note_body_label, "Label");
	lv_label_set_long_mode(ui->Note_note_body_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Note_note_body_label, 0, 44);
	lv_obj_set_size(ui->Note_note_body_label, 220, 64);

	//Write style for Note_note_body_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Note_note_body_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Note_note_body_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Note_note_body_label, lv_color_hex(0xf3f3f3), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Note_note_body_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Note_note_body_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Note_note_body_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Note_note_body_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Note_note_body_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Note_note_body_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Note_note_body_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Note_note_body_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Note_note_body_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Note_note_body_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Note_note_body_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Note_note_title_label
	ui->Note_note_title_label = lv_label_create(ui->Note_note_frame);
	lv_label_set_text(ui->Note_note_title_label, "标题");
	lv_label_set_long_mode(ui->Note_note_title_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Note_note_title_label, 10, 15);
	lv_obj_set_size(ui->Note_note_title_label, 200, 16);

	//Write style for Note_note_title_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Note_note_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Note_note_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Note_note_title_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Note_note_title_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Note_note_title_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Note_note_title_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Note_note_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Note_note_title_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Note_note_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Note_note_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Note_note_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Note_note_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Note_note_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Note_note_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Note_note_img
	ui->Note_note_img = lv_img_create(ui->Note_note_frame);
	lv_obj_add_flag(ui->Note_note_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->Note_note_img, &_note_alpha_100x100);
	lv_img_set_pivot(ui->Note_note_img, 50,50);
	lv_img_set_angle(ui->Note_note_img, 0);
	lv_obj_set_pos(ui->Note_note_img, 60, 115);
	lv_obj_set_size(ui->Note_note_img, 100, 100);

	//Write style for Note_note_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->Note_note_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of Note.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->Note);

	//Init events for screen.
	events_init_Note(ui);
}
