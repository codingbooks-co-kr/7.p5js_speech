// 아두이노: 가변저항값 2개 송신1

#define VARIABLE_R1 A1
#define VARIABLE_R2 A2

void setup() {
  pinMode(VARIABLE_R1, INPUT);
  pinMode(VARIABLE_R2, INPUT);
  Serial.begin(9600);
}

void loop() {
  int value1 = analogRead(VARIABLE_R1);
  int value2 = analogRead(VARIABLE_R2);
  value1 = map(value1, 0, 1023, 0, 255);
  value2 = map(value2, 0, 1023, 0, 255);
  Serial.write('A');
  Serial.write(value1);
  Serial.write(value2);
  delay(30);
}
