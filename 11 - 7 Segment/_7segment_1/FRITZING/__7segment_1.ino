// Seven segment display ?zerindeki segmentelerin her birini s?ras?ya <x> sn aral?klarla yakan program
// Seven segment displayin Arduino'ya ba?lant?lar?;
// a=11 b=12 c=6 d=8 e=13 f=10 g=9
byte a = 12; 
byte b = 10; 
byte c = 2; 
byte d = 3; 
byte e = 4; 
byte f = 12; 
byte g = 13;
int x = 100;
void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

void loop() {
  digitalWrite(f, LOW);
  digitalWrite(a, HIGH);
  delay(x);
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  delay(x);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  delay(x);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  delay(x);
  digitalWrite(d, LOW);
  digitalWrite(e, HIGH);
  delay(x);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  delay(x);
}