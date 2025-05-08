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
  while (! Serial.available());
  numero = Serial.parseInt();
  
  if(numero % 2 == 0) {//se for par 
    Serial.println("Numero digitado eh par");
  } else {
    Serial.println("Numero digitado eh impar");
  }
// fim do loop
delay (1000);
}

  