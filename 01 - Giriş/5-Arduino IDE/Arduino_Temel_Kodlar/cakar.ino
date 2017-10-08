int pin = 8;
int pin2 = A1;
int sayac = 0;

void setup() {
  pinMode(pin, OUTPUT);
  pinMode(pin2, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(pin, LOW);
  int gelenDeger = digitalRead(pin); // HIGH - LOW

  analogWrite(pin2, 255); // 0 - 255
  int gelenDeger2 = analogRead(pin); // 0 - 1023

  Serial.println("Hello Arduino!");
  
  while(true);
}


