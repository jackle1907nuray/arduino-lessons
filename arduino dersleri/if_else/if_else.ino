int but1 = 2;// buton pinlerini atadık
int but2 = 3;
int but3 = 4;
int but4 = 5;
int but5 = 6;

int led1 = 8;// Led pinlerini atadık
int led2 = 9;
int led3 = 10;

int b1d;// Buton 1 okunan değerini kaydetmemiz için b1d adında değişken atayoruz...ve diğerleri için
int b2d;
int b3d;
int b4d;
int b5d;


void setup() 
{
  digitalWrite(but1, INPUT);// Buton pinlerini giriş olarak atadık
  digitalWrite(but2, INPUT);
  digitalWrite(but3, INPUT);
  digitalWrite(but4, INPUT);
  digitalWrite(but5, INPUT);

  digitalWrite(led1, OUTPUT);// Led pinlerini çıkış olarak atadık
  digitalWrite(led2, OUTPUT);
  digitalWrite(led3, OUTPUT);
}

void loop() 
{
  b1d = digitalRead(but1);// butonları oku ve durum bilgilerini değişkenlere kaydet
  b2d = digitalRead(but2);
  b3d = digitalRead(but3);
  b4d = digitalRead(but4);
  b5d = digitalRead(but5);
  
  if(b1d == HIGH)
  digitalWrite(led1, HIGH);
   
  else if(b2d == HIGH)
  {
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  }
  
  else
  {
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  }
}
