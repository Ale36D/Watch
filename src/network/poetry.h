#ifndef __POETRY_H__
#define __POETRY_H__
#include "http.h"

extern String poetry_str;
extern String origin_str;
extern String author_str;

extern String sentence_str;

extern String english_word_str;
extern String english_chinese_word_str;

uint8_t Get_Hitokoto(void);
uint8_t Get_Sentence(void);
uint8_t Get_EnglishWord(void);

#ifdef __cplusplus
extern "C"
{
#endif

#ifdef __cplusplus
}
#endif
#endif