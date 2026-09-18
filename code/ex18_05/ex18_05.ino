// 아두이노: 가변저항값 2개 및 버튼값 송신

#define VARIABLE_R1 A1
#define VARIABLE_R2 A2
#define BUTTON 2

void setup() {
  pinMode(VARIABLE_R1, INPUT);
  pinMode(VARIABLE_R2, INPUT);
  pinMode(BUTTON, INPUT);
  Serial.begin(9600);
}

void loop() { }

void serialEvent() {
  int signal = Serial.read();
  int value1 = analogRead(VARIABLE_R1);
  int value2 = analogRead(VARIABLE_R2);
  int value3 = digitalRead(BUTTON);
  Serial.print(value1);
  Serial.print(",");
  Serial.print(value2);
  Serial.print(",");
  Serial.println(value3);
}
