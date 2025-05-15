
int contador; 

void setup()
{
Serial.begin(9600);
  
  for (int contador = 1; contador <= 99; contador += 2){
    Serial.println("numero" + String (contador));
  } 
  
}
void loop()
{

  delay(3000); 
}