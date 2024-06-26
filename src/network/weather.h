#ifndef __WEATHER_H__
#define __WEATHER_H__
#include "http.h"
extern String weather_info;
extern String weather_code;
extern String weather_temperature;
extern String weather_name;
extern String weather_update_time;
// 最高温
extern String threeWeatherTempHighDate[3];
// 最低温
extern String threeWeatherTempLowDate[3];
// 三天天气
extern String threeWeatherTextDaysDate[3];
// 三天天气代码
extern String threeWeatherCodeDaysDate[3];
// 湿度
extern String threeWeatherHumiDate[3];
// 风速
extern String threeWeatherWindSpeedDate[3];
// 风等级
extern String threeWeatherWindScaleDate[3];
// 风角度
extern String threeWeatherwindDirectionDegreeDate[3];
// 降雨量
extern String threeWeatherRainfallDate[3];
// 降雨概率
extern String threeWeatherPrecipDate[3];

uint8_t getNowWeatherInfo(void);
uint8_t getNextThreeDaysWeatherInfo(void);
uint8_t getObtainWeatherLifeIndexInfo(void);

#endif