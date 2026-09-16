// 0 또는 1 수신하여 네 개의 LED 중 한 개 선택 점등 

const int LED[] = {6, 7, 8, 12};
int r;

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(LED[i], OUTPUT);
  }
  Serial.begin(9600);
}

void loop() { }

void serialEvent() {
  int value = Serial.read();
  if (value == 1) { 
    for (int i = 0; i < 4; i++) {
      digitalWrite(LED[i], 0);
    }
    digitalWrite(LED[r], 1);
  } else {
    r = random(4);
    analogWrite(LED[r], random(255));
    delay(random(20, 50));
  }
  Serial.write('B');
}
