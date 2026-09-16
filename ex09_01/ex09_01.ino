// 시리얼 통신으로 다양한 데이터형의 변숫값 출력

boolean b1 = true;
boolean b2 = false;
char c1 = 'A';
char c2 = 65;
byte b = 65;
int i = 65;
float f = 3.141592;
String s = "Hello Arduino!";

void setup() {
  Serial.begin(9600);
  Serial.print("String s = ");
  Serial.println(s);

  Serial.print("char c1 = ");
  Serial.println(c1);

  Serial.print("char c2 = ");
  Serial.println(c2);

  Serial.print("byte b = ");
  Serial.println(b);

  Serial.print("int i = ");
  Serial.println(i);

  Serial.print("float f = ");
  Serial.println(f);s

  Serial.print("boolean b1 = ");
  Serial.println(b1);

  Serial.print("boolean b2 = ");
  Serial.println(b2);
}

void loop() {
}
