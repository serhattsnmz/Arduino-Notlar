const int led_blue=3;
const int led_green=5;
const int led_red=6;
unsigned int t=1000;
void setup() {
  // put your setup code here, to run once:
pinMode(led_red,OUTPUT);
pinMode(led_green,OUTPUT);
pinMode(led_blue,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led_red, LOW);
  digitalWrite(led_green, HIGH);
  digitalWrite(led_blue, HIGH);
  delay(t);
  
  digitalWrite(led_red, HIGH);
  digitalWrite(led_green, LOW);
  digitalWrite(led_blue, HIGH);
  delay(t);
  
  digitalWrite(led_red, HIGH);
  digitalWrite(led_green, HIGH);
  digitalWrite(led_blue, LOW);
  delay(t);
}
