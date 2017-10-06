void setup() {
  Serial.begin(9600);
}
void loop() {
  int sensorDegeri = analogRead(A0); /* Arduinonun A0 ayagindaki gerilim olculuyor */
  Serial.println(sensorDegeri); /* olculen deger seri haberlesme ile yollaniyor */
  delay(10); /* daha dogru bir olcum icin biraz bekleme kullanilmalidir */
}

