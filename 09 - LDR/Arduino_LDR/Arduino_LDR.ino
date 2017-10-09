int pin = A0;
int led = 3;

int ref = 200; // Led açılıp kapanacağı aralık

void setup() {
  pinMode(pin, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int gelenDeger = analogRead(pin);
  Serial.println(gelenDeger);
  
  if(gelenDeger > ref) {
    digitalWrite(led, LOW);
  }
  else {
    digitalWrite(led, HIGH);
  }
}
