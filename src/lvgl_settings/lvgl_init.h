
#ifndef __LVGL_INIT_H__
#define __LVGL_INIT_H__
#include "Arduino.h"
#include <lvgl.h>
#include <TFT_eSPI.h>
#include <esp_heap_caps.h>
#include "CST816T.h"
enum Screen_Orientation
{
  _0_Degree = 0,
  _90_Degree,
  _180_Degree,
  _270_Degree
};

void Init(void (*Application)(), uint8_t Src_orientation);
void memory(void);

#endif