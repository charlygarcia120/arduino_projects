int pul;

void setup() 
{
  pinMode(13,OUTPUT);
  pinMode(4,INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() 
{
  Serial.print("Pulsador= ");
  Serial.println(pul);
  delay(500);
  pul=digitalRead(4);
  if (pul==0 ) 
  {
    digitalWrite(13,0);
  }
  else
  {
    digitalWrite(13,1);    
  }
}
