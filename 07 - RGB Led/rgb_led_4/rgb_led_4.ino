// 3 ayrı potansiyometreden okunan değerleri RGB led kanallarını PWM ile sürmek için kullanılmaktadır.
byte led_blue=3;
byte led_green=5;
byte led_red=6;
unsigned int t=50;
void setup() {
  // put your setup code here, to run once:
pinMode(led_red,OUTPUT);
pinMode(led_green,OUTPUT);
pinMode(led_blue,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  int val1=map(analogRead(0),0,1023,0,255);
  int val2=map(analogRead(1),0,1023,0,255);
  int val3=map(analogRead(2),0,1023,0,255);
  
  analogWrite(led_red,val1);
  analogWrite(led_green,val2);
  analogWrite(led_blue,val3);  
  delay(100);
}
