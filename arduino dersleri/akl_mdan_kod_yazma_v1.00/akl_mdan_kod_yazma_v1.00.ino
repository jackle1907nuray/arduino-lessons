int but1 = 2 ;
int but2 = 3 ;
int but3 = 4 ;
int but4 = 5 ;
int but5 = 6 ;

int led1 = 8;
int led2 = 9 ;
int led3 = 10 ;
int led4 = 11 ;
int led5 = 12 ;

int b1d ;
int b2d ;
int b3d ;
int b4d ;
int b5d ;

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
  digitalWrite(led4, OUTPUT);
  digitalWrite(led5, OUTPUT);

}

void loop() 
{
  b1d = digitalRead(but1);
  b2d = digitalRead(but2);
  b3d = digitalRead(but3);
  b4d = digitalRead(but4);
  b5d = digitalRead(but5);

  if(b1d == HIGH)//buton 1e basılmışsa
  {
  digitalWrite(led1, HIGH);
  delay(100);
  digitalWrite(led2, HIGH);
  delay(100);
  digitalWrite(led3, HIGH);
  delay(100);
  digitalWrite(led4, HIGH);
  delay(100);
  digitalWrite(led5, HIGH);
  delay(250);
  digitalWrite(led5, LOW);
  delay(100);
  digitalWrite(led4, LOW);
  delay(100);
  digitalWrite(led3, LOW);
  delay(100);
  digitalWrite(led2, LOW);
  delay(100);
  digitalWrite(led1, LOW);
  delay(250);
  
  }
  else if (b2d == HIGH)// buton 2 ye basılmışsa
  {
  digitalWrite(led1, HIGH);
  delay(100);
  digitalWrite(led2, LOW);
  delay(100);
  digitalWrite(led3, HIGH);
  delay(100);
  digitalWrite(led4, LOW);
  delay(100);
  digitalWrite(led5, HIGH);
  delay(500);
  digitalWrite(led5, LOW);
  delay(100);
  digitalWrite(led4, HIGH);
  delay(100);
  digitalWrite(led3, LOW);
  delay(100);
  digitalWrite(led2, HIGH);
  delay(100);
  digitalWrite(led1, LOW);
  delay(250);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  delay(150);
  
  }
  else if (b3d == HIGH )//buton 3 ye basılmışsa
  {
  digitalWrite(led1, HIGH);
  digitalWrite(led5, HIGH);
  delay(200);
  digitalWrite(led1, LOW);
  digitalWrite(led5, LOW);
  delay(300);
  digitalWrite(led2, HIGH);
  digitalWrite(led4, HIGH);
  delay(200);
  digitalWrite(led2, LOW);
  digitalWrite(led4, LOW);
  delay(300);
  digitalWrite(led3, HIGH);
  delay(200);
  digitalWrite(led3, LOW);
  delay(300);
  }
  else if (b4d == HIGH )//buton42 ye basılmışsa
  { 
  digitalWrite(led1, HIGH);
  delay(250);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(250);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(250);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(250);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(250);
  digitalWrite(led5, LOW);
  }
  else if (b5d == HIGH)//buton 5 ye basılmışsa
  {
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  delay(250);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  delay(250);
  }
  else if ( (b5d == HIGH) && (b1d == HIGH) )//b1d ve b5d y ikapatıp atarsan çalışıyor , buton 1 ve buton 5 ye basılmışsa ye basılmışsa 
  {
     digitalWrite(led3, HIGH);
     delay(200);
     digitalWrite(led3, LOW);
     delay(300);
     digitalWrite(led2, HIGH);
     digitalWrite(led4, HIGH);
     delay(200);
     digitalWrite(led2, LOW);
     digitalWrite(led4, LOW);
     delay(300);
     digitalWrite(led1, HIGH);
     digitalWrite(led5, HIGH);
     delay(200);
     digitalWrite(led1, LOW);
     digitalWrite(led5, LOW);
     delay(300);   
  }
  else
  {
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  }
  

}
