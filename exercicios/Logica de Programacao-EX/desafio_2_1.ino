int contador = 5;


void setup()
{
 Serial.begin(9600);
  
  for(int contador = 0; contador <= 100; contador += 5){  
    Serial.println(" numero " + String(contador));}
}
  
  void loop()
  {
    delay(3000);
  }
  

   

