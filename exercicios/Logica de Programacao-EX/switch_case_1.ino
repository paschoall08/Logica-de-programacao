// C++ code
/*Solicite dois números e uma operação (soma, subtração, 
multiplicação ou divisão).
Realize a operação indicada.
Mostre o resultado.*/
//Variáveis
float numero1 = 0;
float numero2 = 0;
float soma;
float subtracao;
float multiplicacao;
float divisao;
int escolhaDaOperacao;
float resultado;
int contador =0;


void setup()
{
  Serial.begin(9600);
  
  
  do
  {
    Serial.println("Seja bem vindo(a) a nossa calculadora!!! :)");
    Serial.println();
    Serial.println("Escolha uma operacao para ser realizada");
    Serial.println();
    Serial.println(" ___________________ ");
    Serial.println("|                   |");
    Serial.println("| 1 - Soma          |");
    Serial.println("| 2 - Subtracao     |");
    Serial.println("| 3 - Multiplicacao |");
    Serial.println("| 4 - Divisao       |");
    Serial.println("|___________________|");

    while(!Serial.available()){}

    escolhaDaOperacao = Serial.parseInt();

    Serial. println("Agora, para realizar a operacao, digite o primeiro numero:");
    while(!Serial.available());
    numero1 = Serial.parseFloat();

    Serial. println("Agora, digite o segundo numero:");
    while(!Serial.available());
    numero2 = Serial.parseFloat();

    switch(escolhaDaOperacao){

      case 1:
      soma = numero1 + numero2;
      Serial.println("WOW!!! O resultado eh: " + String(soma));
      break;


      case 2:
      subtracao = numero1 - numero2;
      Serial.println("WOW!!! O resultado eh: " + String(subtracao));
      break;

      case 3:
      multiplicacao = numero1 * numero2;
      Serial.println("WOW!!! O resultado eh: " + String(multiplicacao));
      break;

      case 4 :
      divisao = numero1 / numero2;
      Serial.println("WOW!!! O resultado eh: " + String(divisao));
      break;
    }


    Serial.println("Voce deseja continuar? Se sim, digite [S], se nao digite [N]");
    while(!Serial.available());

    if(Serial.readString() == "S")
    {
      contador++;
    }
    else
    {
      contador = 0;
      Serial.println("Ate breve, obrigado por usar nossa calculadora inteligente!!! :)");
      Serial.println("Caso queira voltar, reinicie o sistema.");
    }
  }
  while(contador != 0);  
}

void loop()
{
  //Sem código
}