// 0, 1, 2를 수신할 때 LED 점멸 및 해당 부저음(→200Hz, 400Hz, 무음) 출력

#define LED 6
#define BUZZER 13

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  Serial.begin(9600);
}

void loop() { }

void serialEvent() {
  int value = Serial.read();
  if (value == 0) {
    digitalWrite(LED, 0);
    tone(BUZZER, 200, 500);
    delay(500);
  } else if (value == 1) {
    digitalWrite(LED, 1);
    tone(BUZZER, 400, 500);
    delay(500);
  } else {
    noTone(BUZZER);
  }
  Serial.write('B');
}
