int pin = A1;
int led = 2;
int referansDeger = 100;

void setup() {
  pinMode(pin, INPUT);
  pinMode(led, OUTPUT);
  digitalWrite(led, HIGH);
  Serial.begin(9600);
}

void loop() {
  int gelenDeger = analogRead(pin);
  Serial.print(gelenDeger + " ");

  if(gelenDeger > referansDeger){
    Serial.println("Beyaz");
  }
  else {
    Serial.println("Siyah");
  }
  delay(10);
}
