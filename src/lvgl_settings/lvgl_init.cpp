#include "lvgl_init.h"

/*
 * @brief 触摸 I2C协议
 */
#define I2C_SDA 3
#define I2C_SCL 2
#define RST_N_PIN 17
#define INT_N_PIN -1

CST816T cst816t(I2C_SDA, I2C_SCL, RST_N_PIN, INT_N_PIN);

TFT_eSPI lvgl_tft = TFT_eSPI(); /* TFT instance */

uint8_t touch_timeout = 30;
static const uint16_t screenWidth = 240;
static const uint16_t screenHeight = 280;
static lv_disp_draw_buf_t draw_buff;
/*
从DRAM中申请内存
*/
// static lv_color_t _buf[screenWidth * 10];
// static lv_color_t _buf[screenWidth * 10];
/*
从PSRAM中申请内存
*/
lv_color_t *buf_1 = (lv_color_t *)heap_caps_malloc(screenWidth * screenHeight, MALLOC_CAP_SPIRAM);
lv_color_t *buf_2 = (lv_color_t *)heap_caps_malloc(screenWidth * screenHeight, MALLOC_CAP_SPIRAM);

void _my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
    uint32_t w = (area->x2 - area->x1 + 1);
    uint32_t h = (area->y2 - area->y1 + 1);

    lvgl_tft.startWrite();
    lvgl_tft.setAddrWindow(area->x1, area->y1, w, h);
    lvgl_tft.pushColors((uint16_t *)&color_p->full, w * h, true);
    lvgl_tft.endWrite();

    lv_disp_flush_ready(disp);
}

void _my_touchpad_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data)
{
    TouchInfos tp;
    tp = cst816t.GetTouchInfo();
    bool touched = tp.touching;

    if (!touched)
    {
        data->state = LV_INDEV_STATE_REL;
    }
    else
    {
        data->state = LV_INDEV_STATE_PR;
        data->point.x = tp.x;
        data->point.y = tp.y;
        // Serial.print("touchx:");
        // Serial.print(tp.x);
        // Serial.print("touchy:");
        // Serial.println(tp.y);
    }
}
void lvgl_init()
{
    lv_init();
}
void Tft_Device_Settings(uint8_t Src_orientation)
{
    lvgl_tft.begin();
    lvgl_tft.setRotation(Src_orientation);
    lvgl_tft.fillScreen(TFT_BLACK);
    lvgl_tft.initDMA();
}
void Touch_Settings()
{
    cst816t.begin();
    cst816t.setRotation(Rotation_1);
}
static lv_disp_drv_t disp_drvv;
static lv_indev_drv_t indev_drvv;
void Display_Settings()
{
    lv_disp_draw_buf_init(&draw_buff, buf_1, buf_2, screenWidth * 140);
    lv_disp_drv_init(&disp_drvv);
    disp_drvv.hor_res = screenWidth;
    disp_drvv.ver_res = screenHeight;
    disp_drvv.flush_cb = _my_disp_flush;
    disp_drvv.full_refresh = 1;
    disp_drvv.antialiasing = 1;
    disp_drvv.draw_buf = &draw_buff;
    lv_disp_drv_register(&disp_drvv);

    lv_indev_drv_init(&indev_drvv);
    indev_drvv.type = LV_INDEV_TYPE_POINTER;
    indev_drvv.read_cb = _my_touchpad_read;
    lv_indev_drv_register(&indev_drvv);
}

void Init(void (*Application)(), uint8_t Src_orientation)
{
    Serial.begin(115200);
    Touch_Settings();
    Tft_Device_Settings(Src_orientation);
    lvgl_init();
    Display_Settings();
    Application();
}
void memory(void)
{
    uint32_t memory = heap_caps_get_free_size(MALLOC_CAP_SPIRAM);
    // Serial.print("DRAM:");
    // Serial.print(ESP.getFreeHeap());
    // Serial.print("PSRAM:");
    // Serial.println(memory);
}