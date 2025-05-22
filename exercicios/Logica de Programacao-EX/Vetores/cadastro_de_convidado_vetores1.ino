// C++ code
//Variaveis globais 
int qtdCadastro = 4
String convidados = [4];// cria um vetor tamanho 4
int idadeConvidados[4];
String emailConvidados[4];

//Funcoes
void desenhaCabecalho()
{
 Serial.println("!!!Seja bem vindo ao CHURRASS da galera!!!");
 Serial.println();
 Serial.println();

}

void setup()
{
 Serial.begin(9600);
}


void loop()
{
 //Fazer um cabecalho bonitinho para o programa 
desenhaCabecalho();//substitui o serial.println
 
  //cadastrar dados
  for(int i = 0; i < qtdCadastro; i++)
  {
   // pedir nome do usuario
     Serial.println("informe" + String(i + 1) + "nome para cadastro");
     while(!Serial.available());
    convidados[i] = Serial.parseInt();
    
    //idade 
     Serial.println("informe sua idade!" + convidados[i]);
     while(!Serial.available());
    idadeConvidados[i] = Serial.parseInt();
    
    //email
     Serial.println("informe seu email !" + convidados[i]);
     while(!Serial.available());
    emailConvidados[i] = Serial.readString();
  
    Serial.println();
      
    
  }//fim do for 
  
  //Exibir a lista de convidados
  //obs maior de idade
  
  
  //criar um for
  //Exibir com o print cada um dos arrays
  //pular linha 
 Serial.println("Exibindo convidados eleitos para a festa ");
  
  
 for(int i = 0; i < 4; i++)
  {
   if(idadeConvidados[i] >= 18)
   {
    Serial.println("nome" + convidados[i]);
     
    Serial.println("idade" + idadeConvidados[i]);
     
    Serial.println("Email" + emailConvidados[i]);
   
   Serial.println("Permissao para festa:" + String(idadeConvidados[i] >= 18 ? "OK" : "Menor de Idade"));  
     
     
     
     
    Serial.println("-----------");
    Serial.println();
     
   }//fim do if 
   
  
    
  }//fim do for 

  
  
  
  delay(2000);
  
  
}