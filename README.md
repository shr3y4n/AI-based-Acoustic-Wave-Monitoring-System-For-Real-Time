# AI-based-Acoustic-Wave-Monitoring-System-For-Real-Time
# Arduino Sound Recognition with LEDs

This project uses an Arduino UNO R4 WiFi and an INMP441 microphone to recognize specific sounds.  
When the correct sound is detected, the corresponding LED lights up.  

- **Hardware used**: Arduino UNO R4 WiFi, INMP441 microphone, LEDs  
- **Output**: LEDs turn on based on the recognized sound  

✅ Final working code included – LEDs successfully light up according to the sound classification.

# Arduino Sound Recognition with LEDs

This project uses an Arduino UNO R4 WiFi and an INMP441 microphone to recognize specific sounds.  
When the correct sound is detected, the corresponding LED lights up.  

- **Hardware used**: Arduino UNO R4 WiFi, INMP441 microphone, LEDs  
- **Output**: LEDs turn on based on the recognized sound  

✅ Final working code included – LEDs successfully light up according to the sound classification.

## Wiring (Basic Setup)

- **INMP441 Microphone** → Arduino UNO R4 WiFi (I2S pins)  
  - VCC → 3.3V  
  - GND → GND  
  - SCK → Pin 9  
  - WS  → Pin 6  
  - SD  → Pin 7  

- **LEDs** → Arduino digital pins  
  - LED 1 → Pin 3 (with 220Ω resistor to GND)  
  - LED 2 → Pin 4 (with 220Ω resistor to GND)  
  - LED 3 → Pin 5 (with 220Ω resistor to GND)  

Each LED corresponds to a different recognized sound.


