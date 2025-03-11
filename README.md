
# LedDisplayFonts Library

A lightweight and easy-to-use Arduino library for displaying numbers and special characters (like `:`) on LED matrices using the [DMD](https://github.com/rweather/arduino-projects) library. Perfect for creating countdown timers, clocks, or any project that requires numeric displays.

## Features
- 🎯 **Supports numbers 0-9 and the colon (`:`) character**
- 🛠️ **Easy-to-use `drawChar` function** for displaying characters
- 🔌 **Compatible with LED matrices controlled by the DMD library**
- 📦 **Example included**: A count-up timer demo from `00:00` to `59:59`

---

## Installation

### Arduino IDE
1. Download the latest release from the [Releases page](https://github.com/JakubSdf/LedDisplayFonts/releases).
2. Extract the ZIP file into your Arduino `libraries` folder.
3. Restart the Arduino IDE.

### Arduino CLI
```bash
arduino-cli lib install LedDisplayFonts
```

---

## Usage

### Basic Example
```cpp
#include <LedDisplayFonts.h>
#include <DMD.h>

DMD led_module(1, 1); // Initialize DMD with 1 row and 1 column
LedDisplayFonts displayFonts(led_module);

void setup() {
  // Initialize your display here
}

void loop() {
  displayFonts.drawChar(0, 0, '5'); // Display the number 5 at (0, 0)
}
```

### Example: Count-Up Timer
Find the **CountUpDemo** sketch in:
```
File > Examples > LedDisplayFonts > CountUpDemo
```

---

## Dependencies
- **DMD** – LED matrix control  
- **SPI** – Communication protocol  
- **TimerOne** – Timing/scanning  
- **LedP10** – Brightness control  

Install via Arduino Library Manager or manually.

---

## License
Licensed under the MIT License. See `LICENSE` for details.

---

## Contributing
1. Open an issue for bugs/features  
2. Fork the repo → create a feature branch → submit a PR  

---

## Credits
- **Developer**: JakubSdf  
- **Inspiration**: DMD Library  

---

## Support
Like this project? Give it a ⭐ on GitHub or:  
[![Buy Me a Coffee](https://img.shields.io/badge/Buy_Me_A_Coffee-FFDD00?style=flat&logo=buy-me-a-coffee&logoColor=black)](https://www.buymeacoffee.com/jakubsdf) 

---

Happy tinkering! 🔧
