int mtr1_a = 3; // Sol Ön
int mtr1_b = 4; // Sol Arka
int mtr2_a = 5; // Sağ ön
int mtr2_b = 6; // Sağ arka

void setup() {
  pinMode(mtr1_a, OUTPUT);
  pinMode(mtr1_b, OUTPUT);
  pinMode(mtr2_a, OUTPUT);
  pinMode(mtr2_b, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available() > 0){
    
    String gelen = Serial.readString();
    
    if      (gelen == "2")
      ileri();
    else if (gelen == "8")
      geri();
    else if (gelen == "4")
      sol();
    else if (gelen == "6")
      sag();
    else if (gelen == "0")
      dur();
  }
}

void ileri(){
  digitalWrite(mtr1_a, 1);
  digitalWrite(mtr1_b, 0);
  digitalWrite(mtr2_a, 1);
  digitalWrite(mtr2_b, 0);
}
void geri(){
  digitalWrite(mtr1_a, 0);
  digitalWrite(mtr1_b, 1);
  digitalWrite(mtr2_a, 0);
  digitalWrite(mtr2_b, 1);
}
void dur(){
  digitalWrite(mtr1_a, 0);
  digitalWrite(mtr1_b, 0);
  digitalWrite(mtr2_a, 0);
  digitalWrite(mtr2_b, 0);
}
void sol(){
  digitalWrite(mtr1_a, 0);
  digitalWrite(mtr1_b, 0);
  digitalWrite(mtr2_a, 1);
  digitalWrite(mtr2_b, 0);
}
void sag(){
  digitalWrite(mtr1_a, 1);
  digitalWrite(mtr1_b, 0);
  digitalWrite(mtr2_a, 0);
  digitalWrite(mtr2_b, 0);
}

