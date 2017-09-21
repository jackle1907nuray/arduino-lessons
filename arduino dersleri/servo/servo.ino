#include<Servo.h>
Servo sg90;

void setup() 
{
  sg90.attach(3);
  Serial.begin(9600);

}

void loop() 
{
 sg90.write(0); 

}
