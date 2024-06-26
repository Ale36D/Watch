#include "bluetoolsEvent.h"
BleKeyboard aleboard(BLUETOOLSDEVNAME, BLUETOOLSDEVMANUFACTURER, BLUETOOLSDEVBATTERYLEVEL);

void BlueToolsEvent::BlueInit(void)
{
  aleboard.begin();
}

void BlueToolsEvent::BlueToolsKeyEvent(uint8_t keyValue)
{

  switch (keyValue)
  {
  case 0x01:
    aleboard.write(KEY_MEDIA_PREVIOUS_TRACK);
    break;
  case 0x02:
    aleboard.write(KEY_MEDIA_STOP);
    break;
  case 0x03:
    aleboard.write(KEY_MEDIA_PLAY_PAUSE);
    break;
  case 0x04:
    aleboard.write(KEY_MEDIA_NEXT_TRACK);
    break;
  case 0x05:
    aleboard.write(KEY_MEDIA_VOLUME_DOWN);
    break;
  case 0x06:
    aleboard.write(KEY_MEDIA_CONSUMER_CONTROL_CONFIGURATION);
    break;
  case 0x07:
    aleboard.write(KEY_MEDIA_VOLUME_UP);
    break;
  case 0x08:
    aleboard.write(KEY_MEDIA_MUTE);
    break;
  case 0x09:
    aleboard.write(KEY_MEDIA_MUTE);
    break;
  case 0x0A:
    aleboard.write(KEY_MEDIA_LOCAL_MACHINE_BROWSER);
    break;
  case 0x0B:

    break;
  case 0x0C:

    break;
  case 0x0D:

    break;
  case 0x0E:

    break;
  case 0x0F:

    break;
  default:
    break;
  }
}
bool BlueToolsEvent::BlueConnectFLAG(void)
{
  return aleboard.isConnected();
}
