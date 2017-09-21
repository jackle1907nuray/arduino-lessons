int led = 4;
int buton = 5;
int butondurumu; 

void setup() 
{
  pinMode(led, OUTPUT);
  pinMode(buton, INPUT); 


}

void loop() 
{
  butondurumu=digitalRead(buton);
  if(butondurumu == HIGH)
  digitalWrite(led, HIGH);
  else 
  digitalWrite(led, LOW);


}
