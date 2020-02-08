#include <virtuabotixRTC.h>

virtuabotixRTC saat(6,7,8);
 int pina=13;
 int pinb=12;
 int pinc=11;
 int pind=10;
 int pine=9;
 int pinf=5;
 int ping=4;
 int seg1=A2;
 int seg2=A1;
 int seg3=2;
 int seg4=3;
 int dotp=A4;
 int dotn=A5;

void setup() 
{
  Serial.begin(9600);
  pinMode(pina,OUTPUT);
  pinMode(pinb,OUTPUT);
  pinMode(pinc,OUTPUT);
  pinMode(pind,OUTPUT);
  pinMode(pine,OUTPUT);
  pinMode(pinf,OUTPUT);
  pinMode(seg1,OUTPUT);
  pinMode(seg2,OUTPUT);
  pinMode(seg3,OUTPUT);
  pinMode(seg4,OUTPUT);
  pinMode(ping,OUTPUT);
  pinMode(dotp,OUTPUT);
  pinMode(dotn,OUTPUT);

}

void loop() 
{
  saat.updateTime();
 
  digitalWrite(seg1, LOW);
  digitalWrite(seg2, LOW);
  digitalWrite(seg3, LOW);
  digitalWrite(seg4, LOW);
 
  



   if (saat.hours == 01)
  { 
    digitalWrite(seg3,HIGH);
    bir();
    delay(1);
    digitalWrite(seg3,LOW);
   
    digitalWrite(seg4,HIGH);
    sifir();
    delay(1);
    digitalWrite(seg4,LOW);

    dakika ();
     nokta ();


  }
  else if (saat.hours == 02)
  {
    digitalWrite(seg3,HIGH);
    iki ();
    delay(1);
    digitalWrite(seg3,LOW);
   
    digitalWrite(seg4,HIGH);
    sifir();
    delay(1);
    digitalWrite(seg4,LOW);

    dakika ();
     nokta ();

  }
  else if (saat.hours == 03)
  {
    digitalWrite(seg3,HIGH);
    uc ();
    delay(1);
    digitalWrite(seg3,LOW);
   
    digitalWrite(seg4,HIGH);
    sifir();
    delay(1);
    digitalWrite(seg4,LOW);

    dakika ();
     nokta ();

  }
  else if (saat.hours == 04)
  {
    digitalWrite(seg3,HIGH);
    dort ();
    delay(1);
    digitalWrite(seg3,LOW);
  
    digitalWrite(seg4,HIGH);
    sifir();
    delay(1);
    digitalWrite(seg4,LOW);

    dakika ();
     nokta ();

  }
  else if (saat.hours == 05)
  {
    digitalWrite(seg3,HIGH);
    bes ();
    delay(1);
    digitalWrite(seg3,LOW);
  
    digitalWrite(seg4,HIGH);
    sifir();
    delay(1);
    digitalWrite(seg4,LOW);

    dakika ();
    nokta ();
  }
  else  if (saat.hours == 06)
  {
    digitalWrite(seg3,HIGH);
    alti ();
    delay(1);
    digitalWrite(seg3,LOW);

    digitalWrite(seg4,HIGH);
    sifir();
    delay(1);
    digitalWrite(seg4,LOW);

    dakika ();
    nokta ();
  }
  else if (saat.hours == 07)
  {
    digitalWrite(seg3,HIGH);
    yedi ();
    delay(1);
    digitalWrite(seg3,LOW);

    digitalWrite(seg4,HIGH);
    sifir();
    delay(1);
    digitalWrite(seg4,LOW);

    dakika ();
    nokta ();
  }

  else if (saat.hours == 8)
  {
    digitalWrite(seg3,HIGH);
    sekiz ();
    delay(1);
    digitalWrite(seg3,LOW);

    digitalWrite(seg4,HIGH);
    sifir();
    delay(1);
    digitalWrite(seg4,LOW);

    dakika ();
    nokta ();
  }

  else if (saat.hours == 9)
  {
    digitalWrite(seg3,HIGH);
    dokuz ();
    delay(1);
    digitalWrite(seg3,LOW);

    digitalWrite(seg4,HIGH);
    sifir();
    delay(1);
    digitalWrite(seg4,LOW);

    dakika ();
    nokta ();
  }
  else if (saat.hours == 10)
  {
    digitalWrite(seg3,HIGH);
    sifir();
    delay(1);
    digitalWrite(seg3,LOW);

    digitalWrite(seg4,HIGH);
    bir();
    delay(1);
    digitalWrite(seg4,LOW);

    dakika ();
    nokta ();
  }
  else if (saat.hours == 11)
  {
    digitalWrite(seg3,HIGH);
    bir();
    delay(1);
    digitalWrite(seg3,LOW);

    digitalWrite(seg4,HIGH);
    bir();
    delay(1);
    digitalWrite(seg4,LOW);

    dakika ();
    nokta ();
  }
  else if (saat.hours == 12)
  {
    digitalWrite(seg3,HIGH);
    iki();
    delay(1);
    digitalWrite(seg3,LOW);

    digitalWrite(seg4,HIGH);
    bir();
    delay(1);
    digitalWrite(seg4,LOW);

    dakika ();
    nokta ();
  }
  else if (saat.hours == 13)
  {
    digitalWrite(seg3,HIGH);
    uc();
    delay(1);
    digitalWrite(seg3,LOW);

    digitalWrite(seg4,HIGH);
    bir();
    delay(1);
    digitalWrite(seg4,LOW);

    dakika ();
    nokta ();
  }
  else if (saat.hours == 14)
  {
    digitalWrite(seg3,HIGH);
    dort();
    delay(1);
    digitalWrite(seg3,LOW);

    digitalWrite(seg4,HIGH);
    bir();
    delay(1);
    digitalWrite(seg4,LOW);

    dakika ();
    nokta ();
  }
  else if (saat.hours == 15)
  {
    digitalWrite(seg3,HIGH);
    bes();
    delay(1);
    digitalWrite(seg3,LOW);

    digitalWrite(seg4,HIGH);
    bir();
    delay(1);
    digitalWrite(seg4,LOW);

    dakika ();
    nokta ();
  }
  else if (saat.hours == 16)
  {
    digitalWrite(seg3,HIGH);
    alti();
    delay(1);
    digitalWrite(seg3,LOW);

    digitalWrite(seg4,HIGH);
    bir();
    delay(1);
    digitalWrite(seg4,LOW);

    dakika ();
    nokta ();
  }
  else if (saat.hours == 17)
  {
    digitalWrite(seg3,HIGH);
    yedi();
    delay(1);
    digitalWrite(seg3,LOW);

    digitalWrite(seg4,HIGH);
    bir();
    delay(1);
    digitalWrite(seg4,LOW);

    dakika ();
    nokta ();
  }
  else if (saat.hours == 18)
  {
    digitalWrite(seg3,HIGH);
    sekiz();
    delay(1);
    digitalWrite(seg3,LOW);

    digitalWrite(seg4,HIGH);
    bir();
    delay(1);
    digitalWrite(seg4,LOW);

    dakika ();
    nokta ();
  }
  else if (saat.hours == 19)
  {
    digitalWrite(seg3,HIGH);
    dokuz();
    delay(1);
    digitalWrite(seg3,LOW);

    digitalWrite(seg4,HIGH);
    bir();
    delay(1);
    digitalWrite(seg4,LOW);

    dakika ();
    nokta ();
  }
  else if (saat.hours == 20)
  {
    digitalWrite(seg3,HIGH);
    sifir();
    delay(1);
    digitalWrite(seg3,LOW);

    digitalWrite(seg4,HIGH);
    iki();
    delay(1);
    digitalWrite(seg4,LOW);

    dakika ();
    nokta ();
  }
  else if (saat.hours == 21)
  {
    digitalWrite(seg3,HIGH);
    bir();
    delay(1);
    digitalWrite(seg3,LOW);

    digitalWrite(seg4,HIGH);
    iki();
    delay(1);
    digitalWrite(seg4,LOW);

    dakika ();
    nokta ();
  }
  else if (saat.hours == 22)
  {
    digitalWrite(seg3,HIGH);
    iki();
    delay(1);
    digitalWrite(seg3,LOW);

    digitalWrite(seg4,HIGH);
    iki();
    delay(1);
    digitalWrite(seg4,LOW);

    dakika ();
    nokta ();
  }
  else if (saat.hours == 23)
  {
    digitalWrite(seg3,HIGH);
    uc();
    delay(1);
    digitalWrite(seg3,LOW);

    digitalWrite(seg4,HIGH);
    iki();
    delay(1);
    digitalWrite(seg4,LOW);

    dakika ();
    nokta ();
  }
  else
  {
    digitalWrite(seg3,HIGH);
    sifir();
    delay(1);
    digitalWrite(seg3,LOW);

    digitalWrite(seg4,HIGH);
    sifir();
    delay(1);
    digitalWrite(seg4,LOW);

    dakika ();
    nokta ();
  }
  
  
}

void dakika ()
{
  saat.updateTime();

  Serial.print(saat.hours);
  Serial.println(saat.minutes);
  delay(1);

  
    if (saat.minutes == 1)
 {
  digitalWrite (seg1,HIGH);
  bir();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  sifir();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 2)
 {
  digitalWrite (seg1,HIGH);
  iki();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  sifir();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 3)
 {
  digitalWrite (seg1,HIGH);
  uc();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  sifir();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 4)
 {
  digitalWrite (seg1,HIGH);
  dort();
  delay(1);
  digitalWrite (seg1,LOW);


  digitalWrite (seg2,HIGH);
  sifir();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 5)
 {
  digitalWrite (seg1,HIGH);
  bes();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  sifir();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 6)
 {
  digitalWrite (seg1,HIGH);
  alti();
  delay(1);
  digitalWrite (seg1,LOW);


  digitalWrite (seg2,HIGH);
  sifir();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 7)
 {
  digitalWrite (seg1,HIGH);
  yedi();
  delay(1);
  digitalWrite (seg1,LOW);


  digitalWrite (seg2,HIGH);
  sifir();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 8)
 {
  digitalWrite (seg1,HIGH);
  sekiz();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  sifir();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 9)
 {
  digitalWrite (seg1,HIGH);
  dokuz();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  sifir();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 10)
 {
  digitalWrite (seg1,HIGH);
  sifir();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  bir();
  delay(1);
  digitalWrite (seg2,LOW);
  }
  else if (saat.minutes == 11)
 {
  digitalWrite (seg1,HIGH);
  bir();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  bir();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 12)
 {
  digitalWrite (seg1,HIGH);
  iki();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  bir();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 13)
 {
  digitalWrite (seg1,HIGH);
  uc();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  bir();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 14)
 {
  digitalWrite (seg1,HIGH);
  dort();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  bir();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 15)
 {
  digitalWrite (seg1,HIGH);
  bes();
  delay(1);
  digitalWrite (seg1,LOW);


  digitalWrite (seg2,HIGH);
  bir();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 16)
 {
  digitalWrite (seg1,HIGH);
  alti();
  delay(1);
  digitalWrite (seg1,LOW);


  digitalWrite (seg2,HIGH);
  bir();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 17)
 {
  digitalWrite (seg1,HIGH);
  yedi();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  bir();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 18)
 {
  digitalWrite (seg1,HIGH);
  sekiz();
  delay(1);
  digitalWrite (seg1,LOW);


  digitalWrite (seg2,HIGH);
  bir();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 19)
 {
  digitalWrite (seg1,HIGH);
  dokuz();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  bir();
  delay(1);
  digitalWrite (seg2,LOW);
  }
  else if (saat.minutes == 20)
 {
  digitalWrite (seg1,HIGH);
  sifir();
  delay(1);
  digitalWrite (seg1,LOW);


  digitalWrite (seg2,HIGH);
  iki();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 21)
 {
  digitalWrite (seg1,HIGH);
  bir();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  iki();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 22)
 {
  digitalWrite (seg1,HIGH);
  iki();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  iki();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 23)
 {
  digitalWrite (seg1,HIGH);
  uc();
  delay(1);
  digitalWrite (seg1,LOW);
  
 
  digitalWrite (seg2,HIGH);
  iki();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 24)
 {
  digitalWrite (seg1,HIGH);
  dort();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  iki();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 25)
 {
  digitalWrite (seg1,HIGH);
  bes();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  iki();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 26)
 {
  digitalWrite (seg1,HIGH);
  alti();
  delay(1);
  digitalWrite (seg1,LOW);


  digitalWrite (seg2,HIGH);
  iki();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 27)
 {
  digitalWrite (seg1,HIGH);
  yedi();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  iki();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 28)
 {
  digitalWrite (seg1,HIGH);
  sekiz();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  iki();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 29)
 {
  digitalWrite (seg1,HIGH);
  dokuz();
  delay(1);
  digitalWrite (seg1,LOW);


  digitalWrite (seg2,HIGH);
  iki();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 30)
 {
  digitalWrite (seg1,HIGH);
  sifir();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  uc();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 31)
 {
  digitalWrite (seg1,HIGH);
  bir();
  delay(1);
  digitalWrite (seg1,LOW);


  digitalWrite (seg2,HIGH);
  uc();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 32)
 {
  digitalWrite (seg1,HIGH);
  iki();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  uc();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 33)
 {
  digitalWrite (seg1,HIGH);
  uc();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  uc();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 34)
 {
  digitalWrite (seg1,HIGH);
  dort();
  delay(1);
  digitalWrite (seg1,LOW);
  
 
  digitalWrite (seg2,HIGH);
  uc();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 35)
 {
  digitalWrite (seg1,HIGH);
  bes();
  delay(1);
  digitalWrite (seg1,LOW);


  digitalWrite (seg2,HIGH);
  uc();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 36)
 {
  digitalWrite (seg1,HIGH);
  alti();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  uc();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 37)
 {
  digitalWrite (seg1,HIGH);
  yedi();
  delay(1);
  digitalWrite (seg1,LOW);


  digitalWrite (seg2,HIGH);
  uc();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 38)
 {
  digitalWrite (seg1,HIGH);
  sekiz();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  uc();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 39)
 {
  digitalWrite (seg1,HIGH);
  dokuz();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  uc();
  delay(1);
  digitalWrite (seg2,LOW);
  }

   else if (saat.minutes == 40)
 {
  digitalWrite (seg1,HIGH);
  sifir();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  dort();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 41)
 {
  digitalWrite (seg1,HIGH);
  bir();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  dort();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 42)
 {
  digitalWrite (seg1,HIGH);
  iki();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  dort();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 43)
 {
  digitalWrite (seg1,HIGH);
  uc();
  delay(1);
  digitalWrite (seg1,LOW);


  digitalWrite (seg2,HIGH);
  dort();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 44)
 {
  digitalWrite (seg1,HIGH);
  dort();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  dort();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 45)
 {
  digitalWrite (seg1,HIGH);
  bes();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  dort();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 46)
 {
  digitalWrite (seg1,HIGH);
  alti();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  dort();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 47)
 {
  digitalWrite (seg1,HIGH);
  yedi();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  dort();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 48)
 {
  digitalWrite (seg1,HIGH);
  sekiz();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  dort();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 49)
 {
  digitalWrite (seg1,HIGH);
  dokuz();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  dort();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 50)
 {
  digitalWrite (seg1,HIGH);
  sifir();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  bes();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 51)
 {
  digitalWrite (seg1,HIGH);
  bir();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  bes();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 52)
 {
  digitalWrite (seg1,HIGH);
  iki();
  delay(1);
  digitalWrite (seg1,LOW);


  digitalWrite (seg2,HIGH);
  bes();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 53)
 {
  digitalWrite (seg1,HIGH);
  uc();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  bes();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 54)
 {
  digitalWrite (seg1,HIGH);
  dort();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  bes();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 55)
 {
  digitalWrite (seg1,HIGH);
  bes();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  bes();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 56)
 {
  digitalWrite (seg1,HIGH);
  alti();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  bes();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 57)
 {
  digitalWrite (seg1,HIGH);
  yedi();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  bes();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 58)
 {
  digitalWrite (seg1,HIGH);
  sekiz();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  bes();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else if (saat.minutes == 59)
 {
  digitalWrite (seg1,HIGH);
  dokuz();
  delay(1);
  digitalWrite (seg1,LOW);
  


  digitalWrite (seg2,HIGH);
  bes();
  delay(1);
  digitalWrite (seg2,LOW);
  }

  else
  {
  digitalWrite (seg1,HIGH);
  sifir();
  delay(1);
  digitalWrite (seg1,LOW);
  

  digitalWrite (seg2,HIGH);
  sifir();
  delay(1);
  digitalWrite (seg2,LOW);
  }
 



}

void bir()
{
 digitalWrite(pina,HIGH);
 digitalWrite(pinb,LOW);
 digitalWrite(pinc,LOW);
 digitalWrite(pind,HIGH);
 digitalWrite(pine,HIGH);
 digitalWrite(pinf,HIGH);
 digitalWrite(ping,HIGH);
}

void iki ()
{
 digitalWrite(pina,LOW);
 digitalWrite(pinb,LOW);
 digitalWrite(pinc,HIGH);
 digitalWrite(pind,LOW);
 digitalWrite(pine,LOW);
 digitalWrite(pinf,HIGH);
 digitalWrite(ping,LOW);
}

void uc ()
{
 digitalWrite(pina,LOW);
 digitalWrite(pinb,LOW);
 digitalWrite(pinc,LOW);
 digitalWrite(pind,LOW);
 digitalWrite(pine,HIGH);
 digitalWrite(pinf,HIGH);
 digitalWrite(ping,LOW);
}

void dort ()
{
 digitalWrite(pina,HIGH);
 digitalWrite(pinb,LOW);
 digitalWrite(pinc,LOW);
 digitalWrite(pind,HIGH);
 digitalWrite(pine,HIGH);
 digitalWrite(pinf,LOW);
 digitalWrite(ping,LOW);
}

void bes()
{
 digitalWrite(pina,LOW);
 digitalWrite(pinb,HIGH);
 digitalWrite(pinc,LOW);
 digitalWrite(pind,LOW);
 digitalWrite(pine,HIGH);
 digitalWrite(pinf,LOW);
 digitalWrite(ping,LOW);
}

void alti()
{
 digitalWrite(pina,HIGH);
 digitalWrite(pinb,HIGH);
 digitalWrite(pinc,LOW);
 digitalWrite(pind,LOW);
 digitalWrite(pine,LOW);
 digitalWrite(pinf,LOW);
 digitalWrite(ping,LOW);

}

void yedi()
{
 digitalWrite(pina,LOW);
 digitalWrite(pinb,LOW);
 digitalWrite(pinc,LOW);
 digitalWrite(pind,HIGH);
 digitalWrite(pine,HIGH);
 digitalWrite(pinf,HIGH);
 digitalWrite(ping,HIGH);
}

void sekiz()
{
 digitalWrite(pina,LOW);
 digitalWrite(pinb,LOW);
 digitalWrite(pinc,LOW);
 digitalWrite(pind,LOW);
 digitalWrite(pine,LOW);
 digitalWrite(pinf,LOW);
 digitalWrite(ping,LOW);
}

void dokuz()
{
 digitalWrite(pina,LOW);
 digitalWrite(pinb,LOW);
 digitalWrite(pinc,LOW);
 digitalWrite(pind,HIGH);
 digitalWrite(pine,HIGH);
 digitalWrite(pinf,LOW);
 digitalWrite(ping,LOW);
}

void sifir()
{
 
 digitalWrite(pina,LOW);
 digitalWrite(pinb,LOW);
 digitalWrite(pinc,LOW);
 digitalWrite(pind,LOW);
 digitalWrite(pine,LOW);
 digitalWrite(pinf,LOW);
 digitalWrite(ping,HIGH);
}

void nokta ()
{
  digitalWrite(dotp,HIGH);
  digitalWrite(dotn,LOW);
  delay(1);
  digitalWrite(dotp,LOW);
  digitalWrite(dotn,HIGH);
}
