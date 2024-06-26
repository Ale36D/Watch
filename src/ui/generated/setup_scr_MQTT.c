/*
 * Copyright 2024 NXPSensor
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

void setup_scr_MQTT(lv_ui *ui)
{
	// Write codes MQTT
	ui->MQTT = lv_obj_create(NULL);
	lv_obj_set_size(ui->MQTT, 240, 280);
	lv_obj_set_scrollbar_mode(ui->MQTT, LV_SCROLLBAR_MODE_OFF);

	// Write style for MQTT, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->MQTT, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->MQTT, lv_color_hex(0x222f3e), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->MQTT, LV_GRAD_DIR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes MQTT_mqtt_title_label
	ui->MQTT_mqtt_title_label = lv_label_create(ui->MQTT);
	lv_label_set_text(ui->MQTT_mqtt_title_label, "MQTT");
	lv_label_set_long_mode(ui->MQTT_mqtt_title_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->MQTT_mqtt_title_label, 70, -10);
	lv_obj_set_size(ui->MQTT_mqtt_title_label, 100, 24);

	// Write style for MQTT_mqtt_title_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->MQTT_mqtt_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->MQTT_mqtt_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->MQTT_mqtt_title_label, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->MQTT_mqtt_title_label, &lv_font_Apple_24, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->MQTT_mqtt_title_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->MQTT_mqtt_title_label, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->MQTT_mqtt_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->MQTT_mqtt_title_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->MQTT_mqtt_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->MQTT_mqtt_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->MQTT_mqtt_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->MQTT_mqtt_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->MQTT_mqtt_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->MQTT_mqtt_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes MQTT_mqtt_frame
	ui->MQTT_mqtt_frame = lv_obj_create(ui->MQTT);
	lv_obj_set_pos(ui->MQTT_mqtt_frame, 10, 50);
	lv_obj_set_size(ui->MQTT_mqtt_frame, 220, 20);
	lv_obj_set_scrollbar_mode(ui->MQTT_mqtt_frame, LV_SCROLLBAR_MODE_OFF);

	// Write style for MQTT_mqtt_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->MQTT_mqtt_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->MQTT_mqtt_frame, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->MQTT_mqtt_frame, 26, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->MQTT_mqtt_frame, lv_color_hex(0x576574), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->MQTT_mqtt_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->MQTT_mqtt_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->MQTT_mqtt_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->MQTT_mqtt_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->MQTT_mqtt_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->MQTT_mqtt_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes MQTT_mqtt_stats_label_tips
	ui->MQTT_mqtt_stats_label_tips = lv_label_create(ui->MQTT_mqtt_frame);
	lv_label_set_text(ui->MQTT_mqtt_stats_label_tips, "MQTT连接状态");
	lv_label_set_long_mode(ui->MQTT_mqtt_stats_label_tips, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->MQTT_mqtt_stats_label_tips, 20, 20);
	lv_obj_set_size(ui->MQTT_mqtt_stats_label_tips, 180, 16);

	// Write style for MQTT_mqtt_stats_label_tips, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->MQTT_mqtt_stats_label_tips, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->MQTT_mqtt_stats_label_tips, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->MQTT_mqtt_stats_label_tips, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->MQTT_mqtt_stats_label_tips, &lv_font_Apple_16, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->MQTT_mqtt_stats_label_tips, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->MQTT_mqtt_stats_label_tips, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->MQTT_mqtt_stats_label_tips, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->MQTT_mqtt_stats_label_tips, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->MQTT_mqtt_stats_label_tips, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->MQTT_mqtt_stats_label_tips, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->MQTT_mqtt_stats_label_tips, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->MQTT_mqtt_stats_label_tips, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->MQTT_mqtt_stats_label_tips, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->MQTT_mqtt_stats_label_tips, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes MQTT_mqtt_stats_show_label
	ui->MQTT_mqtt_stats_show_label = lv_label_create(ui->MQTT_mqtt_frame);
	lv_label_set_text(ui->MQTT_mqtt_stats_show_label, "未连接");
	lv_label_set_long_mode(ui->MQTT_mqtt_stats_show_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->MQTT_mqtt_stats_show_label, 60, 45);
	lv_obj_set_size(ui->MQTT_mqtt_stats_show_label, 100, 16);

	// Write style for MQTT_mqtt_stats_show_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->MQTT_mqtt_stats_show_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->MQTT_mqtt_stats_show_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->MQTT_mqtt_stats_show_label, lv_color_hex(0xf00000), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->MQTT_mqtt_stats_show_label, &lv_font_Apple_16, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->MQTT_mqtt_stats_show_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->MQTT_mqtt_stats_show_label, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->MQTT_mqtt_stats_show_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->MQTT_mqtt_stats_show_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->MQTT_mqtt_stats_show_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->MQTT_mqtt_stats_show_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->MQTT_mqtt_stats_show_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->MQTT_mqtt_stats_show_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->MQTT_mqtt_stats_show_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->MQTT_mqtt_stats_show_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes MQTT_mqtt_enable_sw
	ui->MQTT_mqtt_enable_sw = lv_switch_create(ui->MQTT_mqtt_frame);
	lv_obj_set_pos(ui->MQTT_mqtt_enable_sw, -90, 110);
	lv_obj_set_size(ui->MQTT_mqtt_enable_sw, 40, 20);

	// Write style for MQTT_mqtt_enable_sw, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->MQTT_mqtt_enable_sw, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->MQTT_mqtt_enable_sw, lv_color_hex(0xe6e2e6), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->MQTT_mqtt_enable_sw, LV_GRAD_DIR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->MQTT_mqtt_enable_sw, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->MQTT_mqtt_enable_sw, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->MQTT_mqtt_enable_sw, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write style for MQTT_mqtt_enable_sw, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
	lv_obj_set_style_bg_opa(ui->MQTT_mqtt_enable_sw, 255, LV_PART_INDICATOR | LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->MQTT_mqtt_enable_sw, lv_color_hex(0x2195f6), LV_PART_INDICATOR | LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->MQTT_mqtt_enable_sw, LV_GRAD_DIR_NONE, LV_PART_INDICATOR | LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->MQTT_mqtt_enable_sw, 0, LV_PART_INDICATOR | LV_STATE_CHECKED);

	// Write style for MQTT_mqtt_enable_sw, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->MQTT_mqtt_enable_sw, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->MQTT_mqtt_enable_sw, lv_color_hex(0xffffff), LV_PART_KNOB | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->MQTT_mqtt_enable_sw, LV_GRAD_DIR_NONE, LV_PART_KNOB | LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->MQTT_mqtt_enable_sw, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->MQTT_mqtt_enable_sw, 10, LV_PART_KNOB | LV_STATE_DEFAULT);

	// Write codes MQTT_mqtt_sw_tips_label
	ui->MQTT_mqtt_sw_tips_label = lv_label_create(ui->MQTT_mqtt_frame);
	lv_label_set_text(ui->MQTT_mqtt_sw_tips_label, "启用MQTT\n");
	lv_label_set_long_mode(ui->MQTT_mqtt_sw_tips_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->MQTT_mqtt_sw_tips_label, 60, 80);
	lv_obj_set_size(ui->MQTT_mqtt_sw_tips_label, 100, 16);

	// Write style for MQTT_mqtt_sw_tips_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->MQTT_mqtt_sw_tips_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->MQTT_mqtt_sw_tips_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->MQTT_mqtt_sw_tips_label, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->MQTT_mqtt_sw_tips_label, &lv_font_Apple_16, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->MQTT_mqtt_sw_tips_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->MQTT_mqtt_sw_tips_label, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->MQTT_mqtt_sw_tips_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->MQTT_mqtt_sw_tips_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->MQTT_mqtt_sw_tips_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->MQTT_mqtt_sw_tips_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->MQTT_mqtt_sw_tips_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->MQTT_mqtt_sw_tips_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->MQTT_mqtt_sw_tips_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->MQTT_mqtt_sw_tips_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes MQTT_mqtt_info_frame
	ui->MQTT_mqtt_info_frame = lv_obj_create(ui->MQTT_mqtt_frame);
	lv_obj_set_pos(ui->MQTT_mqtt_info_frame, 10, 140);
	lv_obj_set_size(ui->MQTT_mqtt_info_frame, 200, 70);
	lv_obj_set_scrollbar_mode(ui->MQTT_mqtt_info_frame, LV_SCROLLBAR_MODE_OFF);

	// Write style for MQTT_mqtt_info_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->MQTT_mqtt_info_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->MQTT_mqtt_info_frame, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->MQTT_mqtt_info_frame, 53, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->MQTT_mqtt_info_frame, lv_color_hex(0x576574), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->MQTT_mqtt_info_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->MQTT_mqtt_info_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->MQTT_mqtt_info_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->MQTT_mqtt_info_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->MQTT_mqtt_info_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->MQTT_mqtt_info_frame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes MQTT_dev_id_label
	ui->MQTT_dev_id_label = lv_label_create(ui->MQTT_mqtt_info_frame);
	lv_label_set_text(ui->MQTT_dev_id_label, "DevID");
	lv_label_set_long_mode(ui->MQTT_dev_id_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->MQTT_dev_id_label, 65, 10);
	lv_obj_set_size(ui->MQTT_dev_id_label, 130, 16);

	// Write style for MQTT_dev_id_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->MQTT_dev_id_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->MQTT_dev_id_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->MQTT_dev_id_label, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->MQTT_dev_id_label, &lv_font_montserratMedium_16, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->MQTT_dev_id_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->MQTT_dev_id_label, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->MQTT_dev_id_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->MQTT_dev_id_label, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->MQTT_dev_id_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->MQTT_dev_id_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->MQTT_dev_id_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->MQTT_dev_id_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->MQTT_dev_id_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->MQTT_dev_id_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes MQTT_send_id_label
	ui->MQTT_send_id_label = lv_label_create(ui->MQTT_mqtt_info_frame);
	lv_label_set_text(ui->MQTT_send_id_label, "SendID");
	lv_label_set_long_mode(ui->MQTT_send_id_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->MQTT_send_id_label, 65, 40);
	lv_obj_set_size(ui->MQTT_send_id_label, 130, 16);

	// Write style for MQTT_send_id_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->MQTT_send_id_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->MQTT_send_id_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->MQTT_send_id_label, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->MQTT_send_id_label, &lv_font_montserratMedium_16, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->MQTT_send_id_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->MQTT_send_id_label, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->MQTT_send_id_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->MQTT_send_id_label, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->MQTT_send_id_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->MQTT_send_id_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->MQTT_send_id_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->MQTT_send_id_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->MQTT_send_id_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->MQTT_send_id_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes MQTT_img
	ui->MQTT_img = lv_img_create(ui->MQTT_mqtt_info_frame);
	lv_obj_add_flag(ui->MQTT_img, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->MQTT_img, &_info_alpha_48x48);
	lv_img_set_pivot(ui->MQTT_img, 50, 50);
	lv_img_set_angle(ui->MQTT_img, 0);
	lv_obj_set_pos(ui->MQTT_img, 5, 11);
	lv_obj_set_size(ui->MQTT_img, 48, 48);

	// Write style for MQTT_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->MQTT_img, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

	// The custom code of MQTT.

	// Update current screen layout.
	lv_obj_update_layout(ui->MQTT);

	// Init events for screen.
	events_init_MQTT(ui);
}
