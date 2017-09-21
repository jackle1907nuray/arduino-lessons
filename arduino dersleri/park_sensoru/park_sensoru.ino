const int trigger_pin = 12 ;
const int echo_pin = 11;
const int buzzer = 2;
const int mled = 3;
const int yled = 4;
const int sled = 5; 
const int kled = 6;

int sure ;
int mesafe ;

void setup() 
{
  pinMode(kled, OUTPUT);
  pinMode(sled, OUTPUT);
  pinMode(mled, OUTPUT);
  pinMode(yled, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(trigger_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
  Serial.begin(9600);

}

void loop() 
{
  digitalWrite(trigger_pin , HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigger_pin , LOW);
  sure = pulseIn(echo_pin ,HIGH);
  mesafe = (sure/2) / 29.1;
  Serial.println(mesafe);

  if (mesafe <= 30)
{
  digitalWrite( kled , HIGH);
  digitalWrite( buzzer , HIGH);
  delay(50);
  digitalWrite( kled , LOW);
  digitalWrite( buzzer , LOW);
  delay(200);
}
else if( mesafe <=50)
{
  digitalWrite( sled ,HIGH);
  digitalWrite( buzzer , HIGH);
  delay(50);
  digitalWrite( sled , LOW);
  digitalWrite( buzzer , LOW);
  delay(400); 
}
else if(mesafe <= 75)
{
  digitalWrite( yled ,HIGH);
  digitalWrite( buzzer , HIGH);
  delay(50);
  digitalWrite( yled , LOW);
  digitalWrite( buzzer , LOW);
  delay(600);  
}
else
{
  digitalWrite( mled ,HIGH);
  delay(50);
  digitalWrite( yled , LOW);
  delay(100); 
}


}
