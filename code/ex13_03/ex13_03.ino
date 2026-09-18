// 아두이노: 수신된 1바이트의 정수(→0∼255)로 LED 밝기 제어

#define LED 6

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() { }

void serialEvent() {
  int value = Serial.read();
  analogWrite(LED, value);
}
