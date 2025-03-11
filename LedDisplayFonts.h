#ifndef LEDDISPLAYFONTS_H
#define LEDDISPLAYFONTS_H

#include <SPI.h>
#include <DMD.h>

class LedDisplayFonts {
public:
  // Constructor
  LedDisplayFonts(DMD &dmd);

  // Function to draw a character
  void drawChar(int x, int y, char c);

private:
  DMD &_dmd; // Reference to the DMD object

  // Font data for numbers and colon
  static const byte font[11][16]; // 0-9 and :
};

#endif