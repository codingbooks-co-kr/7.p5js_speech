// 아두이노: 수신된 정수(→0,1,2,3)로 음정 주파수에 해당하는 부저음 출력

#define BUZZER 13

int note[] = {262, 330, 392, 524};

void setup() {
  pinMode(BUZZER, OUTPUT);
  Serial.begin(9600);
}

void loop() { }

void serialEvent() {
  int value = Serial.read();
  for (int i = 0; i < value; i++) {
    tone(BUZZER, note[i], 200);
    delay(400);
  }
  Serial.write('B');
}
