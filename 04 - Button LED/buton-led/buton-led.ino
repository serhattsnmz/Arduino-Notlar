int buton = 9;     // butonun bağlandığı pin
int led =  13;      // ledin bağladığı pin dahili pin ile beraber çalışır

// durumu değişecek değişken tanımı
int butonDurumu = 0;         // buton durumu 0 olarak bağlayacak

void setup() {
  // led pinini çıkış olarak ayarlıyoruz
  pinMode(led, OUTPUT);      
  // buton pinini giriş olarak kuruyoruz
  pinMode(buton, INPUT);     
}

void loop(){
  // buton durumunu okuyoruz
  butonDurumu = digitalRead(buton);

  // butonun basılı olup olmadığını kontrol ediyoruz
  // eğer basılı ise 
  if (butonDurumu == HIGH) {     
    // led yanıyor   
    digitalWrite(led, HIGH);  
    //delay(10);
  } 
  // basılı değilse
  else {
    // led kapalı
    digitalWrite(led, LOW); 
  }
}

