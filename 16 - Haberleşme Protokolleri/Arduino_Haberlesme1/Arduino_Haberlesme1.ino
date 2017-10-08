int led = 6;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    Serial.print(Serial.readString());
  }
}