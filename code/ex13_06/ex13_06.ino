// 아두이노: 수신된 두 개의 정수로 서보모터 각도 및 LED 밝기 제어

#include <Servo.h>
#define LED 6
#define SERVO A0
Servo servo;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(SERVO, OUTPUT);
  servo.attach(SERVO);
  Serial.begin(9600);
}

void loop() { }

void serialEvent() {
  if (Serial.available() >= 3) {
    int value = Serial.read();
    if (value == 'A') {
      int value1 = Serial.read();
      int value2 = Serial.read();
      servo.write(value1);
      analogWrite(LED, value2);
    }
  }
}
