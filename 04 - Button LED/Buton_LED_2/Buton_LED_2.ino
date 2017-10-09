int buton = 9;
int led =  13;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(buton, INPUT);
}

void loop() {
  int butonDurumu = digitalRead(buton);
  if (butonDurumu == HIGH) {
    digitalWrite(led, HIGH);
  }
  else {
    digitalWrite(led, LOW);
  }
}

