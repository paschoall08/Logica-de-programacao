/*

	Faça um programa que receba um código de origem de um produto e informe sua procedência conforme a lista abaixo:
    
    CÓDIGO DE ORIGEM			PROCEDÊNCIA 
    	1							Sul
        2							Norte
        3							Leste
        4							Oeste
        5 ou 6 						Nordeste
        7, 8 ou 9 					Sudeste
        10 até 20 					Centro-Oeste
        acima de 20 				Código ainda sem definição
*/





int codigoOrigem;
  
void setup()
{
  Serial.begin(9600);

}

void loop()
{
  //entrada 
  Serial.println("Digite o codigo de origem do produto");
  while(!Serial.available());
  codigoOrigem = Serial.parseInt();
  
  if(codigoOrigem == 1) {
  Serial.println("o produto e do Sul");
  } else if(codigoOrigem == 1){
    
  Serial.println("o produto e do norte");
  } else if(codigoOrigem == 2){
    
  Serial.println("o produto e do leste");
  } else if(codigoOrigem == 3){
    
  Serial.println("o produto e oeste");
  } else if(codigoOrigem == 4){
    
  Serial.println("o produto e nordeste");
  } else if(codigoOrigem == 5 || codigoOrigem == 6){
    
  Serial.println("o produto e Sudeste");
  } else if(codigoOrigem == 7 || codigoOrigem == 8 || codigoOrigem == 9){
  
    
  Serial.println("o produto e Centro-Oeste"); 
  } else if(codigoOrigem  >=10 && codigoOrigem <=20 ){
       
  } else {
    Serial.println("o codigo ainda n tem definicao");
  }
  
  delay(5000);
  Serial.println();
}