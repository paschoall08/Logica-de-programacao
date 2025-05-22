// C++ code
//Funcao desnha o cabecalho,pula uma linha

void desenhaPontinhos(int qtdPontos = 5, int tempo = 700)
{
  for(int ponto = 0; ponto <= 4; ponto++);
  {
    Serial.print(".");
    Serial.println();
    delay(tempo);
  }
  
}



void desenhaCabecalho()
{
  Serial.println("!!!! SEJA BEM-VINDO AO PROGRAMA JOGO DE DADOS !!!!");
  Serial.println();
  delay(500);

}


void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));

}

void loop()
{
  desenhaCabecalho();

  //perguntar ao usuario quantas vezes ele quer jogar 
  //criar vetores baseados na quantodade de rodadas 
  //jogar apenas essa quantidade 

  //entrada
  Serial.println("Quantas vezes voce quer jogar>?");
  Serial.println();
  while(!Serial.available());
  int qtdRodadas = Serial.parseInt();//rodadas digitadas pelo usuario

  //criar arrays de estatisticas para o relatorio final
  int vetPalpites[qtdRodadas];
  int vetResultados[qtdRodadas];

  for(int r = 0; r <= qtdRodadas; r++)
  {// aqui dentro, o jogo todo 
    Serial.println("Digite seu palpite 1 a 6 ");
    while(!Serial.available());
    int numeroPalpite = Serial.parseInt();
    //jogar dado 
    int numeroSorteado = random(1 , 7);

    vetPalpites[r] = numeroPalpite ;
    vetResultados[r] = numeroSorteado ;
    


    //exibir o palpite do usuario 
    //exibir numero sorteado

    Serial.println("Seu palpite:" + String(numeroPalpite));
    
    desenhaPontinhos();
    
    Serial.println("Numero Sorteado:" + String(numeroSorteado));




    if(numeroPalpite == numeroSorteado)
    {
      Serial.println("Parabens, voce acertou!");
    }else{
      Serial.println("Que pena, tente outra vez!!");
    }

    Serial.println("Reinicie o programa!");
    delay(500);



  }//fim do for das rodadas 
  
  Serial.println("ESTATISTICAS DO JOGO");
  Serial.println();
  for(int i =0 ; i < qtdRodadas; i++)
  {
    Serial.println("Rodada" + String(i + 1) + ":");
    Serial.println("Palpite" + (vetPalpites[i]));
    Serial.println("Dado" + (vetResultados[i]));
    Serial.println("Resultado:" + String (vetResultados[i] == vetPalpites[i] ? "Acertou!" : "Errou!"));
    Serial.println("------------------------------");
    Serial.println();
  }
  

//ao finalizar a jogada mostrar as estatisticas
  Serial.println("FIM DO JOGO, REINICIANDO O SISTEMA!");
  desenhaPontinhos(3 , 500);
  delay(3000);//pausa 









}