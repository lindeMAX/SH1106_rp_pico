#include "font5x7.h"
#include "pico/stdio.h"
#include "pico/time.h"
#include "sh1106.h"
#include <stdio.h>

int main(void) {
  stdio_init_all();
  sleep_ms(2000);
  printf("Intializing SH1106\n");
  SH1106_Init();
  printf("Flush\n");
  SH1106_Flush();
  printf("Setting orientation\n");
  SH1106_Orientation(LCD_ORIENT_NORMAL);
  printf("Setting contrast\n");
  SH1106_Contrast(127);
  printf("Wrtiting to display\n");
  while (1) {
    sleep_ms(250);
    LCD_PutStr(20, 20, "AbCdEfG", fnt5x7);
		SH1106_Flush();
  }
}
