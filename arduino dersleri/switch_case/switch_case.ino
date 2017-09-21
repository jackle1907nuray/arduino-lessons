int sw = 4;  
int but1 = 3 ;
int but2 = 2;
int baba ;
int ana ;
int dede ; 
int led1 = 26;
int led2 = 27;
int led3 = 28;


void setup() 
{
  digitalWrite(sw, INPUT);
  digitalWrite(but1, INPUT);
  digitalWrite(but2, INPUT);
  digitalWrite(led1, OUTPUT);
  digitalWrite(led2, OUTPUT);
  digitalWrite(led3, OUTPUT);
  Serial.begin(9600); 
}

void loop() 
{

  baba = digitalRead(sw);
  ana = digitalRead(but1);
  dede = digitalRead(but2);
  Serial.println("*****************");
  Serial.print(baba);
  Serial.print(ana);
  Serial.print(dede);
  Serial.println("*****************");
  delay(500);
  
  
  
  if ( baba == HIGH && ana == HIGH && dede  == HIGH  )
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
     
  }
  else if (baba == HIGH && dede == HIGH )
  {
   digitalWrite(led1, LOW);
   digitalWrite(led2, HIGH); 
   digitalWrite(led3, LOW);
  }

  else
  {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW); 
  }
  
}
