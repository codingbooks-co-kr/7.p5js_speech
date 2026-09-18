// 아두이노: 수신된 정수(→0 또는 1)로 LED 점멸 제어

#define LED 6

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() { }

void serialEvent() {
  int value = Serial.read();
  digitalWrite(LED, value);
}
