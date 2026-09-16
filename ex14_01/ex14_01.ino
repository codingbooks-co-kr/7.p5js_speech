// 아두이노: 버튼값(→0 또는 1) 송신

#define BUTTON 2

void setup() {
  pinMode(BUTTON, INPUT);
  Serial.begin(9600);
}

void loop() {
  int value = digitalRead(BUTTON);
  Serial.write(value);
  delay(30);
}
