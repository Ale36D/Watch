#ifndef __FFT_H__
#define __FFT_H__

#include "Arduino.h"
#include "arduinoFFT.h"

#define SCL_INDEX 0x00
#define SCL_TIME 0x01
#define SCL_FREQUENCY 0x02
#define SCL_PLOT 0x03

typedef void (*barValueSetFunction)(uint8_t value, uint8_t index);
typedef void (*ProcessingFFTSignalDisplay)(barValueSetFunction barValuefuntion, uint8_t band);
typedef struct
{
  barValueSetFunction barValuefuntion;
  ProcessingFFTSignalDisplay processingFFTSignaldisplay;
} barValueUpdateFuntion;

extern barValueUpdateFuntion barUpdateValueInfo;
void fftInit(barValueUpdateFuntion *barUpdateValue, barValueSetFunction barValuefuntion, ProcessingFFTSignalDisplay processingFFTSignaldisplay);
void updateFFTSignalDisplay(barValueSetFunction barValuefuntion, uint8_t band);
void getObtainSpectrumData(barValueUpdateFuntion *updateValue);
void showDisplay(void (*barValueSetFunction)(uint8_t value, uint8_t index), uint8_t num);
#ifdef __cplusplus
extern "C"
{
#endif

#ifdef __cplusplus
}
#endif
#endif