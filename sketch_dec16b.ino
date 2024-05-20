#include <Servo.h>

Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;
Servo myservo6;
Servo myservo7;

void setup() {
  Serial.begin(9600);
  myservo1.attach(A2);  // First servo on pin A2
  myservo2.attach(A3);  // Second servo on pin A3
  myservo3.attach(A0);  // Third servo on pin A0
  myservo4.attach(A1);  // Fourth servo on pin A1
  myservo5.attach(A4);  // Fifth servo on pin A4
  myservo6.attach(A5);  // Sixth servo on pin A5
  myservo7.attach(A7);  // Seventh servo on pin A6
}

// Define functions for each servo
void set_servo1_angle(int angle) {
  myservo1.write(angle);
  Serial.println("First servo angle set to: " + String(angle));
}

void set_servo2_angle(int angle) {
  myservo2.write(angle);
  Serial.println("Second servo angle set to: " + String(angle));
}

void set_servo3_angle(int angle) {
  myservo3.write(angle);
  Serial.println("Third servo angle set to: " + String(angle));
}

void set_servo4_angle(int angle) {
  myservo4.write(angle);
  Serial.println("Fourth servo angle set to: " + String(angle));
}

void set_servo5_angle(int angle) {
  myservo5.write(angle);
  Serial.println("Fifth servo angle set to: " + String(angle));
}

void set_servo6_angle(int angle) {
  myservo6.write(angle);
  Serial.println("Sixth servo angle set to: " + String(angle));
}

void set_servo7_angle(int angle) {
  myservo7.write(angle);
  Serial.println("Seventh servo angle set to: " + String(angle));
}

void loop() {
  if (Serial.available() > 0) {
    char command = Serial.read();
    switch(command) {
      case 'a':
        set_servo1_angle(Serial.parseInt());
        break;
      case 'b':
        set_servo2_angle(Serial.parseInt());
        break;
      case 'c':
        set_servo3_angle(Serial.parseInt());
        break;
      case 'd':
        set_servo4_angle(Serial.parseInt());
        break;
      case 'e':
        set_servo5_angle(Serial.parseInt());
        break;
      case 'f':
        set_servo6_angle(Serial.parseInt());
        break;
      case 'g':
        set_servo7_angle(Serial.parseInt());
        break;
    }
  }
}
