
byte led_blue=11;
byte led_green=10;
byte led_red=9;

void setup() {
pinMode(led_red,OUTPUT);
pinMode(led_green,OUTPUT);
pinMode(led_blue,OUTPUT);
}

void loop() {
  int val1 = map(analogRead(A0),0,1023,0,255);
  int val2 = map(analogRead(A1),0,1023,0,255);
  int val3 = map(analogRead(A2),0,1023,0,255);
  
  analogWrite(led_red,val1);
  analogWrite(led_green,val2);
  analogWrite(led_blue,val3);
}
