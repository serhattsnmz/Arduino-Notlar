#define segA 2
#define segB 3
#define segC 4
#define segD 5
#define segE 6
#define segF 7
#define segG 8

int butonPin = 12;
int buton_durumu = 0;
int sayac = 0; //count integer for 0-9 increment


void setup()
{
  for (int i = 2; i < 9; i++) // int 2,3,4,5,6,7,8;
  {
    pinMode(i, OUTPUT);// taking all pins from 2-8 as output
  }
  pinMode(butonPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  buton_durumu = digitalRead(butonPin);
  if (buton_durumu == HIGH) {
    sayac++;

    //delay(20);
  }

 while (buton_durumu == HIGH) {
    buton_durumu = digitalRead(butonPin);
  }
  delay(20);

  switch (sayac)
  {

    case 0://when count value is zero show”0” on disp
      digitalWrite(segA, HIGH);
      digitalWrite(segB, HIGH);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, HIGH);
      digitalWrite(segE, HIGH);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, LOW);
      Serial.println("0");

      break;

    case 1:// when count value is 1 show”1” on disp
      digitalWrite(segA, LOW);
      digitalWrite(segB, HIGH);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, LOW);
      digitalWrite(segE, LOW);
      digitalWrite(segF, LOW);
      digitalWrite(segG, LOW);

      Serial.println("1");

      break;

    case 2:// when count value is 2 show”2” on disp
      digitalWrite(segA, HIGH);
      digitalWrite(segB, HIGH);
      digitalWrite(segC, LOW);
      digitalWrite(segD, HIGH);
      digitalWrite(segE, HIGH);
      digitalWrite(segF, LOW);
      digitalWrite(segG, HIGH);
      Serial.println("2");

      break;

    case 3:// when count value is 3 show”3” on disp
      digitalWrite(segA, HIGH);
      digitalWrite(segB, HIGH);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, HIGH);
      digitalWrite(segE, LOW);
      digitalWrite(segF, LOW);
      digitalWrite(segG, HIGH);
      Serial.println("3");

      break;

    case 4:// when count value is 4 show”4” on disp
      digitalWrite(segA, LOW);
      digitalWrite(segB, HIGH);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, LOW);
      digitalWrite(segE, LOW);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, HIGH);
      Serial.println("4");

      break;

    case 5:// when count value is 5 show”5” on disp
      digitalWrite(segA, HIGH);
      digitalWrite(segB, LOW);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, HIGH);
      digitalWrite(segE, LOW);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, HIGH);
      Serial.println("5");
      break;

    case 6:// when count value is 6 show”6” on disp
      digitalWrite(segA, HIGH);
      digitalWrite(segB, LOW);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, HIGH);
      digitalWrite(segE, HIGH);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, HIGH);
      Serial.println("6");

      break;

    case 7:// when count value is 7 show”7” on disp
      digitalWrite(segA, HIGH);
      digitalWrite(segB, HIGH);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, LOW);
      digitalWrite(segE, LOW);
      digitalWrite(segF, LOW);
      digitalWrite(segG, LOW);
      Serial.println("7");

      break;

    case 8:// when count value is 8 show”8” on disp
      digitalWrite(segA, HIGH);
      digitalWrite(segB, HIGH);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, HIGH);
      digitalWrite(segE, HIGH);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, HIGH);
      Serial.println("8");

      break;

    case 9:// when count value is 9 show”9” on disp
      digitalWrite(segA, HIGH);
      digitalWrite(segB, HIGH);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, HIGH);
      digitalWrite(segE, LOW);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, HIGH);
      Serial.println("9");

      break;

    default:
      Serial.println("default");
      sayac = 0;
      break;
  }





}

