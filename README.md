# 🟡 Potentiometer-Based LED Brightness Controller

This project is a simple LED brightness controller built using an Arduino Uno and a potentiometer. The potentiometer adjusts the brightness of an LED, but the LED only lights up when the potentiometer’s value crosses a defined threshold.
---
## ✨ Features

* Reads analog input from a potentiometer
* Maps the potentiometer value (0–1023) to PWM range (0–255)
* Turns the LED off if below threshold
* Adjusts LED brightness smoothly if above threshold
* Real-time monitoring of values via Serial Monitor
---
## 🛠 Tools & Components Used

* Arduino UNO (Microcontroller)
* 1 Potentiometer (10kΩ recommended)
* 1 LED (any color)
* 1 Resistor (220Ω)
* Breadboard & Jumper Wires
* USB Cable for Arduino
* Arduino IDE (for coding & uploading)
---
## 🔌 Circuit Connections

* Potentiometer → Arduino UNO

  * VCC (side pin) → 5V
  * GND (side pin) → GND
  * Middle pin (wiper) → A0

* LED → Arduino UNO

  * Anode (long leg) → Pin 3 (via 220Ω resistor)
  * Cathode (short leg) → GND
---
## ⚙ How It Works

1. The potentiometer value is read through the A0 analog pin.
2. This value is mapped to a PWM range (0–255).
3. If the mapped value is *greater than the threshold (128)*:

   * The LED brightness is adjusted according to the potentiometer value.
4. If the mapped value is *below the threshold*:

   * The LED remains off.
5. The potentiometer and LED brightness values are displayed on the Serial Monitor.
---
## 📖 Applications

* Learning analog-to-digital conversion on Arduino
* Understanding PWM and LED brightness control
* Threshold-based sensor/actuator projects
* Beginner Arduino projects for electronics learning
---
