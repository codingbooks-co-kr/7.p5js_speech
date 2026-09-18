// 음성인식으로 전송된 값(→0 또는 1) 수신, 버튼값 송신

#define BUTTON 2
#define LED 6

void setup() {
  pinMode(BUTTON, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() { }

void serialEvent() {
  int value1 = Serial.read();
  digitalWrite(LED, value1);
  int value2 = digitalRead(BUTTON);
  Serial.write(value2);
}
