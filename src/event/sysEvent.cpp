#include "event.h"

GetNetWorkDateFlag dateflag;
void sendgetNetWorkSendThreadSignal(bool getflag)
{
  dateflag.GetFlag = getflag;
  xQueueSend(getNetWorkQueue, &dateflag, 1500);
}
NoticeDate date;
TickType_t timeout = 1000;
void showThreadNoticeFrame(const char *title, const char *str, ...)
{
  char buffer[256];
  va_list args;
  va_start(args, str);
  vsnprintf(buffer, sizeof(buffer), str, args);
  va_end(args);
  strcpy(date.noticeTitle, title);
  strcpy(date.noticeMessage, buffer);
  xQueueSend(noticeQueue, &date, timeout);
}
void sendOpenBuzzerVoiceThreadSignal(bool open, bool voice)
{
  openBuzzerFlag buzzerflag;
  buzzerflag.buzzerOpenFlag = open;
  buzzerflag.openBuzeerVoice = voice;
  buzzerflag.buzzerMusicFlag = false;
  xQueueSend(buzzerOpenQueue, &buzzerflag, timeout);
}
SmartConfigWifiFlag configFlag;
void sendSmartConfigWiFiThreadSignal(bool open)
{
  configFlag.SmartConfigWifiFlag = open;
  xQueueSend(smartConfigWifiQueue, &configFlag, timeout);
}
fftMusicFlag musicFlag;
void sendFftMusicThreadSignal(bool open)
{
  musicFlag.fftMusicEnabled = open;
  xQueueSend(fftMusicQueue, &musicFlag, timeout);
}
blueTools bluetools;
void sendBlueToolsThreadSignal(uint8_t value)
{
  bluetools.blueToolsKeyValue = value;
  xQueueSend(blueToolsQueue, &bluetools, timeout);
}
SensorGetFlag sensorflag;
void sendSensorGetDataThreadSignal(bool open)
{
  sensorflag.sensorFlag = open;
  xQueueSend(SensorQueue, &sensorflag, timeout);
}
getNetWorkTimeFlag networkflag;
void sendGetNetWorkTimeThreadSignal(bool open)
{
  networkflag.getNetWorkTimeFlag = open;
  xQueueSend(getNetWorkTimeQueue, &networkflag, timeout);
}
setRgbModeFlag rgbModeflag;
void sendSetRgbModeThreadSignal(bool open, bool isCreateNewThread, uint8_t Mode_ID, uint8_t RValue, uint8_t GValue, uint8_t BValue, uint8_t LightValue)
{
  rgbModeflag.openFlag = open;
  rgbModeflag.isCreateNewThreadFlag = isCreateNewThread;
  rgbModeflag.Mode_ID = Mode_ID;
  rgbModeflag.RValue = RValue;
  rgbModeflag.GValue = GValue;
  rgbModeflag.BValue = BValue;
  rgbModeflag.LightValue = LightValue;
  xQueueSend(setRgbModeQueue, &rgbModeflag, timeout);
}
