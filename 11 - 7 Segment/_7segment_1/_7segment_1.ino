byte a=11; 
byte b=12; 
byte c=6; 
byte d=8; 
byte e=13; 
byte f=10; 
byte g=9; 
int t=100;
void setup() {
  // put your setup code here, to run once:
  
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(f, LOW);
  digitalWrite(a, HIGH);
  delay(t);
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  delay(t);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  delay(t);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  delay(t);
  digitalWrite(d, LOW);
  digitalWrite(e, HIGH);
  delay(t);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  delay(t);
}
