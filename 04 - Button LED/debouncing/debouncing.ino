boolean ledDurum = LOW;

void setup() {
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  boolean butonDurum = digitalRead(2);
  if (butonDurum == LOW) {
    ledDurum = !ledDurum;
    delay(20);
    while (!digitalRead(2)) {
      delay(20);
    }
  }
  digitalWrite(13, ledDurum);
  Serial.println(butonDurum);
}
