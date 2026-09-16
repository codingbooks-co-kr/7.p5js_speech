// 아두이노: 가변저항 2개 값 송신2

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
  Serial.print(value1);
  Serial.print(",");
  Serial.println(value2);
  delay(30);
}
