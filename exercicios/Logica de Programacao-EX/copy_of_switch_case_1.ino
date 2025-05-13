float resultado;

int escolhaDaOperacao;
int contador;
 
float somar(float numero1Param , float numero2Param , float numero3Param = 0){
  return(numero1Param + numero2Param + numero3Param);  
}

// quando usamos void na funcao nao precisamos de retorno 
void subtrair(float numero1Param, float numero2Param){
  resultado = numero1Param - numero2Param;
  Serial.println("Top!!! O resultado eh: " + String(resultado));
  
}
 
void multiplicar(float numero1Param, float numero2Param){
  resultado = numero1Param * numero2Param;
  Serial.println("Top!!! O resultado eh: " + String(resultado));
 
}
                 
  void dividir(float numero1Param, float numero2Param){
  resultado = numero1Param / numero2Param;
  Serial.println("Top!!! O resultado eh: " + String(resultado));
    
  }
                 
                 
                 
                 
                 
                 
                 

void setup()

{
  Serial.begin(9600);
  
  float numero1 = 0;
float numero2 = 0;
  
  do
  {
    Serial.println("Seja bem vindo(a) a nossa calculadora!!! :)");
    Serial.println();
    Serial.println("Escolha uma operacao para ser realizada");
    Serial.println();
    Serial.println(" 1 - Soma  ");
    Serial.println(" 2 - Subtracao");
    Serial.println(" 3 - Multiplicacao");
    Serial.println(" 4 - Divisao");
  

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
      
    resultado = somar(numero1,numero2);// chamada da funcao somar       
      Serial.println("Top!!! O resultado eh: " + String(resultado));
      break;


      case 2:
   subtrair(numero1, numero2);
      break;

      case 3:
   multiplicar( numero1, numero2);
      Serial.println("Top!!! O resultado eh: " + String(resultado));
      break;

      case 4 :
    dividir(numero1, numero2);
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
      Serial.println("Ate logo, obrigado por usar nossa calculadora inteligente!!! :)");
      Serial.println("Caso queira voltar, reinicie o sistema.");
    }
  }
  
  while(contador != 0);  
}

void loop(){
  
}