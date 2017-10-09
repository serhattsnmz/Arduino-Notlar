int pin = A0;
int sayac = 0;

void setup() {
    pinMode(pin, INPUT);
    Serial.begin(9600);
}

void loop() {
    int gelenDeger = digitalRead(pin);
    if(gelenDeger == HIGH) {
        sayac++;
    }
    Serial.println(sayac);
    delay(20);
}
