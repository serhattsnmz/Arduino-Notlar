int pin = A0;
int pin2 = 3;

void setup() {
  pinMode(pin, INPUT);
  pinMode(pin2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int gelenDeger = analogRead(pin);
  Serial.println(gelenDeger);
  map(gelenDeger,0,1023,0,255);
  analogWrite(pin2, gelenDeger);
}
