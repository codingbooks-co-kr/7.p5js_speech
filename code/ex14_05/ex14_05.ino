// 아두이노: 조도센서값을 문자열로 송신

#define LIGHT A3
#define MIN 400
#define MAX 800

void setup() {
  pinMode(LIGHT, INPUT);
  Serial.begin(9600);
}

void loop( ) {
  int value = analogRead(LIGHT);
  value = constrain(value, MIN, MAX);
  Serial.println(value);
  delay(30);
}
