byte led_blue=3;
byte led_green=5;
byte led_red=6;
unsigned int t=1000;

void setup() {
pinMode(led_red,OUTPUT);
pinMode(led_green,OUTPUT);
pinMode(led_blue,OUTPUT);
}

void loop() {
  analogWrite(led_red, 0);
  analogWrite(led_green, 255);
  analogWrite(led_blue, 255);
  delay(t);
  
  analogWrite(led_red, 255);
  analogWrite(led_green, 0);
  analogWrite(led_blue, 255);
  delay(t);
  
  analogWrite(led_red, 255);
  analogWrite(led_green, 255);
  analogWrite(led_blue, 0);
  delay(t);
}
