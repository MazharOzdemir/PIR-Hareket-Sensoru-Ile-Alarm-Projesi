//PIR Hareket Sensörü İle Alarm Projesi
//Pin atamalarını yapıyoruz
//Yesil ve kirmizi ledlerimizi 3 ve 4. digital pinlere takıyoruz.

const int yesil=3;
const int kirmizi=4;

//PIR sensörümüzü 2. digital pine takıyoruz.

const int sensor=2;

//Buzzer'ı 5. pine takıyoruz.

const int buzzer=5;

//Alarm çaldığında kapatmak için devreye bir düğme bağlıyoruz.
const int dugme=6;




void setup() {
  //Pin Modlarımızı ayarlıyoruz
  pinMode(yesil,OUTPUT);
  pinMode(kirmizi,OUTPUT);
  pinMode(sensor,INPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(dugme,INPUT);
}

void loop() {
  
  //if döngüsü ile Sensör hareket algıladığında yapacağı şeyleri tanımlıyoruz.

  if(digitalRead(sensor)==HIGH){

    digitalWrite(yesil,LOW);
    digitalWrite(kirmizi,HIGH);

    //while döngüsü ile alarmın ne kadar süre çalışacağını ayarlıyoruz.
    //Düğmeye basılana kadar alarm çalmaya devam edecek.

    while(digitalRead(dugme)==HIGH){

      //Buzzer'ı çalıştırıyoruz.

      digitalWrite(buzzer,HIGH);
      delay(300);
      digitalWrite(buzzer,LOW);
      delay(300);

    }

  }
  //Alarmın çalmadığı durumlarda ne olacağını ayarlıyoruz.

  else{

    digitalWrite(yesil,HIGH);
    digitalWrite(kirmizi,LOW);

  }
}
//Mazhar Enes Özdemir