#include <AFMotor.h>
#define Echo A0
#define Trig A1
#define motor 10
#define Speed 170
char value;
int distance;
Servo servo;
AF_DCMotor M1(1);
AF_DCMotor M3(3);
void setup() {
  Serial.begin(9600);
  pinMode(Trig, OUTPUT);
  pinMode(Echo, INPUT);
  M1.setSpeed(Speed);
  M3.setSpeed(Speed);
}
void loop() {
  distance = ultrasonic();
  if (distance >= 15) {
    voicecontrol();
  } 
  else {
    Obstacle();
  }
}

void Obstacle() {
  distance = ultrasonic();
  if (distance <= 12) {
    Stop();
    backward();
    delay(100);
    Stop();
  } 
  else {
    forward();
  }
}
void voicecontrol() {
  if (Serial.available() > 0) {
    value = Serial.read();
    Serial.println(value);
    if (value == '!') {
      forward();
    } 
    else if (value == '?') {
      backward();
    }
    else if (value == '*') {
      Stop();
    }
  }
}
// Ultrasonic sensor distance reading function
int ultrasonic() {
  digitalWrite(Trig, LOW);
  delayMicroseconds(1);
  digitalWrite(Trig, HIGH);
  delayMicroseconds(1);
  digitalWrite(Trig, LOW);
  long t = pulseIn(Echo, HIGH);
  long cm = t / 29 / 2; //time convert distance
  return cm;
}
void forward() {
  M1.run(FORWARD);
  M3.run(FORWARD);
}
void backward() {
  M1.run(BACKWARD);
  M3.run(BACKWARD);
}

void Stop() {
  M1.run(RELEASE);
  M3.run(RELEASE);
}