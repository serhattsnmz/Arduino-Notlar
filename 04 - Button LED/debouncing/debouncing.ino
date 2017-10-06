void setup() {
 pinMode(2, INPUT);
 pinMode(13, OUTPUT);

}

boolean ledDurum=LOW;

void loop() {
  boolean butonDurum = digitalRead(2);
  if (butonDurum==LOW){
    ledDurum=!ledDurum; 
    delay(20);
    while(!digitalRead(2)){
    delay(20);}
  }
  digitalWrite(13, ledDurum);
}
