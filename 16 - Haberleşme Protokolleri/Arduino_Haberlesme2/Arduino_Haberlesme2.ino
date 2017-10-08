int led = 6;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    String gelen = Serial.read();
    if(gelen == '1'){
      digitalWrite(led, HIGH);
    }
    else if (gelen == '0'){
      digitalWrite(led, LOW);
    }
  }
}