int pin = A0;

void setup() {
    Serial.begin(9600);
}

void loop() {
    int sensorDegeri = analogRead(pin);
    Serial.println(sensorDegeri);
    delay(10);
}