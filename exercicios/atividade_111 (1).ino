// C++ code
//Variaveis
int numero = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite um numero:");
  while(!Serial.avaliable());
  numero = Serial.parseInt();
  
  if(numero >=0) {
    Serial.println("Numero positivo");
  } else {
    Serial.println("Numero negativo");
  }
  delay(1000);
}