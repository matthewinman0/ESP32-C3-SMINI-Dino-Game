# ESP32-C3-Supermini Dino Game

A simple **Dino game** for the **ESP32-C3-SUPERMINI**, designed to run on a small **I2C 128x64 OLED display**. Jump over obstacles and try to get the highest score!  

---

## Features

- Classic dinosaur runner game  
- Static 16×16 dino sprite  
- Custom 16×16 obstacle sprite  
- Score tracking  
- Simple one-button jump control  

---

## Hardware Requirements

- **ESP32-C3-SUPERMINI**  
- **128x64 I2C OLED display**  
- **Push button** for jumping  

---

## Pin Connections

| ESP32-C3-SMINI | Component |
|----------------|-----------|
| 0              | Jump Button (connect to GND when pressed) |
| 4              | SDA (I2C data) |
| 5              | SCL (I2C clock) |
| 3.3V           | VCC of display |
| GND            | GND of display and button |

> **Note:** The jump button uses `INPUT_PULLUP`. Pressing the button should connect it to GND.  

---

## How to Use

1. Connect the hardware according to the pinout above.  
2. Upload the game code to your ESP32-C3 using Arduino IDE.  
3. Press the button to make the dino jump over obstacles.  
4. Score increases with each obstacle passed.  
5. If you hit an obstacle, the game displays **GAME OVER** and your score.  

---

## Display

- 128×64 pixel I2C OLED  
- Ground line drawn at the bottom of the screen  
- Dino and obstacles are 16×16 pixels  

---

## Libraries Required

- [Adafruit GFX Library](https://github.com/adafruit/Adafruit-GFX-Library)  
- [Adafruit SSD1306 Library](https://github.com/adafruit/Adafruit_SSD1306)  

Make sure to install these in the Arduino IDE **before uploading**.  

---

## License

Free to use and modify. No warranty provided.  
