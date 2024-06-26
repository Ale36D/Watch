#ifndef NTIME_H
#define NTIME_H

#include "time.h"
#include "WiFi.h"
extern String _datastr;
extern String _timestr;
extern String _weekstr;
extern char DataString[12]; // 创建一个足够大的字符数组来保存时间字符串
extern char timeString[10];
extern char WeekString[10];

extern uint16_t time_year;
extern uint8_t time_month;
extern uint8_t time_day;
extern uint8_t time_hour;

/// @brief 0 为 AM || 1 为 PM
extern uint8_t _time_flag;
uint8_t GetTime(void);
#ifdef __cplusplus
extern "C"
{
#endif

#ifdef __cplusplus
}
#endif
#endif