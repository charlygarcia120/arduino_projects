//contador de pulsos en arduino, usando antirebote por software
//Descripcion: http://elartedepilotearunnavio.blogspot.com/2015/11/contador-de-pulsos-usando-antirebote.html
//Imagen: http://2.bp.blogspot.com/-N8exodjZ3tI/VlDp_gduFJI/AAAAAAAAB4w/C5nqcN64NxE/s1600/pulsador1.jpg

int contador=0,anterior,actual;

void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(7,INPUT_PULLUP);  
  Serial.begin(9600);
}

void loop() {
  anterior=digitalRead(7);
  delay(1);
  actual=digitalRead(7);
  if((anterior==0)&&(actual==1))
  {
     digitalWrite(13,HIGH);
     contador=contador+1;
     Serial.println(contador);
     seguro=1;
    
  } 
}
Public
