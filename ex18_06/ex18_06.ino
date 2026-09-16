// 아두이노: RGB LED값 수신 및 버튼값 송신

#define BUTTON 2
#define RedLED 11
#define GreenLED 5
#define BlueLED 3

void setup() {
  pinMode(BUTTON, INPUT);
  pinMode(RedLED, OUTPUT);
  pinMode(GreenLED, OUTPUT);
  pinMode(BlueLED, OUTPUT);
  Serial.begin(9600);
}

void loop() { }

void serialEvent() {
  int value1 = Serial.read();
  if (value1 == 0) {
    setColor(0, 0, 0);
  } else if (value1 == 1) {
    setColor(255, 0, 0);
  } else if (value1 == 2) {
    setColor(0, 255, 0);
  } else if (value1 == 3) {
    setColor(0, 0, 255);
  } else if (value1 == 4) {
    setColor(255, 0, 255);
  }
  int value2 = digitalRead(BUTTON); 
  Serial.write(value2);
}

// setColor(빨강, 녹색, 파랑): 색상을 결정하는 함수
void setColor(int Red, int Green, int Blue) {
  analogWrite(RedLED, Red);
  analogWrite(GreenLED, Green);
  analogWrite(BlueLED, Blue);
}
