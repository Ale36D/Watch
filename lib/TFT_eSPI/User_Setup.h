
#define USER_SETUP_INFO "User_Setup"

// #define ILI9341_DRIVER       // Generic driver for common displays
// #define ILI9341_2_DRIVER     // Alternative ILI9341 driver, see https://github.com/Bodmer/TFT_eSPI/issues/1172
// #define ST7735_DRIVER      // Define additional parameters below for this display
// #define ILI9163_DRIVER     // Define additional parameters below for this display
// #define S6D02A1_DRIVER
// #define RPI_ILI9486_DRIVER // 20MHz maximum SPI
// #define HX8357D_DRIVER
// #define ILI9481_DRIVER
// #define ILI9486_DRIVER
// #define ILI9488_DRIVER
#define ST7789_DRIVER
// #define ST7789_2_DRIVER
// #define R61581_DRIVER
// #define RM68140_DRIVER
// #define ST7796_DRIVER
// #define SSD1351_DRIVER
// #define SSD1963_480_DRIVER
// #define SSD1963_800_DRIVER
// #define SSD1963_800ALT_DRIVER
// #define ILI9225_DRIVER
// #define GC9A01_DRIVER

#define TFT_SDA_READ // 此选项仅适用于ESP32，仅使用ST7789和GC9A01显示器进行测试

// 仅对于ST7735, ST7789和ILI9341，如果显示器上的蓝色和红色交换，则定义颜色顺序
// 一次尝试一个选项来找到显示的正确颜色顺序

// #define TFT_RGB_ORDER TFT_BGR // Colour order Red-Green-Blue
#define TFT_RGB_ORDER TFT_RGB // Colour order Blue-Green-Red

#define TFT_WIDTH 240
#define TFT_HEIGHT 280

// 对于ST7735 ONLY，定义显示类型，最初这是基于
// 屏幕保护膜上TAB的颜色，但这并不总是正确的，所以尝试
// 如果屏幕不能正确显示图形，输出下面的不同选项
// 例如颜色错误，镜像或边缘的散点。
// 注释掉ST7735显示驱动程序的所有选项，保存
// 这个User_Setup文件，然后重建并再次上传草图到板:

// #define ST7735_INITB
// #define ST7735_GREENTAB
// #define ST7735_GREENTAB2
// #define ST7735_GREENTAB3
// #define ST7735_GREENTAB128    // For 128 x 128 display
// #define ST7735_GREENTAB160x80 // For 160 x 80 display (BGR, inverted, 26 offset)
// #define ST7735_ROBOTLCD       // For some RobotLCD arduino shields (128x160, BGR, https://docs.arduino.cc/retired/getting-started-guides/TFT)
// #define ST7735_REDTAB
// #define ST7735_BLACKTAB
// #define ST7735_REDTAB160x80   // For 160 x 80 display with 24 pixel offset

#define TFT_MISO -1
#define TFT_MOSI 8 // 在一些显示驱动板中，它可能被写为“SDA”等等。
#define TFT_SCLK 12
#define TFT_CS 7
#define TFT_DC 6

#define TFT_RST 10

// #define TOUCH_CS -1  // Chip select pin (T_CS) of touch screen
// #define TFT_BL 14 // LED back-light

// #define SPI_FREQUENCY   1000000
// #define SPI_FREQUENCY   5000000
// #define SPI_FREQUENCY  10000000
// #define SPI_FREQUENCY  20000000
// #define SPI_FREQUENCY 27000000
// #define SPI_FREQUENCY 40000000
// #define SPI_FREQUENCY  55000000 // STM32 SPI1 only (SPI2 maximum is 27MHz)
#define SPI_FREQUENCY 80000000
// 可选降低SPI频率读取TFT
// #define SPI_READ_FREQUENCY 20000000
