#include "lvgl_settings\lvgl_init.h"
#include "ui\generated\gui_guider.h"
#include "rtos\rtos_task.h"
#include "event\event.h"
#include "sdkconfig.h"
Task_Manager task_manager;
lv_ui guider_ui;
void gui_guider_init()
{
  setup_ui(&guider_ui);
  createStartView(&guider_ui);
  lv_scr_load_anim(guider_ui.Start, LV_SCR_LOAD_ANIM_MOVE_BOTTOM, 200, 0, false);
}
void systemInit(void *ptr)
{
  enum Screen_Orientation orientation = _0_Degree;
  Init(gui_guider_init, _0_Degree);
  task_manager.Task_init();
  while (1)
  {
    vTaskDelete(NULL);
  }
}

void setup()
{
  xTaskCreatePinnedToCore(systemInit, "systemInit", 4 * 1024, NULL, 3, NULL, 1);
  pinMode(48, OUTPUT);
  digitalWrite(48, HIGH);
}
void loop()
{
  // lv_task_handler();+
  // fftSampling(setValue);
}
