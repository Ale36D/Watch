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



void setup_scr_BlueTools(lv_ui *ui)
{
	//Write codes BlueTools
	ui->BlueTools = lv_obj_create(NULL);
	lv_obj_set_size(ui->BlueTools, 240, 280);
	lv_obj_set_scrollbar_mode(ui->BlueTools, LV_SCROLLBAR_MODE_OFF);

	//Write style for BlueTools, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->BlueTools, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->BlueTools, lv_color_hex(0x222f3e), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->BlueTools, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes BlueTools_blue_title_label
	ui->BlueTools_blue_title_label = lv_label_create(ui->BlueTools);
	lv_label_set_text(ui->BlueTools_blue_title_label, "蓝牙");
	lv_label_set_long_mode(ui->BlueTools_blue_title_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->BlueTools_blue_title_label, 70, -10);
	lv_obj_set_size(ui->BlueTools_blue_title_label, 100, 24);

	//Write style for BlueTools_blue_title_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->BlueTools_blue_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->BlueTools_blue_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->BlueTools_blue_title_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->BlueTools_blue_title_label, &lv_font_Apple_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->BlueTools_blue_title_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->BlueTools_blue_title_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->BlueTools_blue_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->BlueTools_blue_title_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->BlueTools_blue_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->BlueTools_blue_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->BlueTools_blue_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->BlueTools_blue_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->BlueTools_blue_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->BlueTools_blue_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes BlueTools_main_frame
	ui->BlueTools_main_frame = lv_obj_create(ui->BlueTools);
	lv_obj_set_pos(ui->BlueTools_main_frame, 10, 50);
	lv_obj_set_size(ui->BlueTools_main_frame, 220, 20);
	lv_obj_set_scrollbar_mode(ui->BlueTools_main_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for BlueTools_main_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->BlueTools_main_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->BlueTools_main_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->BlueTools_main_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->BlueTools_main_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->BlueTools_main_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->BlueTools_main_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->BlueTools_main_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->BlueTools_main_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes BlueTools_Musiccontrol_frame
	ui->BlueTools_Musiccontrol_frame = lv_obj_create(ui->BlueTools_main_frame);
	lv_obj_set_pos(ui->BlueTools_Musiccontrol_frame, 0, 0);
	lv_obj_set_size(ui->BlueTools_Musiccontrol_frame, 220, 300);
	lv_obj_set_scrollbar_mode(ui->BlueTools_Musiccontrol_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for BlueTools_Musiccontrol_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->BlueTools_Musiccontrol_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->BlueTools_Musiccontrol_frame, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->BlueTools_Musiccontrol_frame, 26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->BlueTools_Musiccontrol_frame, lv_color_hex(0x636e72), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->BlueTools_Musiccontrol_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->BlueTools_Musiccontrol_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->BlueTools_Musiccontrol_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->BlueTools_Musiccontrol_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->BlueTools_Musiccontrol_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->BlueTools_Musiccontrol_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes BlueTools_Musicplayback_btn
	ui->BlueTools_Musicplayback_btn = lv_btn_create(ui->BlueTools_Musiccontrol_frame);
	ui->BlueTools_Musicplayback_btn_label = lv_label_create(ui->BlueTools_Musicplayback_btn);
	lv_label_set_text(ui->BlueTools_Musicplayback_btn_label, "" LV_SYMBOL_PLAY "");
	lv_label_set_long_mode(ui->BlueTools_Musicplayback_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->BlueTools_Musicplayback_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->BlueTools_Musicplayback_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->BlueTools_Musicplayback_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->BlueTools_Musicplayback_btn, 80, 60);
	lv_obj_set_size(ui->BlueTools_Musicplayback_btn, 60, 60);

	//Write style for BlueTools_Musicplayback_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->BlueTools_Musicplayback_btn, 129, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->BlueTools_Musicplayback_btn, lv_color_hex(0xb2bec3), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->BlueTools_Musicplayback_btn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->BlueTools_Musicplayback_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->BlueTools_Musicplayback_btn, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->BlueTools_Musicplayback_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->BlueTools_Musicplayback_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->BlueTools_Musicplayback_btn, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->BlueTools_Musicplayback_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->BlueTools_Musicplayback_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes BlueTools_NextSong_btn
	ui->BlueTools_NextSong_btn = lv_btn_create(ui->BlueTools_Musiccontrol_frame);
	ui->BlueTools_NextSong_btn_label = lv_label_create(ui->BlueTools_NextSong_btn);
	lv_label_set_text(ui->BlueTools_NextSong_btn_label, "" LV_SYMBOL_NEXT "");
	lv_label_set_long_mode(ui->BlueTools_NextSong_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->BlueTools_NextSong_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->BlueTools_NextSong_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->BlueTools_NextSong_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->BlueTools_NextSong_btn, 150, 60);
	lv_obj_set_size(ui->BlueTools_NextSong_btn, 60, 60);

	//Write style for BlueTools_NextSong_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->BlueTools_NextSong_btn, 53, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->BlueTools_NextSong_btn, lv_color_hex(0xdfe6e9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->BlueTools_NextSong_btn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->BlueTools_NextSong_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->BlueTools_NextSong_btn, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->BlueTools_NextSong_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->BlueTools_NextSong_btn, lv_color_hex(0xfefefe), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->BlueTools_NextSong_btn, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->BlueTools_NextSong_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->BlueTools_NextSong_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes BlueTools_PreviousSong_btn
	ui->BlueTools_PreviousSong_btn = lv_btn_create(ui->BlueTools_Musiccontrol_frame);
	ui->BlueTools_PreviousSong_btn_label = lv_label_create(ui->BlueTools_PreviousSong_btn);
	lv_label_set_text(ui->BlueTools_PreviousSong_btn_label, "" LV_SYMBOL_PREV "");
	lv_label_set_long_mode(ui->BlueTools_PreviousSong_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->BlueTools_PreviousSong_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->BlueTools_PreviousSong_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->BlueTools_PreviousSong_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->BlueTools_PreviousSong_btn, 10, 60);
	lv_obj_set_size(ui->BlueTools_PreviousSong_btn, 60, 60);

	//Write style for BlueTools_PreviousSong_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->BlueTools_PreviousSong_btn, 53, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->BlueTools_PreviousSong_btn, lv_color_hex(0xdfe6e9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->BlueTools_PreviousSong_btn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->BlueTools_PreviousSong_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->BlueTools_PreviousSong_btn, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->BlueTools_PreviousSong_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->BlueTools_PreviousSong_btn, lv_color_hex(0xfefefe), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->BlueTools_PreviousSong_btn, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->BlueTools_PreviousSong_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->BlueTools_PreviousSong_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes BlueTools_VoicePlus_btn
	ui->BlueTools_VoicePlus_btn = lv_btn_create(ui->BlueTools_Musiccontrol_frame);
	ui->BlueTools_VoicePlus_btn_label = lv_label_create(ui->BlueTools_VoicePlus_btn);
	lv_label_set_text(ui->BlueTools_VoicePlus_btn_label, "" LV_SYMBOL_PLUS "");
	lv_label_set_long_mode(ui->BlueTools_VoicePlus_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->BlueTools_VoicePlus_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->BlueTools_VoicePlus_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->BlueTools_VoicePlus_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->BlueTools_VoicePlus_btn, 160, 155);
	lv_obj_set_size(ui->BlueTools_VoicePlus_btn, 40, 40);

	//Write style for BlueTools_VoicePlus_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->BlueTools_VoicePlus_btn, 52, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->BlueTools_VoicePlus_btn, lv_color_hex(0xdfe6e9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->BlueTools_VoicePlus_btn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->BlueTools_VoicePlus_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->BlueTools_VoicePlus_btn, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->BlueTools_VoicePlus_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->BlueTools_VoicePlus_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->BlueTools_VoicePlus_btn, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->BlueTools_VoicePlus_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->BlueTools_VoicePlus_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes BlueTools_Soundreduction_btn
	ui->BlueTools_Soundreduction_btn = lv_btn_create(ui->BlueTools_Musiccontrol_frame);
	ui->BlueTools_Soundreduction_btn_label = lv_label_create(ui->BlueTools_Soundreduction_btn);
	lv_label_set_text(ui->BlueTools_Soundreduction_btn_label, "" LV_SYMBOL_MINUS "");
	lv_label_set_long_mode(ui->BlueTools_Soundreduction_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->BlueTools_Soundreduction_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->BlueTools_Soundreduction_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->BlueTools_Soundreduction_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->BlueTools_Soundreduction_btn, 20, 155);
	lv_obj_set_size(ui->BlueTools_Soundreduction_btn, 40, 40);

	//Write style for BlueTools_Soundreduction_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->BlueTools_Soundreduction_btn, 53, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->BlueTools_Soundreduction_btn, lv_color_hex(0xdfe6e9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->BlueTools_Soundreduction_btn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->BlueTools_Soundreduction_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->BlueTools_Soundreduction_btn, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->BlueTools_Soundreduction_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->BlueTools_Soundreduction_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->BlueTools_Soundreduction_btn, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->BlueTools_Soundreduction_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->BlueTools_Soundreduction_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes BlueTools_MusicSoftOpen_btn
	ui->BlueTools_MusicSoftOpen_btn = lv_btn_create(ui->BlueTools_Musiccontrol_frame);
	ui->BlueTools_MusicSoftOpen_btn_label = lv_label_create(ui->BlueTools_MusicSoftOpen_btn);
	lv_label_set_text(ui->BlueTools_MusicSoftOpen_btn_label, "");
	lv_label_set_long_mode(ui->BlueTools_MusicSoftOpen_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->BlueTools_MusicSoftOpen_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->BlueTools_MusicSoftOpen_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->BlueTools_MusicSoftOpen_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->BlueTools_MusicSoftOpen_btn, 80, 145);
	lv_obj_set_size(ui->BlueTools_MusicSoftOpen_btn, 60, 60);

	//Write style for BlueTools_MusicSoftOpen_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->BlueTools_MusicSoftOpen_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->BlueTools_MusicSoftOpen_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->BlueTools_MusicSoftOpen_btn, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->BlueTools_MusicSoftOpen_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->BlueTools_MusicSoftOpen_btn, &_musicico_60x60, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->BlueTools_MusicSoftOpen_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_recolor(ui->BlueTools_MusicSoftOpen_btn, lv_color_hex(0x00b894), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_recolor_opa(ui->BlueTools_MusicSoftOpen_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->BlueTools_MusicSoftOpen_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->BlueTools_MusicSoftOpen_btn, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->BlueTools_MusicSoftOpen_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->BlueTools_MusicSoftOpen_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes BlueTools_blue_music_title_label
	ui->BlueTools_blue_music_title_label = lv_label_create(ui->BlueTools_Musiccontrol_frame);
	lv_label_set_text(ui->BlueTools_blue_music_title_label, "Muisc控制");
	lv_label_set_long_mode(ui->BlueTools_blue_music_title_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->BlueTools_blue_music_title_label, 60, 10);
	lv_obj_set_size(ui->BlueTools_blue_music_title_label, 100, 16);

	//Write style for BlueTools_blue_music_title_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->BlueTools_blue_music_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->BlueTools_blue_music_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->BlueTools_blue_music_title_label, lv_color_hex(0xe4e4e4), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->BlueTools_blue_music_title_label, &lv_font_Apple_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->BlueTools_blue_music_title_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->BlueTools_blue_music_title_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->BlueTools_blue_music_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->BlueTools_blue_music_title_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->BlueTools_blue_music_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->BlueTools_blue_music_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->BlueTools_blue_music_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->BlueTools_blue_music_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->BlueTools_blue_music_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->BlueTools_blue_music_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes BlueTools_Mute_btn
	ui->BlueTools_Mute_btn = lv_btn_create(ui->BlueTools_Musiccontrol_frame);
	ui->BlueTools_Mute_btn_label = lv_label_create(ui->BlueTools_Mute_btn);
	lv_label_set_text(ui->BlueTools_Mute_btn_label, "" LV_SYMBOL_MUTE "");
	lv_label_set_long_mode(ui->BlueTools_Mute_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->BlueTools_Mute_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->BlueTools_Mute_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->BlueTools_Mute_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->BlueTools_Mute_btn, 10, 225);
	lv_obj_set_size(ui->BlueTools_Mute_btn, 60, 60);

	//Write style for BlueTools_Mute_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->BlueTools_Mute_btn, 51, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->BlueTools_Mute_btn, lv_color_hex(0xdfe6e9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->BlueTools_Mute_btn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->BlueTools_Mute_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->BlueTools_Mute_btn, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->BlueTools_Mute_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->BlueTools_Mute_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->BlueTools_Mute_btn, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->BlueTools_Mute_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->BlueTools_Mute_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes BlueTools_recovery_btn
	ui->BlueTools_recovery_btn = lv_btn_create(ui->BlueTools_Musiccontrol_frame);
	ui->BlueTools_recovery_btn_label = lv_label_create(ui->BlueTools_recovery_btn);
	lv_label_set_text(ui->BlueTools_recovery_btn_label, "" LV_SYMBOL_VOLUME_MAX "");
	lv_label_set_long_mode(ui->BlueTools_recovery_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->BlueTools_recovery_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->BlueTools_recovery_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->BlueTools_recovery_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->BlueTools_recovery_btn, 80, 224);
	lv_obj_set_size(ui->BlueTools_recovery_btn, 60, 60);

	//Write style for BlueTools_recovery_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->BlueTools_recovery_btn, 52, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->BlueTools_recovery_btn, lv_color_hex(0xdfe6e9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->BlueTools_recovery_btn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->BlueTools_recovery_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->BlueTools_recovery_btn, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->BlueTools_recovery_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->BlueTools_recovery_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->BlueTools_recovery_btn, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->BlueTools_recovery_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->BlueTools_recovery_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes BlueTools_ResourceManager_btn
	ui->BlueTools_ResourceManager_btn = lv_btn_create(ui->BlueTools_Musiccontrol_frame);
	ui->BlueTools_ResourceManager_btn_label = lv_label_create(ui->BlueTools_ResourceManager_btn);
	lv_label_set_text(ui->BlueTools_ResourceManager_btn_label, "" LV_SYMBOL_DRIVE "");
	lv_label_set_long_mode(ui->BlueTools_ResourceManager_btn_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->BlueTools_ResourceManager_btn_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->BlueTools_ResourceManager_btn, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->BlueTools_ResourceManager_btn_label, LV_PCT(100));
	lv_obj_set_pos(ui->BlueTools_ResourceManager_btn, 150, 225);
	lv_obj_set_size(ui->BlueTools_ResourceManager_btn, 60, 60);

	//Write style for BlueTools_ResourceManager_btn, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->BlueTools_ResourceManager_btn, 52, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->BlueTools_ResourceManager_btn, lv_color_hex(0xdfe6e9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->BlueTools_ResourceManager_btn, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->BlueTools_ResourceManager_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->BlueTools_ResourceManager_btn, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->BlueTools_ResourceManager_btn, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->BlueTools_ResourceManager_btn, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->BlueTools_ResourceManager_btn, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->BlueTools_ResourceManager_btn, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->BlueTools_ResourceManager_btn, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of BlueTools.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->BlueTools);

	//Init events for screen.
	events_init_BlueTools(ui);
}
