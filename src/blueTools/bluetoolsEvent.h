#ifndef __BLUETOOLSEVENT_H__
#define __BLUETOOLSEVENT_H__

#include "Arduino.h"
#include <BleKeyboard.h>

#define BLUETOOLSDEVNAME "Ale"
#define BLUETOOLSDEVMANUFACTURER "Bigle"
#define BLUETOOLSDEVBATTERYLEVEL 100
class BlueToolsEvent
{
public:
  void BlueInit(void);
  void BlueToolsKeyEvent(uint8_t keyValue);
  bool BlueConnectFLAG(void);
};

#endif