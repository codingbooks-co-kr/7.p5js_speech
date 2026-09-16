// 아두이노: 버튼값 송신

#define BUTTON 2

void setup() {
  pinMode(BUTTON, INPUT);
  Serial.begin(9600);
}

void loop() { }

void serialEvent() {
  int signal = Serial.read();
  int value = digitalRead(BUTTON);
  Serial.write(value);
}
