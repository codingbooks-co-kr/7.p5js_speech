// 아두이노: 초음파센서 거리값 송신

#define TRIG A4
#define ECHO A5
#define MIN 5
#define MAX 50

void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  Serial.begin(9600);
}

void loop() {
  // 10μsec의 HIGH 신호를 초음파센서에 인가
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  // 물체와의 거리(cm단위) 측정
  int distance = pulseIn(ECHO, HIGH) * 0.017;

  int value = constrain(distance, MIN, MAX);
  Serial.write(value);
  delay(30);
}
