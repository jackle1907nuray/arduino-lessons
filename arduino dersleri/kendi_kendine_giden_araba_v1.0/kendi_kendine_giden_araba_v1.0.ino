// ön sensor
const int trigger_pin1 = 2 ;
const int echo_pin1 = 3 ;
// sağ sensor 
const int trigger_pin2 = 4 ;
const int echo_pin2 = 5 ;
//sol 
const int trigger_pin3 = 6 ;
const int echo_pin3 = 7 ;
 // motor pinler
int motileri1 = 34;
int motgeri1 = 35;
int motileri2 = 36;
int motgeri2 = 37;
 

 int sure1;
 int mesafe1;
 int sure2;
 int mesafe2;
 int sure3;
 int mesafe3;

void setup() 
{  
  pinMode(trigger_pin1, OUTPUT);
  pinMode(echo_pin1, INPUT);
  pinMode(trigger_pin2, OUTPUT);
  pinMode(echo_pin2, INPUT);
  pinMode(trigger_pin3, OUTPUT);
  pinMode(echo_pin3, INPUT);
  Serial.begin(9600); 
}

void loop() 
{
  // ön sensor değer hesaplaması
  digitalWrite(trigger_pin1 , HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigger_pin1 , LOW);
  sure1 = pulseIn(echo_pin1 ,HIGH);
  mesafe1 = (sure1/2) / 29.1;
  Serial.println("********************");
  Serial.println(mesafe1);
  Serial.println("********************");
  //sağ sensor mesafe hesaplaması
  digitalWrite(trigger_pin2 , HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigger_pin2 , LOW);
  sure2 = pulseIn(echo_pin2 ,HIGH);
  mesafe2 = (sure2/2) / 29.1;
  Serial.println("********************");
  Serial.println(mesafe2);
  Serial.println("********************");
  //sol sensor mesafe hesaplamsı 
  digitalWrite(trigger_pin3 , HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigger_pin3 , LOW);
  sure3 = pulseIn(echo_pin3 ,HIGH);
  mesafe3 = (sure3/2) / 29.1;
  Serial.println("********************");
  Serial.println(mesafe3);
  Serial.println("********************");
  Serial.println("bitti");

  if(mesafe1 > 30 && mesafe2 > 30 && mesafe3 > 30 ) 
  {
    digitalWrite(motileri1, HIGH);
    digitalWrite(motileri2, HIGH);
  }
  else if (mesafe1 > 30 && mesafe2 <30 && mesafe3 > 30  )
  {
    digitalWrite (motileri1, HIGH);
    digitalWrite (motgeri2, HIGH);
  }
  else if (mesafe1 > 30 && mesafe2  > 30 && mesafe3 < 30 )
  {
    digitalWrite(motgeri1, HIGH);
    digitalWrite(motileri2, HIGH);
  }
  else if (mesafe1 < 30 &&  mesafe2 <30 && mesafe3 > 30 )
  {
    digitalWrite(motileri1 , HIGH);
    digitalWrite(motgeri2, HIGH);  
  }
  else if (mesafe1 < 30 &&  mesafe2 >30 && mesafe3 < 30 )
  {
    digitalWrite(motgeri1 , HIGH);
    digitalWrite(motileri2, HIGH);  
  }
  else if (mesafe1 < 30 &&  mesafe2 <30 && mesafe3 < 30)
  {
    digitalWrite(motgeri1, HIGH);
    digitalWrite(motgeri2, HIGH);
    
  }

  }




  


