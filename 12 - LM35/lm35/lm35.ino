// 5V - A0 - GND yazı bize bakarken baglama
const int lmPin = 1;
int val =0;
void setup()
{
Serial.begin(9600);
}
void loop()
{
val = analogRead(lmPin);
float mv = ( val/1024.0)*5000; 
float cel = mv/10;
float farh = (cel*9)/5 + 32;

Serial.print("sicaklik = ");
Serial.print(cel);
}
