#include <AFMotor.h>
#include <stdio.h>
// Define motor pins
#define mrA1 7 // IN1
#define mrA2 6 // IN2
#define mrB1 5 // IN3
#define mrB2 4 // IN4
#define ENA 8     // PWM for motor A
#define ENB 3     // PWM for motor B

int speedr;
char command;
char pcom;
char ppcom;
//Pin Communication and Set Up
void setup() {
  Serial.begin(9600); // Start Bluetooth communication
  pinMode(mrA1, OUTPUT);
  pinMode(mrA2, OUTPUT);
  pinMode(mrB1, OUTPUT);
  pinMode(mrB2, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
}
//Motor control settings
void setf() {
  digitalWrite(mrA1, LOW);
  digitalWrite(mrA2, HIGH);
  digitalWrite(mrB1, HIGH);
  digitalWrite(mrB2, LOW);
}
void setb() {
  digitalWrite(mrA1, HIGH);
  digitalWrite(mrA2, LOW);
  digitalWrite(mrB1, LOW);
  digitalWrite(mrB2, HIGH);
}
void setL() {
  digitalWrite(mrA1, LOW);
  digitalWrite(mrA2, HIGH);
  digitalWrite(mrB1, LOW);
  digitalWrite(mrB2, HIGH);
}
void setR() {
  digitalWrite(mrA1, HIGH);
  digitalWrite(mrA2, LOW);
  digitalWrite(mrB1, HIGH);
  digitalWrite(mrB2, LOW);
}
void STOP() {
  digitalWrite(mrA1, LOW);
  digitalWrite(mrA2, LOW);
  digitalWrite(mrB1, LOW);
  digitalWrite(mrB2, LOW);
  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
}
void controlMotors(char command) {
  switch (command) {
    case 'F':
      slowDown(speedr);
      setf();
      accelUp(speedr);
      break;
    case 'B':
      slowDown(speedr);
      setb();
      accelUp(speedr);
      break;
    case 'R':
      slowDown(speedr);
      setR();
      accelUp(speedr);
      break;
    case 'L':
      slowDown(speedr);
      setL();
      accelUp(speedr);
      break;
    case 'S':
      STOP();
      break;
  }
}
//Speed control
void accelUp(int speedr) {
  int i;
  for (i = speedr; i < 255; i += 5)
  {
    speedr = i;
    //printf(speedr);
    analogWrite(ENA, speedr);
    analogWrite(ENB, speedr);
    delay(10);
  }
}
void slowDown(int speedr) {
  int i;
  for (i = speedr; i > 0; i -= 5)
  {
    speedr = i;
    //printf(speedr);
    analogWrite(ENA, speedr);
    analogWrite(ENB, speedr);
    delay(10);
  }
}

void loop() {
  if (Serial.available()) {
    char command = Serial.read(); // Read command from Bluetooth
    controlMotors(command);
  }
}
