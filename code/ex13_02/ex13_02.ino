// 아두이노: 수신된 정수(→0,1,2,3,4)로 4개의 LED 제어

const int LED[] = {6, 7, 8, 12};

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(LED[i], OUTPUT);
  }
  Serial.begin(9600);
}

void loop() { }

void serialEvent() {
  int value = Serial.read();
  for (int i = 0; i < 4; i++) {
    digitalWrite(LED[i], 0);
  }
  for (int i = 0; i < value; i++) {
    digitalWrite(LED[i], 1);
  }
}
