// C++ code
//Funcao desnha o cabecalho,pula uma linha 


void desenhaCabecalho()
{
  Serial.println("!!!! SEJA BEM-VINDO AO PROGRAMA JOGO DE DADOS !!!!");
  Serial.println();
  delay(500);

}

void desenhaPontinhos(int qtdPontos = 5, int tempo = 700)
{
  for(int i = 1; i<= qtdPontos ; i++);
  {
    Serial.print(".");
    delay(tempo);
  }
}


void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));

}

void loop()
{
  desenhaCabecalho();
  Serial.println("Digite seu palpite");
  while(!Serial.available());
  int palpiteDigitado = Serial.parseInt();
  
  //jogar dado 
  int numeroSorteado = random(1 , 7);
  
  Serial.print("Jogando o dado");
  


  
  //exibir o palpite do usuario 
  //exibir numero sorteado
  
  Serial.println("Seu palpite:" + String(palpiteDigitado));
  Serial.println("Numero Sorteado:" + String(numeroSorteado));
  
  
  
  
  if(palpiteDigitado == numeroSorteado)
  {
    Serial.println("Parabens, voce acertou!");
  }else{
    Serial.println("Que pena, tente outra vez!!");
  }
  
  Serial.println("Reinicie o programa!");
  Serial.println();
  
  
  
}