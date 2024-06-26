#include "RgbAnim.h"
static CRGB leds[NUM_LEDS];
void rgbInitAnimation(void)
{
  FastLED.addLeds<WS2812, DATA_PIN, GRB>(leds, NUM_LEDS);
  fill_solid(leds, NUM_LEDS, CRGB::Black);
  FastLED.show();
}
uint16_t var = 0;
void rgbSpectrumAnimation(uint8_t value, uint8_t index)
{
  var = value > 100 ? 100 : value;
  var = map(var / (index + 1), 0, 100, 1, 20);
  FastLED.show();
}
uint16_t volume[32];
uint8_t flag = 0;
void drawBar(uint8_t value, uint8_t index) // 绘制函数，按序号和幅度值绘制条形块
{
  // fill_rainbow(leds, NUM_LEDS, 0, 20);
  constrain(value, 0, 8);    // 幅度限制在0-8范围内
  if (volume[index] < value) // 采集到的数据比之前大则更新，实现上冲效果
    volume[index] = value;
  for (int i = volume[index]; i < 8; i++)
  {
    // leds[i] = CRGB::Black;
  }
  volume[index] -= 1;
}
void turnOffLEDLights(void)
{
  fill_solid(leds, NUM_LEDS, CRGB::Black);
  FastLED.show();
}
void showFastLEDAnim()
{
}
void setRGB(uint8_t brightness, uint8_t red, uint8_t green, uint8_t blue)
{
  fill_solid(leds, NUM_LEDS, CRGB(red, green, blue));
  FastLED.setBrightness(brightness);
  FastLED.show();
}
void setRgbBrightness(uint8_t brightness)
{
  FastLED.setBrightness(brightness);
  FastLED.show();
}
static uint8_t hue = 0;
void rainbow(void)
{
  fill_rainbow(leds, NUM_LEDS, hue, 7); // 渐变色彩
  hue++;
  FastLED.show();
}
