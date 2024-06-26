#include "poetry.h"
HTTPClient poetry_http_client;
HTTPClient sentence_http_client;
HTTPClient english_http_client;

String poetry_str = "";
String origin_str = "";
String author_str = "";

String sentence_str = "";

String english_word_str = "";
String english_chinese_word_str = "";

uint8_t Get_Hitokoto(void)
{
  uint8_t code = 0;
  if (WiFi.status() == WL_CONNECTED)
  {
    poetry_http_client.begin("http://v1.jinrishici.com/all.json");
    String pageData;
    int httpCode = poetry_http_client.GET();
    if (httpCode == HTTP_CODE_OK)
    {
      pageData = poetry_http_client.getString();
      poetry_http_client.end();
    }
    else
    {
      code = 0;
    }
    StaticJsonDocument<192> doc;
    DeserializationError error = deserializeJson(doc, pageData);
    if (error)
      return 1;
    const char *content = doc["content"];
    const char *origin = doc["origin"];
    const char *author = doc["author"];
    const char *category = doc["category"];
    poetry_str = content;
    origin_str = origin;
    author_str = author;
    code = 2;
  }
  return code;
}
uint8_t Get_Sentence(void)
{
  uint8_t code = 0;
  if (WiFi.status() == WL_CONNECTED)
  {
    String str = "";
    sentence_http_client.begin("https://v1.hitokoto.cn/?c=f&encode=text");
    if (sentence_http_client.GET() == HTTP_CODE_OK)
    {
      str = sentence_http_client.getString();
      sentence_http_client.end();
      sentence_str = str;
      code = 1;
    }
    else
    {
      code = 2;
    }
  }
  return code;
}

uint8_t
Get_EnglishWord(void)
{
  english_http_client.begin("http://open.iciba.com/dsapi/");
  String pageData;
  int httpCode = english_http_client.GET();
  if (httpCode == HTTP_CODE_OK)
  {
    pageData = english_http_client.getString();
    Serial.println(pageData);
    english_http_client.end();
  }
  else
  {
    return 0;
  }
  StaticJsonDocument<1024> doc;
  DeserializationError error = deserializeJson(doc, pageData);

  if (error)
    return 1;

  const char *content = doc["content"]; // "Beauty lies in the love's eyes."
  const char *note = doc["note"];       // "情人眼里出西施。"

  english_word_str = content;
  english_chinese_word_str = note;

  Serial.println(english_word_str);
  Serial.println(english_chinese_word_str);

  return 2;
}
