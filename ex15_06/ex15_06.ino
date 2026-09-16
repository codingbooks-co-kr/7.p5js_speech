// 선의 위치 좌표값 수신, 가변저항값 송신

#define VARIABLE_R A1
#define LED 6

void setup() {
  pinMode(VARIABLE_R, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() { }

void serialEvent() {
  int value1 = Serial.read();
  analogWrite(LED, value1);

  int value2 = analogRead(VARIABLE_R);
  value2 = map(value2, 0, 1023, 0, 255);
  Serial.write(value2);
}
