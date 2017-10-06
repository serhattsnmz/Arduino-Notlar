void setup() {
  Serial.begin(9600);
}
void loop() {
  int sensorDegeri = analogRead(A0); /* A0’daki gerilimin sayısal değeri */
  float gerilim = ((float)5/1023)*sensorDegeri;
  /*
  5 volt 1023 ile ölçülüyordu.
  Bu yüzden adim aralığını bulmak için 5/1023 kesrini bulduk.
  Bu kesir okunan ADC değeri ile çarpılmıştır.
  Böylece gerilim değeri bulunmuştur.
  */
  Serial.print(gerilim);/* bulunan gerilim değeri bilgisayara aktarıldı.   */
  Serial.println(" Volt");
  delay(100);
}

