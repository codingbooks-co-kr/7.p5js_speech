// 아두이노: 가변저항값 송신

#define VARIABLE_R A1

void setup() {
  pinMode(VARIABLE_R, INPUT);
  Serial.begin(9600);
}

void loop( ) { }

void serialEvent() {
  int signal = Serial.read();
  int value = analogRead(VARIABLE_R);
  value = map(value, 0, 1023, 0, 255);
  Serial.write(value);
}
