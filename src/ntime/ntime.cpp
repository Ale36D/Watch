#include "ntime.h"
#define NTP3 "ntp4.ntsc.ac.cn"
#define NTP2 "ntp3.ict.ac.cn"
#define NTP1 "ntp2.aliyun.com"
const long gmtOffset_sec = 8 * 3600;
const int daylightOffset_sec = 0;

String _datastr = "2023-12-17";
String _timestr = "11:11";
String _weekstr = "Sun";

uint16_t time_year = 2024;
uint8_t time_month = 4;
uint8_t time_day = 13;
uint8_t time_hour = 8;

uint8_t _time_flag = 0;
// 创建一个足够大的字符数组来保存时间字符串
char DataString[12];
char timeString[10];
char WeekString[10];

struct tm timeinfo;
uint8_t GetTime(void)
{
  if (WiFi.status() == WL_CONNECTED)
  {
    configTime(gmtOffset_sec, daylightOffset_sec, NTP1, NTP2, NTP3);
    if (!getLocalTime(&timeinfo))
    {
      return 0;
    }
    memset(timeString, '\0', 10);
    memset(DataString, '\0', 12);

    time_hour = timeinfo.tm_hour;
    sprintf(timeString, "%02d:%02d", timeinfo.tm_hour, timeinfo.tm_min);
    sprintf(DataString, "%04d-%02d-%02d", timeinfo.tm_year + 1900, timeinfo.tm_mon + 1, timeinfo.tm_mday);
    uint8_t weekDayIndex = timeinfo.tm_wday;
    String weekDays[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    strcpy(WeekString, weekDays[weekDayIndex].c_str());
    timeinfo.tm_hour > 12 ? (_time_flag = 1) : (_time_flag = 0);
    _datastr = DataString;
    _timestr = timeString;
    _weekstr = WeekString;
    return 1;
  }
  else
  {
    return 2;
  }
}