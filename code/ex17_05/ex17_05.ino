// 아두이노: 초음파센서값 송신

const int TRIG = A4, ECHO = A5;
int distance;

void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  distance = pulseIn(ECHO, HIGH) * 0.017;
  delay(100);
}

void serialEvent() {
  int signal = Serial.read();
  distance = constrain(distance, 5, 100);
  Serial.write(distance);
  delay(30);
}
