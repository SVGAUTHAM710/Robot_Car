Arduino Voice-Controlled Robot
This Arduino sketch allows you to control a robot using voice commands and an ultrasonic sensor to detect obstacles. The robot is equipped with two DC motors and an ultrasonic sensor for distance measurement.

Hardware Requirements
Arduino Board
Ultrasonic Sensor (HC-SR04)
Motor Driver Shield (L298N or similar)
Two DC Motors
Chassis and Wheels for the Robot
Jumper Wires
Software Dependencies
Arduino IDE
Servo Library for controlling the servo motor
Adafruit Motor Shield Library for controlling DC motors
Wiring Instructions
Connect the ultrasonic sensor to Trig (A1) and Echo (A0) pins on the Arduino board.
Connect the left and right DC motors to the motor driver shield (pins 1 and 3, and pins 2 and 4, respectively).
Ensure the motor driver shield is properly powered and connected to the Arduino board.
Functionality
Voice Control:

The robot can be controlled using voice commands sent via the Serial Monitor.
Send '^' to move the robot forward.
Send '-' to move the robot backward.
Send '*' to stop the robot.
Obstacle Detection:

The ultrasonic sensor detects obstacles in front of the robot.
If an obstacle is detected within 12 cm, the robot stops and moves backward briefly to avoid the obstacle.
How to Use
Upload the sketch to your Arduino board using the Arduino IDE.
Open the Serial Monitor in the Arduino IDE.
Send voice commands ('^', '-', '*') to control the robot.
The robot will stop and move backward if an obstacle is detected within 12 cm.

Author
S.V.GAUTHAM
