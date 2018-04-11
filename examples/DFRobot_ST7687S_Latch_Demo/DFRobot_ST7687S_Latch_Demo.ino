#include "DFRobot_ST7687S_Latch.h"
#include "DFRobot_Character.h"

#ifdef __AVR__
uint8_t pin_cs = 3, pin_rs = 5, pin_wr = 6, pin_lck = 7;
#else
uint8_t pin_cs = D3, pin_rs = D5, pin_wr = D6, pin_lck = D7;
#endif

DFRobot_ST7687S_Latch tft(pin_cs, pin_rs, pin_wr, pin_lck);


void setup(void)
{
  Serial.begin(115200);
  tft.begin();
}


void loop(void)
{
  delay(1000);
  tft.fillScreen(DISPLAY_RED);
  delay(1000);
  tft.fillScreen(DISPLAY_WHITE);

  tft.fillScreen(DISPLAY_BLACK);
  tft.drawCircle(0, 0, 20, DISPLAY_GREEN);
  tft.drawRect(-20, -20, 40, 40, DISPLAY_CYAN);
  tft.drawLine(-64, -64, 64, 64, DISPLAY_RED);
  tft.drawHLine(-64, 0, 128, DISPLAY_WHITE);
  tft.drawVLine(0, -64, 128, DISPLAY_WHITE);
  tft.drawTriangle(-20, -50, 0, 0, 50, 20, DISPLAY_ORANGE);
  delay(1000);
  tft.fillCircle(0, 0, 20, DISPLAY_GREEN);
  delay(500);
  tft.fillRect(-20, -20, 40, 40, DISPLAY_CYAN);
  delay(500);
  tft.fillTriangle(-20, -50, -20, 0, 50, 20, DISPLAY_ORANGE);
  delay(500);
  tft.fillScreen(DISPLAY_BLACK);
  tft.setTextColor(DISPLAY_WHITE);
  tft.setTextSize(2);
  tft.setCursor(60, 60);
  tft.print("fire");
  delay(1000);
}


