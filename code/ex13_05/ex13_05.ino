// 아두이노: 문자열 데이터(→주파수)를 수신하여 부저의 주파수 제어

#define BUZZER 13

void setup() {
  pinMode(BUZZER, OUTPUT);
  Serial.begin(9600);
}

void loop() { }

void serialEvent() {
  int value = Serial.parseInt();
  tone(BUZZER, value, 500);
}
