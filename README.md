💡 Automatic Street Light System using Arduino

Developed by Rajan Robotics

Vision to Reality

An Automatic Street Light System using Arduino Uno and an LDR (Light Dependent Resistor) sensor.

This project automatically controls street lights based on the surrounding light intensity. During daytime, the LEDs remain OFF. When the surrounding light level decreases, the LEDs automatically turn ON.

📸 Project Overview

<!-- Add your actual working prototype photograph here -->"Arduino Automatic Street Light" (Images/working_prototype.jpg)

🚀 Features

- Automatic street light control.
- Detects surrounding light intensity using an LDR.
- LEDs turn ON automatically in darkness.
- LEDs turn OFF during sufficient daylight.
- Adjustable light sensitivity through software.
- Simple and beginner-friendly circuit.
- Low-cost practical electronics project.

🛠️ Components Required

S.No| Component| Quantity
1| Arduino Uno| 1
2| LDR Sensor| 1
3| 10KΩ Resistor| 1
4| 220Ω Resistor| 1
5| LEDs| 2–4
6| Breadboard| 1
7| Jumper Wires| As required
8| USB Cable| 1

🔌 Circuit Connections

LDR Sensor to Arduino Uno

The LDR and 10KΩ resistor form a voltage divider.

Component| Connection
One LDR terminal| 5V
Other LDR terminal| Arduino A0
10KΩ resistor| Between A0 and GND

LED to Arduino Uno

LED Connection| Arduino
LED Anode (+)| Digital Pin 9 through 220Ω resistor
LED Cathode (-)| GND

For multiple LEDs, connect each LED through its own current-limiting resistor. Ensure the total current stays within the Arduino pin limits.

💻 Software Requirements

- Arduino IDE
- Arduino Uno board package
- USB cable for programming

⚙️ Working Principle

The LDR changes its resistance depending on the surrounding light intensity.

- Daytime: Light intensity increases, LDR resistance decreases, and the analog input voltage increases. The Arduino switches OFF the LEDs.
- Nighttime: Light intensity decreases, LDR resistance increases, and the analog input voltage decreases. The Arduino switches ON the LEDs.

The Arduino continuously reads the analog value from the LDR and compares it with a predefined threshold.

📂 Project Structure

Arduino-Automatic-Street-Light-System/
│
├── Code/
│   └── Automatic_Street_Light.ino
│
├── Circuit/
│   └── circuit_diagram.png
│
├── Images/
│   └── working_prototype.jpg
│
├── Videos/
│   └── demo_video_link.txt
│
├── README.md
│
└── LICENSE

🖥️ How to Run the Project

1. Install Arduino IDE.
2. Connect Arduino Uno to your computer.
3. Connect the LDR voltage divider to analog pin A0.
4. Connect the LED to digital pin 9 through a 220Ω resistor.
5. Open "Automatic_Street_Light.ino".
6. Select Arduino Uno under Tools → Board.
7. Select the appropriate COM port.
8. Upload the program.
9. Test the LDR using a torch or by covering it with your hand.
10. Observe the automatic LED switching.

🎯 Applications

- Automatic street lighting.
- Garden lighting.
- Parking area lighting.
- Corridor lighting.
- Home automation demonstrations.
- Energy-saving lighting systems.

🔮 Future Enhancements

- Multiple street lights with automatic control.
- ESP32-based Wi-Fi monitoring.
- IoT-based street light management.
- Automatic brightness control using PWM.
- Motion detection using PIR sensors.
- Energy monitoring and optimization.

🎓 Learning Outcomes

Through this project, students will learn:

- Arduino programming.
- Analog input reading.
- LDR sensor interfacing.
- Voltage divider circuits.
- Digital output control.
- Conditional statements.
- Basic automation concepts.

👨‍💻 Developed By

RAJAN ROBOTICS

Vision to Reality

Robotics | Electronics | Embedded Systems | IoT | STEM

---

⭐ If you find this project useful, star this repository and share it with other electronics enthusiasts!