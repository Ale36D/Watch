#include "event.h"

bool notice_frame_now_show = false;

lv_obj_t *NoticeFrame = NULL;
static lv_obj_t *notice_title_label;
static lv_obj_t *notice_img_label;
static lv_obj_t *notice_label;
static lv_obj_t *notice_parent_src;
void createNoticeFrame(const char *title, const char *message)
{

  // Write codes notice_notice_frame
  NoticeFrame = lv_obj_create(lv_scr_act());
  lv_obj_set_pos(NoticeFrame, 10, NoticeTopPos_Y);
  lv_obj_set_size(NoticeFrame, Notice_Width, Notice_Begin_Height);
  lv_obj_set_scrollbar_mode(NoticeFrame, LV_SCROLLBAR_MODE_OFF);

  // Write style for notice_notice_frame, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
  lv_obj_set_style_border_width(NoticeFrame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_radius(NoticeFrame, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_bg_opa(NoticeFrame, 218, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_bg_color(NoticeFrame, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_bg_grad_dir(NoticeFrame, LV_GRAD_DIR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_pad_top(NoticeFrame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_pad_bottom(NoticeFrame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_pad_left(NoticeFrame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_pad_right(NoticeFrame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_shadow_width(NoticeFrame, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_shadow_color(NoticeFrame, lv_color_hex(0x576574), LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_shadow_opa(NoticeFrame, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_shadow_spread(NoticeFrame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_shadow_ofs_x(NoticeFrame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_shadow_ofs_y(NoticeFrame, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

  // Write codes notice_notice_title_label
  lv_obj_t *notice_notice_title_label = lv_label_create(NoticeFrame);
  lv_label_set_text(notice_notice_title_label, "Message");
  lv_label_set_long_mode(notice_notice_title_label, LV_LABEL_LONG_WRAP);
  lv_obj_set_pos(notice_notice_title_label, 10, 10);
  lv_obj_set_size(notice_notice_title_label, 200, 18);

  // Write style for notice_notice_title_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
  lv_obj_set_style_border_width(notice_notice_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_radius(notice_notice_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_text_color(notice_notice_title_label, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_text_font(notice_notice_title_label, &lv_customer_font_Apple_16, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_text_opa(notice_notice_title_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_text_letter_space(notice_notice_title_label, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_text_line_space(notice_notice_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_text_align(notice_notice_title_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_bg_opa(notice_notice_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_pad_top(notice_notice_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_pad_right(notice_notice_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_pad_bottom(notice_notice_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_pad_left(notice_notice_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_shadow_width(notice_notice_title_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

  // Write codes notice_img_label
  lv_obj_t *notice_img_label = lv_label_create(NoticeFrame);
  lv_label_set_text(notice_img_label, "" LV_SYMBOL_BELL "");
  lv_label_set_long_mode(notice_img_label, LV_LABEL_LONG_DOT);
  lv_obj_set_pos(notice_img_label, 10, 10);
  lv_obj_set_size(notice_img_label, 16, 16);

  // Write style for notice_img_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
  lv_obj_set_style_border_width(notice_img_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_radius(notice_img_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_text_color(notice_img_label, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_text_font(notice_img_label, &lv_font_Apple_16, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_text_opa(notice_img_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_text_letter_space(notice_img_label, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_text_line_space(notice_img_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_text_align(notice_img_label, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_bg_opa(notice_img_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_pad_top(notice_img_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_pad_right(notice_img_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_pad_bottom(notice_img_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_pad_left(notice_img_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_shadow_width(notice_img_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

  // Write codes notice_notice_img
  lv_obj_t *notice_img = lv_img_create(NoticeFrame);
  lv_obj_add_flag(notice_img, LV_OBJ_FLAG_CLICKABLE);
  lv_img_set_src(notice_img, &_message_3_alpha_48x48);
  lv_img_set_pivot(notice_img, 50, 50);
  lv_img_set_angle(notice_img, 0);
  lv_obj_set_pos(notice_img, 86, 45);
  lv_obj_set_size(notice_img, 48, 48);

  // Write style for notice_notice_img, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
  lv_obj_set_style_img_opa(notice_img, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

  // Write codes notice_notice_label
  lv_obj_t *notice_notice_label = lv_label_create(NoticeFrame);
  lv_label_set_text(notice_notice_label, "通知内容");
  lv_label_set_long_mode(notice_notice_label, LV_LABEL_LONG_WRAP);
  lv_obj_set_pos(notice_notice_label, 9, 40);
  lv_obj_set_size(notice_notice_label, 200, 60);

  // Write style for notice_notice_label, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
  lv_obj_set_style_border_width(notice_notice_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_radius(notice_notice_label, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_text_color(notice_notice_label, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_text_font(notice_notice_label, &lv_customer_font_Apple_16, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_text_opa(notice_notice_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_text_letter_space(notice_notice_label, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_text_line_space(notice_notice_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_text_align(notice_notice_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_bg_opa(notice_notice_label, 129, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_bg_color(notice_notice_label, lv_color_hex(0xdcdde1), LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_bg_grad_dir(notice_notice_label, LV_GRAD_DIR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_pad_top(notice_notice_label, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_pad_right(notice_notice_label, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_pad_bottom(notice_notice_label, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_pad_left(notice_notice_label, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_shadow_width(notice_notice_label, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_shadow_color(notice_notice_label, lv_color_hex(0x576574), LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_shadow_opa(notice_notice_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_shadow_spread(notice_notice_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_shadow_ofs_x(notice_notice_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_shadow_ofs_y(notice_notice_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

  notice_title_label = notice_notice_title_label;
  notice_img_label = notice_img;
  notice_label = notice_notice_label;
  // notice_NoticeFrame_now_show = true;
}
void finish_NoticeFrame(struct _lv_anim_t *anim)
{
  lv_obj_set_height(NoticeFrame, Notice_Begin_Height);
#ifdef LOG
  Serial.println("完成动画");
#endif
}
void _del_NoticeFrame(struct _lv_anim_t *anim)
{
#ifdef LOG
  Serial.println("删除动画");
#endif
}
void _return_anim_callback(struct _lv_anim_t *anim)
{
  ui_move_animation(NoticeFrame, 500, 2000, NOTICE_FRAME_LEFT, NoticeTopPos_Y, &lv_anim_path_bounce, 0, 0, 0, 0, NULL, NULL, NULL);
}
// 通知是否使能标志
bool loadSrcFlag = false;
/**
 * @brief 创建通知栏
 *
 * @param pos_y 在屏幕上的显示位置
 * @param title 标题
 * @param str 显示内容
 * @param ... 可变参数
 */
void showNoticeStr(uint8_t pos_y, const char *title, const char *str, ...)
{
#ifdef LOG
  Serial.println("执行");
#endif
  if (loadSrcFlag != true)
  {
    char buffer[256];
    va_list args;
    va_start(args, str);
    vsnprintf(buffer, sizeof(buffer), str, args);
    va_end(args);

    if (!lv_obj_is_valid(NoticeFrame))
    {
#ifdef LOG
      Serial.println("创建通知");
#endif
      createNoticeFrame(title, buffer);
      ui_scale_animation(NoticeFrame, 500, 200, Notice_Width, Notice_Height, &lv_anim_path_overshoot, 0, 0, 0, 0, NULL, NULL, NULL);
    }
    else
    {
#ifdef LOG
      Serial.println("显示通知");
#endif
      lv_obj_set_parent(NoticeFrame, lv_scr_act());
      lv_label_set_text(notice_title_label, title);
      lv_label_set_text(notice_label, buffer);
      ui_scale_animation(NoticeFrame, 500, 200, Notice_Width, Notice_Height, &lv_anim_path_overshoot, 0, 0, 0, 0, NULL, NULL, NULL);
    }
    sendOpenBuzzerVoiceThreadSignal(buzzerVoiceEnabled, true);
    ui_move_animation(NoticeFrame, 500, 0, NOTICE_FRAME_LEFT, pos_y, &lv_anim_path_bounce, 0, 0, 0, 0, NULL, NULL, NULL);
  }
}