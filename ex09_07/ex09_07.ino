// 서보모터 각도 제어

#include <Servo.h>
#define SERVO A0
Servo servo;

void setup() {
  pinMode(SERVO, OUTPUT);
  servo.attach(SERVO);
}

void loop() {
  servo.write(0);
  delay(2000);
  servo.write(90);
  delay(2000);
  servo.write(180);
  delay(2000);
}
