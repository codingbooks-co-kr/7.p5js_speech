// 아두이노: 수신된 문자열로 LED 점멸 제어

#define LED 6

void setup( ) {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() { }

void serialEvent() {
  String value = Serial.readStringUntil('\n');
  if (value.equals("on")) {
    digitalWrite(LED, 1);
  } else if (value.equals("off")) {
    digitalWrite(LED, 0);
  }
}
