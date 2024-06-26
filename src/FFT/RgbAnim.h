#ifndef __RGB_ANIM_H__
#define __RGB_ANIM_H__

#include "FastLed.h"

#define DATA_PIN 16
#define NUM_LEDS 4
void rgbInitAnimation(void);
void rgbSpectrumAnimation(uint8_t value, uint8_t index);
void drawBar(uint8_t value, uint8_t index);
void turnOffLEDLights(void);
void showFastLEDAnim(void);
void setRGB(uint8_t brightness, uint8_t red, uint8_t green, uint8_t blue);
void setRgbBrightness(uint8_t brightness);
void rainbow(void);

#endif