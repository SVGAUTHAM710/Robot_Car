# Arduino Voice-Controlled Robot

This Arduino project enables you to control a robot using voice commands and an ultrasonic sensor for obstacle detection. The robot is equipped with two DC motors and a servo motor for enhanced functionality.

## Table of Contents

- [Hardware Requirements](#hardware-requirements)
- [Software Dependencies](#software-dependencies)
- [Wiring Instructions](#wiring-instructions)
- [Functionality](#functionality)
- [How to Use](#how-to-use)
- [Author](#author)


## Hardware Requirements

- Arduino Board
- Ultrasonic Sensor (HC-SR04)
- Motor Driver Shield (L298N or similar)
- Servo Motor
- Two DC Motors
- Chassis and Wheels for the Robot
- Jumper Wires

## Software Dependencies

- Arduino IDE
- [Servo Library](https://www.arduino.cc/en/Reference/Servo) for controlling the servo motor
- [Adafruit Motor Shield Library](https://learn.adafruit.com/adafruit-motor-shield/library-install) for controlling DC motors

## Wiring Instructions

- Connect the ultrasonic sensor to `Trig` (A1) and `Echo` (A0) pins on the Arduino board.
- Connect the left and right DC motors to the motor driver shield (pins 1 and 3, and pins 2 and 4, respectively).
- Connect the servo motor signal wire to a PWM pin on the Arduino board.

## Functionality

1. **Voice Control:**
   - The robot can be controlled using voice commands sent via the Serial Monitor.
   - Send '^' to move the robot forward.
   - Send '-' to move the robot backward.
   - Send '*' to stop the robot.
   - Send '#' to rotate the robot left.
   - Send '@' to rotate the robot right.

2. **Obstacle Detection:**
   - The ultrasonic sensor detects obstacles in front of the robot.
   - If an obstacle is detected within 12 cm, the robot stops, moves backward briefly, and then rotates to avoid the obstacle.

## How to Use

1. Upload the sketch to your Arduino board using the Arduino IDE.
2. Open the Serial Monitor in the Arduino IDE.
3. Send voice commands ('^', '-', '*', '#', '@') to control the robot.
4. The robot will stop, move backward, and rotate if an obstacle is detected within 12 cm.

## Author

S.V.GAUTHAM
Contact: gauthamsv924@gmail.com



