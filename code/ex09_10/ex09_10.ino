// 초음파센서값 읽고 출력

#define TRIG A4
#define ECHO A5

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

  // 물체와의 거리 측정
  int distance = pulseIn(ECHO, HIGH) * 0.017;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println("cm");
  delay(100);
}
