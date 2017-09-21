/* PİNLER  
   buton 1 =22    trigger = 34 
   buton 2 =24    echo=36
   buton 3 =26    servo = 41 
   buton 4 =28
   buton 5 =30
   
 led1 = 2
 led2 = 3 
 led3 = 4 
 led4 = 5 
 led5 = 6 
 led6 = 7
 led7 = 8 
 led8 = 9 
 led9 = 10 

*/

#include<Servo.h>
Servo sg90;

int but1 = 22 ;
int but2 = 24 ;
int but3 = 26 ;
int but4 = 28 ;
int but5 = 30 ;

int led1 = 2;
int led2 = 3 ;
int led3 = 4 ;
int led4 = 5 ;
int led5 = 6 ; 
int led6 = 7;
int led7 = 8 ;
int led8 = 9 ;
int led9 = 10 ;

int b1d ;
int b2d ;
int b3d ;
int b4d ;
int b5d ;

const int trigger_pin = 34 ;
const int echo_pin = 36;

int sure ;
int mesafe ;

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
  digitalWrite(led6, OUTPUT);
  digitalWrite(led7, OUTPUT);
  digitalWrite(led8, OUTPUT);
  digitalWrite(led9, OUTPUT);
  
  pinMode(trigger_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
  sg90.attach(41);
  Serial.begin(9600);

}

void loop() 
{
  
  digitalWrite(trigger_pin , HIGH); // mesafe sensorunun ayarlatı 
  delayMicroseconds(1000);
  digitalWrite(trigger_pin , LOW);
  sure = pulseIn(echo_pin ,HIGH);
  mesafe = (sure/2) / 29.1;
  Serial.println(mesafe); //sensorun okuduğunu seri ekrana yazdırma  
  
  
  
  b1d = digitalRead(but1);
  b2d = digitalRead(but2);
  b3d = digitalRead(but3);
  b4d = digitalRead(but4);
  b5d = digitalRead(but5);
  
  if(b1d == HIGH)
  {
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);
  }
  else if (b2d == HIGH )
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
    delay(100);
    digitalWrite(led6, HIGH);
    delay(100);
    digitalWrite(led7, HIGH);
    delay(100);
    digitalWrite(led8, HIGH);
    delay(100);
    digitalWrite(led9, HIGH);
    delay(250);
    digitalWrite(led9, LOW);
    delay(100);
    digitalWrite(led8, LOW);
    delay(100);
    digitalWrite(led7, LOW);
    delay(100);
    digitalWrite(led6, LOW);
    delay(100);
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
  else if (b3d == HIGH )
  {
   digitalWrite(led1, HIGH );
   delay(150);
   digitalWrite(led3, HIGH);
   delay(150);
   digitalWrite(led5, HIGH );
   delay(150);
   digitalWrite(led7, HIGH );
   delay(150);
   digitalWrite(led9, HIGH);
   delay(250);
   digitalWrite(led2, HIGH);
   delay(150); 
   digitalWrite(led4, HIGH);
   delay(150); 
   digitalWrite(led6, HIGH);
   delay(150); 
   digitalWrite(led8, HIGH);
   delay(250);
   digitalWrite(led9, LOW);
   delay(150);
   digitalWrite(led8, LOW);
   delay(150);
   digitalWrite(led7, LOW);
   delay(150);
   digitalWrite(led6, LOW);
   delay(150);
   digitalWrite(led5, LOW);
   delay(150);
   digitalWrite(led4, LOW);
   delay(150);
   digitalWrite(led3, LOW);
   delay(150);
   digitalWrite(led2, LOW);
   delay(150);
   digitalWrite(led1, LOW);
   delay(200); 
  }
  
  else if (b4d == HIGH)
   
  {
  digitalWrite(led1, HIGH);
  digitalWrite(led9, HIGH);
  delay(150);
  digitalWrite(led1, LOW);
  digitalWrite(led9, LOW);
  delay(200);
  digitalWrite(led2, HIGH);
  digitalWrite(led8, HIGH);
  delay(150);
  digitalWrite(led2, LOW);
  digitalWrite(led8, LOW);
  delay(200);
  digitalWrite(led3, HIGH);
  digitalWrite(led7, HIGH);
  delay(150);
  digitalWrite(led3, LOW);
  digitalWrite(led7, LOW);
  delay(200);
  digitalWrite(led4, HIGH);
  digitalWrite(led6, HIGH);
  delay(150);
  digitalWrite(led4, LOW);
  digitalWrite(led6, LOW);
  delay(200);
  digitalWrite(led5, HIGH);
  delay(150);
  digitalWrite(led5, LOW);
  delay(200);
  }
  
  else if (b5d == HIGH)
  
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led7, HIGH);
    digitalWrite(led9, HIGH);
    delay(100);
    digitalWrite(led1, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led9, LOW);
    delay(100);
    digitalWrite(led2, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led8, HIGH);
    delay(100);
    digitalWrite(led2, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led8, LOW);
  }


  else if (mesafe <= 50 )
  
  {  
    sg90.write(0);
    delay(1000);
    sg90.write(180);
    delay(1000);
    sg90.write(0); 
       
    delay(500);
    digitalWrite(led1, HIGH);
    digitalWrite(led9, HIGH);
    delay(150);
    digitalWrite(led1, LOW);
    digitalWrite(led9, LOW);
    delay(200);
    digitalWrite(led2, HIGH);
    digitalWrite(led8, HIGH);
    delay(150);
    digitalWrite(led2, LOW);
    digitalWrite(led8, LOW);
    delay(200);
    digitalWrite(led3, HIGH);
    digitalWrite(led7, HIGH);
    delay(150);
    digitalWrite(led3, LOW);
    digitalWrite(led7, LOW);
    delay(200);
    digitalWrite(led4, HIGH);
    digitalWrite(led6, HIGH);
    delay(150);
    digitalWrite(led4, LOW);
    digitalWrite(led6, LOW);
    delay(200);
    digitalWrite(led5, HIGH);
    delay(150);
    digitalWrite(led5, LOW);
    delay(200);
  }
  
  else
  
  {
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  }





  
}
