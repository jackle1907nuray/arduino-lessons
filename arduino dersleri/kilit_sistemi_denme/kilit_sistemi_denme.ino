
// Arduino pins used for the LEDs
#define LED1 34
#define LED2 36
#define LED3 37


// Arduino pins used for the switches

#define S2 23
#define S3 24


// State of each switch (0 or 1)
int s1state;
int s2state;
int s3state;
int s4state;
int s5state;
int s6state;

int s1 = 22 ;

void setup() 
{
  // pins for LEDs are outputs
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);

  // pins for switches are inputs
  pinMode(s1, INPUT);
  pinMode(S2, INPUT);
  pinMode(S3, INPUT);
 
  // setup serial port
  Serial.begin(9600);
  Serial.println("Serial port open");
}

void loop() 
{
  s1state = digitalRead(s1);
  
 Serial.println(s1state);
}
