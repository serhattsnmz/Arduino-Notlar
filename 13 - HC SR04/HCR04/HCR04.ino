int  trigPin = 13;
int  echoPin  = 12;
int led1 = 7;
int led2 = 8;
int led3 = 9;

void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  long sure, uzaklik;
  digitalWrite(trigPin, LOW);  
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
  sure = pulseIn(echoPin, HIGH);

  uzaklik = (sure/2) / 29.1;

  if (uzaklik >= 200 || uzaklik <= 0){
    Serial.println("Olamaz, Olaamaaaz");
  }
  else {
    Serial.print(uzaklik);
    Serial.println(" cm");
  }

  if(uzaklik >0 && uzaklik <= 50){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
  else if (uzaklik >50 && uzaklik <= 100){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
  }
  else if(uzaklik >100 && uzaklik <= 200){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
  }
  else{
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
  
  delay(500);
}



