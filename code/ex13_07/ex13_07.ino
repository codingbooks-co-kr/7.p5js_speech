// 아두이노: 수신된 문자열에서 서보모터 각도 및 LED 밝기값 추출 및 제어

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
  int value1 = Serial.parseInt();
  int value2 = Serial.parseInt();
  servo.write(value1);
  analogWrite(LED, value2);
}
