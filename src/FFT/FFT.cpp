#include "FFT.h"

// const double samplingFrequency = 10000; // Hz, 声音采样频率
// const uint16_t samples = 256;

// unsigned long microseconds;
// unsigned int sampling_period_us;

// double vReal[samples]; // FFT采样输入样本数组
// double vImag[samples]; // FFT运算输出数组

// int16_t vvalue; // fft后的值

// 节奏灯相关
#define SAMPLES 128
#define SAMPLING_FREQ 10000 // 采样频率
#define NUM_BANDS 16        // 频段个数
#define AUDIO_IN_PIN 5      // 拾音器
#define NOISE 2500          // 噪音
#define AMPLITUDE 500       // 声音强度调整倍率（柱状高度倍率）
#define MATRIX_SIDE 100     // 每个矩阵的边长
#define MATRIX_WIDTH 32     // 矩阵总宽度

unsigned int sampling_period_us; // 采样周期
byte peak[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int oldBarHeights[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int bandValues[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
double vReal[SAMPLES];
double vImag[SAMPLES];
unsigned long starTime;
unsigned long peekDecayTime;
unsigned long changeColorTime;
int colorTime;

ArduinoFFT<double> FFT = ArduinoFFT<double>(vReal, vImag, SAMPLES, SAMPLING_FREQ, true);
barValueUpdateFuntion barUpdateValueInfo;
void fftInit(barValueUpdateFuntion *barUpdateValue, barValueSetFunction barValuefuntion, ProcessingFFTSignalDisplay display)
{
  sampling_period_us = round(1000000 * (1.0 / SAMPLING_FREQ));
  pinMode(AUDIO_IN_PIN, INPUT);
  barUpdateValue->barValuefuntion = barValuefuntion;
  barUpdateValue->processingFFTSignaldisplay = display;
}
/***
 * @brief 滤波
 * @param int i 索引值
 * @param int min 滤波起始位置
 * @param int max 滤波终止位置
 * @param int Multiplier 滤波倍率
 * @return int 数组的索引值
 */
int calculate_band_index(int i, int min, int max, int Multiplier)
{
  if (i >= min && i <= max)
  {
    return (i - min) / Multiplier;
  }
  else
  {
    return -1; // 处理超出范围的情况
  }
}
void getObtainSpectrumData(barValueUpdateFuntion *updateValue)
{
  // 重置频率块的值
  for (int i = 0; i < NUM_BANDS; i++)
  {
    bandValues[i] = 0;
  }
  // 采样SAMPLES次
  for (int i = 0; i < SAMPLES; i++)
  {
    starTime = micros();
    vReal[i] = analogRead(AUDIO_IN_PIN);
    vImag[i] = 0;
    // Serial.println(micros() - starTime);
    while ((micros() - starTime) < sampling_period_us)
    { /* chill */
    }
  }
  // 进行FFT计算
  FFT.dcRemoval();
  FFT.windowing(FFT_WIN_TYP_HAMMING, FFT_FORWARD);
  FFT.compute(FFT_FORWARD);
  FFT.complexToMagnitude();
  // 解析计算结果
  for (int i = 2; i < (SAMPLES / 2); i++)
  {
    if (vReal[i] > NOISE)
    {
      int index = calculate_band_index(i, 0, (SAMPLES / 2), 4);
      if (index != -1)
      {
        bandValues[index] += (int)vReal[i];
      }
    }
  }
  // 将FFT数据处理为条形高度
  for (byte band = 0; band < NUM_BANDS; band++)
  {
    updateValue->processingFFTSignaldisplay(updateValue->barValuefuntion, band);
  }
}
// uint16_t fft_adc_value = 0;
// void getObtainSpectrumData(void)
// {
//   /*采样*/
//   microseconds = micros();
//   for (int i = 0; i < samples; i++)
//   {
//     vReal[i] = analogRead(AnalogPINS); // 读取模拟值，信号采样
//     vImag[i] = 0;
//     while (micros() - microseconds < sampling_period_us)
//       ;
//     microseconds += sampling_period_us;
//   }
//   FFT.windowing(vReal, samples, FFT_WIN_TYP_HAMMING, FFT_FORWARD);
//   FFT.compute(vReal, vImag, samples, FFT_FORWARD);
//   FFT.complexToMagnitude(vReal, vImag, samples);
// }
/**
 * @brief 进度条位置更新函数
 *
 * @param barValueSetFunction 单个进度条更新函数
 * @param band 更新进度条的索引值
 */
void updateFFTSignalDisplay(barValueSetFunction barValuefuntion, uint8_t band)
{
  // 根据倍率缩放条形图高度
  int barHeight = bandValues[band] / AMPLITUDE;
  if (barHeight > MATRIX_SIDE)
    barHeight = MATRIX_SIDE;
  // 旧的高度值和新的高度值平均一下
  barHeight = ((oldBarHeights[band] * 1) + barHeight) / 2;
  if (barHeight > 100)
  {
    barHeight = 100;
  }
  barValuefuntion(barHeight, band);
  // 将值记录到oldBarHeights
  oldBarHeights[band] = barHeight;
}
// void showDisplay(void (*barValueSetFunction)(uint8_t value, uint8_t index), uint8_t num)
// {
//   const int numBlocks = num;
//   int weightedAverages[numBlocks];
//   const int blockSize = samples / numBlocks;
//   for (int block = 0; block < numBlocks; ++block)
//   {
//     int sum = 0;
//     // 对当前区块的数据进行求和
//     for (int i = block * blockSize; i < (block + 1) * blockSize; ++i)
//     {
//       sum += vImag[i];
//     }
//     // 计算当前区块的加权平均值
//     weightedAverages[block] = sum / blockSize;
//   }
//   for (int i = 0; i < num; i++)
//   {
//     // barValueSetFunction(, i);
//   }
// }