#include "weather.h"

HTTPClient getNowWeatherInfo_client;
HTTPClient getNextThreeDaysWeatherInfo_client;
HTTPClient getObtainWeatherLifeIndexInfo_client;

String weather_name = "菏泽";
String weather_info = "晴";
String weather_code = "0";
String weather_temperature = "30";
String threeWeatherDate[3];

StaticJsonDocument<2024>
    doc;

/*
 * 现在天气获取链接->http://api.seniverse.com/v3/weather/now.json?key=SyZvqn30cUHlDqcRq&location=heze&language=zh-Hans&unit=c
 * 获取当前的天气状况
 */
uint8_t getNowWeatherInfo()
{
  if (WiFi.status() == WL_CONNECTED)
  {
    getNowWeatherInfo_client.begin("http://api.seniverse.com/v3/weather/now.json?key=SyZvqn30cUHlDqcRq&location=heze&language=zh-Hans&unit=c");
    String pageData;
    int httpCode = getNowWeatherInfo_client.GET();
    if (httpCode == HTTP_CODE_OK)
    {
      pageData = getNowWeatherInfo_client.getString();
      getNowWeatherInfo_client.end();
#ifdef WEA_LOG
      Serial.println(pageData);
#endif
    }
    else
    {
      return 0;
    }

    DeserializationError error = deserializeJson(doc, pageData);

    if (error)
    {
      return 2;
    }

    JsonObject results_0 = doc["results"][0];

    JsonObject results_0_location = results_0["location"];
    const char *results_0_location_name = results_0_location["name"]; // "菏泽"

    JsonObject results_0_now = results_0["now"];
    const char *results_0_now_text = results_0_now["text"];               // "阴"
    const char *results_0_now_code = results_0_now["code"];               // "9"
    const char *results_0_now_temperature = results_0_now["temperature"]; // "2"

    weather_info = results_0_now_text;
    weather_code = results_0_now_code;
    weather_temperature = results_0_now_temperature;
    weather_name = results_0_location_name;
    return 1;
  }
  else
  {
    return 3;
  }
}
// 最高温
String threeWeatherTempHighDate[3] = {"", "", ""};
// 最低温
String threeWeatherTempLowDate[3] = {"", "", ""};
// 三天天气
String threeWeatherTextDaysDate[3] = {"", "", ""};
// 三天天气代码
String threeWeatherCodeDaysDate[3] = {"", "", ""};
// 湿度
String threeWeatherHumiDate[3] = {"", "", ""};
// 风速
String threeWeatherWindSpeedDate[3] = {"", "", ""};
// 风等级
String threeWeatherWindScaleDate[3] = {"", "", ""};
// 风角度
String threeWeatherwindDirectionDegreeDate[3] = {"", "", ""};
// 降雨量
String threeWeatherRainfallDate[3] = {"", "", ""};
// 降雨概率
String threeWeatherPrecipDate[3] = {"", "", ""};

String weather_update_time = "";
/*
 * 未来3天天气获取链接->https://api.seniverse.com/v3/weather/daily.json?key=SyZvqn30cUHlDqcRq&location=heze&language=zh-Hans&unit=c&start=0&days=3
 * 获取未来三天的天气状况
 */
uint8_t
getNextThreeDaysWeatherInfo()
{
  if (WiFi.status() == WL_CONNECTED)
  {
    getNextThreeDaysWeatherInfo_client.begin("http://api.seniverse.com/v3/weather/daily.json?key=SyZvqn30cUHlDqcRq&location=heze&language=zh-Hans&unit=c&start=0&days=3");
    String pageData;
    int httpCode = getNextThreeDaysWeatherInfo_client.GET();
    if (httpCode == HTTP_CODE_OK)
    {
      pageData = getNextThreeDaysWeatherInfo_client.getString();
      getNextThreeDaysWeatherInfo_client.end();
#ifdef WEA_LOG
      Serial.println(pageData);
#endif
    }
    else
    {
      return 0;
    }

    DeserializationError error = deserializeJson(doc, pageData);

    if (error)
    {
      return 2;
    }
    JsonObject results_0 = doc["results"][0];
    JsonObject results_0_location = results_0["location"];
    uint8_t dateIndex = 0;
    for (JsonObject results_0_daily_item : results_0["daily"].as<JsonArray>())
    {
      threeWeatherTextDaysDate[dateIndex] = results_0_daily_item["text_day"].as<String>(); // "晴", "多云", "多云"
      threeWeatherCodeDaysDate[dateIndex] = results_0_daily_item["code_day"].as<String>(); // "0", "4", "4"
      threeWeatherTempHighDate[dateIndex] = results_0_daily_item["high"].as<String>();     // "36", "35", "29"
      threeWeatherTempLowDate[dateIndex] = results_0_daily_item["low"].as<String>();       // "23", "21", "19"
      threeWeatherRainfallDate[dateIndex] = results_0_daily_item["rainfall"].as<String>(); // "0.00", "0.18", "0.00"
      threeWeatherPrecipDate[dateIndex] = results_0_daily_item["precip"].as<String>();     // "0.00", "0.47", "0.00"
      threeWeatherwindDirectionDegreeDate[dateIndex] = results_0_daily_item["wind_direction_degree"].as<String>();
      threeWeatherWindSpeedDate[dateIndex] = results_0_daily_item["wind_speed"].as<String>(); // "8.4", "8.4", "3.0"
      threeWeatherWindScaleDate[dateIndex] = results_0_daily_item["wind_scale"].as<String>(); // "2", "2", "1"
      threeWeatherHumiDate[dateIndex] = results_0_daily_item["humidity"].as<String>();        // "58", "55", "60"
      dateIndex++;
    }
    weather_update_time = results_0["last_update"].as<String>().substring(0, 10); // "2024-05-18T08:00:00+08:00"
    return 1;
  }
  else
  {
    return 3;
  }
}
/*
 * 获取今天的生活指数链接->https://api.seniverse.com/v3/life/suggestion.json?key=SyZvqn30cUHlDqcRq&location=shanghai&language=zh-Hans&days=1
 * 获取今天的生活指数
 */
uint8_t getObtainWeatherLifeIndexInfo()
{
  if (WiFi.status() == WL_CONNECTED)
  {
    getObtainWeatherLifeIndexInfo_client.begin("http://api.seniverse.com/v3/life/suggestion.json?key=SyZvqn30cUHlDqcRq&location=heze&language=zh-Hans&days=1");
    String pageData;
    int httpCode = getObtainWeatherLifeIndexInfo_client.GET();
    if (httpCode == HTTP_CODE_OK)
    {
      pageData = getObtainWeatherLifeIndexInfo_client.getString();
      getNextThreeDaysWeatherInfo_client.end();
    }
    else
    {
      return 0;
    }

    DeserializationError error = deserializeJson(doc, pageData);

    if (error)
    {
      return 2;
    }
    JsonObject results_0 = doc["results"][0];

    JsonObject results_0_suggestion_0 = results_0["suggestion"][0];
    const char *results_0_suggestion_0_date = results_0_suggestion_0["date"]; // "2024-05-18"

    const char *results_0_suggestion_0_ac_brief = results_0_suggestion_0["ac"]["brief"]; // "较少开启"
    const char *results_0_suggestion_0_ac_details = results_0_suggestion_0["ac"]["details"];

    const char *results_0_suggestion_0_air_pollution_brief = results_0_suggestion_0["air_pollution"]["brief"];
    const char *results_0_suggestion_0_air_pollution_details = results_0_suggestion_0["air_pollution"]["details"];

    const char *results_0_suggestion_0_airing_brief = results_0_suggestion_0["airing"]["brief"]; // "极适宜"
    const char *results_0_suggestion_0_airing_details = results_0_suggestion_0["airing"]["details"];

    const char *results_0_suggestion_0_allergy_brief = results_0_suggestion_0["allergy"]["brief"]; // "易发"
    const char *results_0_suggestion_0_allergy_details = results_0_suggestion_0["allergy"]["details"];

    const char *results_0_suggestion_0_beer_brief = results_0_suggestion_0["beer"]["brief"]; // "适宜"
    const char *results_0_suggestion_0_beer_details = results_0_suggestion_0["beer"]["details"];

    const char *results_0_suggestion_0_boating_brief = results_0_suggestion_0["boating"]["brief"]; // "较适宜"
    const char *results_0_suggestion_0_boating_details = results_0_suggestion_0["boating"]["details"];

    const char *results_0_suggestion_0_car_washing_brief = results_0_suggestion_0["car_washing"]["brief"];
    const char *results_0_suggestion_0_car_washing_details = results_0_suggestion_0["car_washing"]["details"];

    const char *results_0_suggestion_0_comfort_brief = results_0_suggestion_0["comfort"]["brief"]; // "较舒适"
    const char *results_0_suggestion_0_comfort_details = results_0_suggestion_0["comfort"]["details"];

    const char *results_0_suggestion_0_dressing_brief = results_0_suggestion_0["dressing"]["brief"]; // "热"
    const char *results_0_suggestion_0_dressing_details = results_0_suggestion_0["dressing"]["details"];

    const char *results_0_suggestion_0_fishing_brief = results_0_suggestion_0["fishing"]["brief"]; // "较适宜"
    const char *results_0_suggestion_0_fishing_details = results_0_suggestion_0["fishing"]["details"];

    const char *results_0_suggestion_0_flu_brief = results_0_suggestion_0["flu"]["brief"]; // "少发"
    const char *results_0_suggestion_0_flu_details = results_0_suggestion_0["flu"]["details"];

    const char *results_0_suggestion_0_kiteflying_brief = results_0_suggestion_0["kiteflying"]["brief"];
    const char *results_0_suggestion_0_kiteflying_details = results_0_suggestion_0["kiteflying"]["details"];

    const char *results_0_suggestion_0_makeup_brief = results_0_suggestion_0["makeup"]["brief"]; // "去油防晒"
    const char *results_0_suggestion_0_makeup_details = results_0_suggestion_0["makeup"]["details"];

    const char *results_0_suggestion_0_mood_brief = results_0_suggestion_0["mood"]["brief"]; // "好"
    const char *results_0_suggestion_0_mood_details = results_0_suggestion_0["mood"]["details"];

    const char *results_0_suggestion_0_morning_sport_brief = results_0_suggestion_0["morning_sport"]["brief"];
    const char *results_0_suggestion_0_morning_sport_details = results_0_suggestion_0["morning_sport"]["details"];

    const char *results_0_suggestion_0_road_condition_brief = results_0_suggestion_0["road_condition"]["brief"];
    const char *results_0_suggestion_0_road_condition_details = results_0_suggestion_0["road_condition"]["details"];

    const char *results_0_suggestion_0_shopping_brief = results_0_suggestion_0["shopping"]["brief"];
    const char *results_0_suggestion_0_shopping_details = results_0_suggestion_0["shopping"]["details"];

    const char *results_0_suggestion_0_sport_brief = results_0_suggestion_0["sport"]["brief"]; // "较适宜"
    const char *results_0_suggestion_0_sport_details = results_0_suggestion_0["sport"]["details"];

    const char *results_0_suggestion_0_sunscreen_brief = results_0_suggestion_0["sunscreen"]["brief"];
    const char *results_0_suggestion_0_sunscreen_details = results_0_suggestion_0["sunscreen"]["details"];

    const char *results_0_suggestion_0_traffic_brief = results_0_suggestion_0["traffic"]["brief"]; // "良好"
    const char *results_0_suggestion_0_traffic_details = results_0_suggestion_0["traffic"]["details"];

    const char *results_0_suggestion_0_umbrella_brief = results_0_suggestion_0["umbrella"]["brief"];
    const char *results_0_suggestion_0_umbrella_details = results_0_suggestion_0["umbrella"]["details"];

    const char *results_0_suggestion_0_uv_brief = results_0_suggestion_0["uv"]["brief"]; // "强"
    const char *results_0_suggestion_0_uv_details = results_0_suggestion_0["uv"]["details"];

    return 1;
  }
  else
  {
    return 3;
  }
}