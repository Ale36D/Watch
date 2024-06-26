#ifndef __RTOS_TASK_H__
#define __RTOS_TASK_H__

#include "lvgl_settings\lvgl_init.h"
#include "WiFi.h"
#include "ntime\ntime.h"
#include "network\http.h"
#include <Adafruit_Sensor.h>
#include <DHT.h>
#include "freertos\FreeRTOS.h"
#include "freertos\FreeRTOSConfig.h"
#include "task.h"
#include "event\event.h"
#include "FFT\FFT.h"
#include "FFT\RgbAnim.h"
#include "blueTools\blueToolsEvent.h"

class Task_Manager
{
public:
  void Task_init();
};

typedef struct
{
  char noticeTitle[50];
  char noticeMessage[100];
} NoticeDate;
typedef struct
{
  bool openBuzeerVoice;
  bool buzzerOpenFlag;
  bool buzzerMusicFlag;
} openBuzzerFlag;

typedef struct
{
  bool GetFlag;
} GetNetWorkDateFlag;
typedef struct
{
  bool SmartConfigWifiFlag;
} SmartConfigWifiFlag;
typedef struct
{
  bool fftMusicEnabled;
} fftMusicFlag;
typedef struct
{
  bool sensorFlag;
} SensorGetFlag;
typedef struct
{
  uint16_t nextDrinkWaterTime;
  uint16_t nextDrinkWaterCacheTime;
} drinkWater;
typedef struct
{
  uint16_t blueToolsOpenFlag;
  uint8_t blueToolsKeyValue;
} blueTools;
typedef struct
{
  bool getNetWorkTimeFlag;
} getNetWorkTimeFlag;
typedef struct
{
  bool openFlag;
  bool isCreateNewThreadFlag;
  uint8_t Mode_ID;
  uint8_t RValue;
  uint8_t GValue;
  uint8_t BValue;
  uint8_t LightValue;
} setRgbModeFlag;

#define BUZZER_PIN 9
#define WIFITASKOK (1 << 0)
#define WIFITASKNO (1 << 1)
#define NOTICETASK (1 << 2)

#define GetNowWeatherTASK (1 << 0)
#define GetThreeDaysWeatherTASK (1 << 1)

#define FFTMusicTASK (1 << 0)
// #define GETNETWORKONEONESENTENCE (1 << 2)

#define SmartConfigWiFiTASK (1 << 0)

extern TaskHandle_t lvgl_timer_task_handler;

extern EventBits_t wifiUxBits;
extern EventBits_t smartConfigWifiBits;
extern EventBits_t fftMusicBits;

extern EventGroupHandle_t smartConfigWifi;
extern EventGroupHandle_t fftMusicGroupHandle;

extern QueueHandle_t noticeQueue;
extern QueueHandle_t getNetWorkQueue;
extern QueueHandle_t buzzerOpenQueue;
extern QueueHandle_t smartConfigWifiQueue;
extern QueueHandle_t fftMusicQueue;
extern QueueHandle_t drinkWaterQueue;
extern QueueHandle_t blueToolsQueue;
extern QueueHandle_t SensorQueue;
extern QueueHandle_t getNetWorkTimeQueue;
extern QueueHandle_t setRgbModeQueue;

extern bool wifiConnectFLAG;
extern bool smartConfigFlag;
extern bool getNetworkDateFlag;

extern uint8_t weatherStateCode;
extern uint8_t getTimeCode;

extern uint16_t countdownToDrinkingWater;
extern uint16_t temp;

extern volatile float temperature;
extern volatile float humidity;

void lvglEventTask(void *ptr);
void lvglNoticeShowTask(void *ptr);
void wifiConnectTask(void *ptr);
void getNetworkTimeScheduler(void *ptr);
void getNetworkTimeTask(void *ptr);
void getNetWorkDateScheduler(void *ptr);
void getNowWeatherInfoTask(void *ptr);
void getNextThreeDaysWeatherInfoTask(void *ptr);
void smartConfigWifiScheduler(void *ptr);
void smartConfigTask(void *ptr);
void buzzerOpenTask(void *ptr);
void getSensorTask(void *ptr);
void fftComputeScheduler(void *ptr);
void fftComputeThreadTask(void *ptr);
void drinkWaterScheduler(void *ptr);
void drinkWaterTimerTask(void *ptr);
void blueToolsScheduler(void *ptr);
void blueToolsConnectTask(void *ptr);
void rgbComputeScheduler(void *ptr);
void rgbComputeThreadTask(void *ptr);
void taskListThreadTask(void *ptr);
#endif