int pin = A0;
int led = 8;

void setup() {
    pinMode(pin, INPUT);
    pinMode(led, OUTPUT);
}

void loop() {
    int gelenDeger = analogRead(pin);
    int ledDrurum = digitalRead(led);
    if(gelenDeger == HIGH) {
        digitalWrite(led, !ledDrurum);
    }
    delay(200);
}
