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



lv_calendar_date_t calendar_calendar_view_today;
lv_calendar_date_t calendar_calendar_view_highlihted_days[1];
void setup_scr_calendar(lv_ui *ui)
{
	//Write codes calendar
	ui->calendar = lv_obj_create(NULL);
	lv_obj_set_size(ui->calendar, 240, 280);
	lv_obj_set_scrollbar_mode(ui->calendar, LV_SCROLLBAR_MODE_OFF);

	//Write style for calendar, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->calendar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes calendar_calendar_frame
	ui->calendar_calendar_frame = lv_obj_create(ui->calendar);
	lv_obj_set_pos(ui->calendar_calendar_frame, 0, 0);
	lv_obj_set_size(ui->calendar_calendar_frame, 240, 280);
	lv_obj_set_scrollbar_mode(ui->calendar_calendar_frame, LV_SCROLLBAR_MODE_OFF);

	//Write style for calendar_calendar_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->calendar_calendar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->calendar_calendar_frame, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->calendar_calendar_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->calendar_calendar_frame, lv_color_hex(0x2f3640), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->calendar_calendar_frame, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->calendar_calendar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->calendar_calendar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->calendar_calendar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->calendar_calendar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->calendar_calendar_frame, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->calendar_calendar_frame, lv_color_hex(0x576574), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->calendar_calendar_frame, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->calendar_calendar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->calendar_calendar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->calendar_calendar_frame, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes calendar_calendar_view
	ui->calendar_calendar_view = lv_calendar_create(ui->calendar_calendar_frame);
	calendar_calendar_view_today.year = 2024;
	calendar_calendar_view_today.month = 6;
	calendar_calendar_view_today.day = 15;
	lv_calendar_set_today_date(ui->calendar_calendar_view, calendar_calendar_view_today.year, calendar_calendar_view_today.month, calendar_calendar_view_today.day);
	lv_calendar_set_showed_date(ui->calendar_calendar_view, calendar_calendar_view_today.year, calendar_calendar_view_today.month);
	calendar_calendar_view_highlihted_days[0].year = 2024;
	calendar_calendar_view_highlihted_days[0].month = 6;
	calendar_calendar_view_highlihted_days[0].day = 16;
	lv_calendar_set_highlighted_dates(ui->calendar_calendar_view, calendar_calendar_view_highlihted_days, 1);
	lv_obj_t *calendar_calendar_view_header = lv_calendar_header_arrow_create(ui->calendar_calendar_view);
	lv_calendar_t *calendar_calendar_view = (lv_calendar_t *)ui->calendar_calendar_view;
	lv_obj_add_event_cb(calendar_calendar_view->btnm, calendar_calendar_view_draw_part_begin_event_cb, LV_EVENT_DRAW_PART_BEGIN, NULL);
	lv_obj_add_event_cb(ui->calendar_calendar_view, calendar_calendar_view_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_set_pos(ui->calendar_calendar_view, 10, 70);
	lv_obj_set_size(ui->calendar_calendar_view, 220, 240);

	//Write style state: LV_STATE_DEFAULT for &style_calendar_calendar_view_main_main_default
	static lv_style_t style_calendar_calendar_view_main_main_default;
	ui_init_style(&style_calendar_calendar_view_main_main_default);
	
	lv_style_set_border_width(&style_calendar_calendar_view_main_main_default, 0);
	lv_style_set_bg_opa(&style_calendar_calendar_view_main_main_default, 0);
	lv_style_set_shadow_width(&style_calendar_calendar_view_main_main_default, 0);
	lv_style_set_radius(&style_calendar_calendar_view_main_main_default, 15);
	lv_obj_add_style(ui->calendar_calendar_view, &style_calendar_calendar_view_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_FOCUSED for &style_calendar_calendar_view_main_main_focused
	static lv_style_t style_calendar_calendar_view_main_main_focused;
	ui_init_style(&style_calendar_calendar_view_main_main_focused);
	
	lv_style_set_border_width(&style_calendar_calendar_view_main_main_focused, 0);
	lv_style_set_bg_opa(&style_calendar_calendar_view_main_main_focused, 0);
	lv_style_set_shadow_width(&style_calendar_calendar_view_main_main_focused, 0);
	lv_style_set_radius(&style_calendar_calendar_view_main_main_focused, 15);
	lv_obj_add_style(ui->calendar_calendar_view, &style_calendar_calendar_view_main_main_focused, LV_PART_MAIN|LV_STATE_FOCUSED);

	//Write style state: LV_STATE_DISABLED for &style_calendar_calendar_view_main_main_disabled
	static lv_style_t style_calendar_calendar_view_main_main_disabled;
	ui_init_style(&style_calendar_calendar_view_main_main_disabled);
	
	lv_style_set_border_width(&style_calendar_calendar_view_main_main_disabled, 0);
	lv_style_set_bg_opa(&style_calendar_calendar_view_main_main_disabled, 0);
	lv_style_set_shadow_width(&style_calendar_calendar_view_main_main_disabled, 0);
	lv_style_set_radius(&style_calendar_calendar_view_main_main_disabled, 15);
	lv_obj_add_style(ui->calendar_calendar_view, &style_calendar_calendar_view_main_main_disabled, LV_PART_MAIN|LV_STATE_DISABLED);

	//Write style state: LV_STATE_DEFAULT for &style_calendar_calendar_view_extra_header_main_default
	static lv_style_t style_calendar_calendar_view_extra_header_main_default;
	ui_init_style(&style_calendar_calendar_view_extra_header_main_default);
	
	lv_style_set_text_color(&style_calendar_calendar_view_extra_header_main_default, lv_color_hex(0xffffff));
	lv_style_set_text_font(&style_calendar_calendar_view_extra_header_main_default, &lv_font_Apple_16);
	lv_style_set_text_opa(&style_calendar_calendar_view_extra_header_main_default, 255);
	lv_style_set_bg_opa(&style_calendar_calendar_view_extra_header_main_default, 0);
	lv_obj_add_style(calendar_calendar_view_header, &style_calendar_calendar_view_extra_header_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_calendar_calendar_view_main_items_default
	static lv_style_t style_calendar_calendar_view_main_items_default;
	ui_init_style(&style_calendar_calendar_view_main_items_default);
	
	lv_style_set_bg_opa(&style_calendar_calendar_view_main_items_default, 0);
	lv_style_set_border_width(&style_calendar_calendar_view_main_items_default, 2);
	lv_style_set_border_opa(&style_calendar_calendar_view_main_items_default, 255);
	lv_style_set_border_color(&style_calendar_calendar_view_main_items_default, lv_color_hex(0xc0c0c0));
	lv_style_set_border_side(&style_calendar_calendar_view_main_items_default, LV_BORDER_SIDE_BOTTOM);
	lv_style_set_text_color(&style_calendar_calendar_view_main_items_default, lv_color_hex(0x8d8d8d));
	lv_style_set_text_font(&style_calendar_calendar_view_main_items_default, &lv_font_Apple_12);
	lv_style_set_text_opa(&style_calendar_calendar_view_main_items_default, 255);
	lv_obj_add_style(lv_calendar_get_btnmatrix(ui->calendar_calendar_view), &style_calendar_calendar_view_main_items_default, LV_PART_ITEMS|LV_STATE_DEFAULT);

	//Write codes calendar_calendar_title_label
	ui->calendar_calendar_title_label = lv_label_create(ui->calendar_calendar_frame);
	lv_label_set_text(ui->calendar_calendar_title_label, "日历");
	lv_label_set_long_mode(ui->calendar_calendar_title_label, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->calendar_calendar_title_label, 70, -20);
	lv_obj_set_size(ui->calendar_calendar_title_label, 100, 24);

	//Write style for calendar_calendar_title_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->calendar_calendar_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->calendar_calendar_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->calendar_calendar_title_label, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->calendar_calendar_title_label, &lv_font_Apple_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->calendar_calendar_title_label, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->calendar_calendar_title_label, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->calendar_calendar_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->calendar_calendar_title_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->calendar_calendar_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->calendar_calendar_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->calendar_calendar_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->calendar_calendar_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->calendar_calendar_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->calendar_calendar_title_label, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of calendar.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->calendar);

	//Init events for screen.
	events_init_calendar(ui);
}
