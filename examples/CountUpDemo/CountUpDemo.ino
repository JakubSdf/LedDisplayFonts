#include <SPI.h>
#include <DMD.h>
#include <TimerOne.h>
#include "LedP10.h"
#include "LedDisplayFonts.h"

LedP10 myled;
#define ROW 1
#define COLUMN 1

DMD led_module(ROW, COLUMN);
LedDisplayFonts displayFonts(led_module);

void scan_module() {
  led_module.scanDisplayBySPI();
}

void setup() {
  Timer1.initialize(2000);
  Timer1.attachInterrupt(scan_module);
  led_module.clearScreen(true);
  myled.setbrightness(50);
}

void loop() {
  static int minutes = 0;
  static int seconds = 0;

  led_module.clearScreen(true);

  displayFonts.drawChar(0, 0, '0' + (minutes / 10));   // Tens digit of minutes
  displayFonts.drawChar(7, 0, '0' + (minutes % 10));   // Units digit of minutes
  displayFonts.drawChar(14, 0, ':');                   // Colon
  displayFonts.drawChar(16, 0, '0' + (seconds / 10));  // Tens digit of seconds
  displayFonts.drawChar(23, 0, '0' + (seconds % 10));  // Units digit of seconds

  seconds++;
  if (seconds >= 60) {
    seconds = 0;
    minutes++;
    if (minutes >= 60) {
      minutes = 0;
    }
  }

  delay(1000);
}