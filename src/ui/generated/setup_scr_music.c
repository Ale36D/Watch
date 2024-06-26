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

void setup_scr_music(lv_ui *ui)
{
	// Write codes music
	ui->music = lv_obj_create(NULL);
	lv_obj_set_size(ui->music, 240, 280);
	lv_obj_set_scrollbar_mode(ui->music, LV_SCROLLBAR_MODE_OFF);

	// Write style for music, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->music, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->music, lv_color_hex(0x222f3e), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->music, LV_GRAD_DIR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes music_music_title_label
	ui->music_music_title_label = lv_label_create(ui->music);
	lv_label_set_text(ui->music_music_title_label, "音乐频谱");
	lv_label_set_long_mode(ui->music_music_title_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->music_music_title_label, 60, -10);
	lv_obj_set_size(ui->music_music_title_label, 120, 24);

	// Write style for music_music_title_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->music_music_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->music_music_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->music_music_title_label, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->music_music_title_label, &lv_font_Apple_24, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->music_music_title_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->music_music_title_label, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->music_music_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->music_music_title_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->music_music_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->music_music_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->music_music_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->music_music_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->music_music_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->music_music_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes music_music_bar_frame
	ui->music_music_bar_frame = lv_obj_create(ui->music);
	lv_obj_set_pos(ui->music_music_bar_frame, 10, 120);
	lv_obj_set_size(ui->music_music_bar_frame, 220, 190);
	lv_obj_set_scrollbar_mode(ui->music_music_bar_frame, LV_SCROLLBAR_MODE_OFF);

	// Write style for music_music_bar_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->music_music_bar_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->music_music_bar_frame, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->music_music_bar_frame, 28, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->music_music_bar_frame, lv_color_hex(0x576574), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->music_music_bar_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->music_music_bar_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->music_music_bar_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->music_music_bar_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->music_music_bar_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->music_music_bar_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes music_music_sw_frame
	ui->music_music_sw_frame = lv_obj_create(ui->music);
	lv_obj_set_pos(ui->music_music_sw_frame, 10, 40);
	lv_obj_set_size(ui->music_music_sw_frame, 220, 40);
	lv_obj_set_scrollbar_mode(ui->music_music_sw_frame, LV_SCROLLBAR_MODE_OFF);

	// Write style for music_music_sw_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->music_music_sw_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->music_music_sw_frame, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->music_music_sw_frame, 28, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->music_music_sw_frame, lv_color_hex(0x576574), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->music_music_sw_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->music_music_sw_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->music_music_sw_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->music_music_sw_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->music_music_sw_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->music_music_sw_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes music_music_sw
	ui->music_music_sw = lv_switch_create(ui->music_music_sw_frame);
	lv_obj_set_pos(ui->music_music_sw, 150, 4);
	lv_obj_set_size(ui->music_music_sw, 60, 30);

	// Write style for music_music_sw, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->music_music_sw, 28, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->music_music_sw, lv_color_hex(0x576574), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->music_music_sw, LV_GRAD_DIR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->music_music_sw, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->music_music_sw, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->music_music_sw, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write style for music_music_sw, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
	lv_obj_set_style_bg_opa(ui->music_music_sw, 26, LV_PART_MAIN | LV_STATE_FOCUSED);
	lv_obj_set_style_bg_color(ui->music_music_sw, lv_color_hex(0x576574), LV_PART_MAIN | LV_STATE_FOCUSED);
	lv_obj_set_style_bg_grad_dir(ui->music_music_sw, LV_GRAD_DIR_NONE, LV_PART_MAIN | LV_STATE_FOCUSED);
	lv_obj_set_style_border_width(ui->music_music_sw, 0, LV_PART_MAIN | LV_STATE_FOCUSED);
	lv_obj_set_style_radius(ui->music_music_sw, 15, LV_PART_MAIN | LV_STATE_FOCUSED);
	lv_obj_set_style_shadow_width(ui->music_music_sw, 0, LV_PART_MAIN | LV_STATE_FOCUSED);

	// Write style for music_music_sw, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
	lv_obj_set_style_bg_opa(ui->music_music_sw, 27, LV_PART_MAIN | LV_STATE_DISABLED);
	lv_obj_set_style_bg_color(ui->music_music_sw, lv_color_hex(0x576574), LV_PART_MAIN | LV_STATE_DISABLED);
	lv_obj_set_style_bg_grad_dir(ui->music_music_sw, LV_GRAD_DIR_NONE, LV_PART_MAIN | LV_STATE_DISABLED);
	lv_obj_set_style_border_width(ui->music_music_sw, 0, LV_PART_MAIN | LV_STATE_DISABLED);
	lv_obj_set_style_radius(ui->music_music_sw, 15, LV_PART_MAIN | LV_STATE_DISABLED);
	lv_obj_set_style_shadow_width(ui->music_music_sw, 0, LV_PART_MAIN | LV_STATE_DISABLED);

	// Write style for music_music_sw, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
	lv_obj_set_style_bg_opa(ui->music_music_sw, 255, LV_PART_INDICATOR | LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->music_music_sw, lv_color_hex(0x222f3e), LV_PART_INDICATOR | LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->music_music_sw, LV_GRAD_DIR_NONE, LV_PART_INDICATOR | LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->music_music_sw, 0, LV_PART_INDICATOR | LV_STATE_CHECKED);

	// Write style for music_music_sw, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->music_music_sw, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->music_music_sw, lv_color_hex(0x10ac84), LV_PART_KNOB | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->music_music_sw, LV_GRAD_DIR_NONE, LV_PART_KNOB | LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->music_music_sw, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->music_music_sw, 10, LV_PART_KNOB | LV_STATE_DEFAULT);

	// Write codes music_sw_label
	ui->music_sw_label = lv_label_create(ui->music_music_sw_frame);
	lv_label_set_text(ui->music_sw_label, "开启频谱:");
	lv_label_set_long_mode(ui->music_sw_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->music_sw_label, 20, 12);
	lv_obj_set_size(ui->music_sw_label, 100, 16);

	// Write style for music_sw_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->music_sw_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->music_sw_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->music_sw_label, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->music_sw_label, &lv_font_Apple_16, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->music_sw_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->music_sw_label, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->music_sw_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->music_sw_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->music_sw_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->music_sw_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->music_sw_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->music_sw_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->music_sw_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->music_sw_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// The custom code of music.

	// Update current screen layout.
	lv_obj_update_layout(ui->music);

	// Init events for screen.
	events_init_music(ui);
}
