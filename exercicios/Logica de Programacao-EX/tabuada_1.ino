// C++ code
//
int tabuadaEscolhida;
int resultado;



void setup()
{
   Serial.begin(9600);
}

void loop()
{
  Serial.println("Bem-vindo(a)");
  Serial.println("Digite qual tabuada voce deseja ver");
  while(!Serial.available()){}
  tabuadaEscolhida = Serial.parseInt();
  
  
for (int contador = 1;contador <= 10; contador++){
resultado = tabuadaEscolhida * contador;
  Serial.println(String(tabuadaEscolhida) + " X " + String(contador) + " = " + String(resultado));
  
}

delay(3000);
}