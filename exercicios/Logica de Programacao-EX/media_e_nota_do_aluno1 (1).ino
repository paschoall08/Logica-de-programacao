/*Calcule a média entre duas notas.
Verifique se o aluno foi aprovado:
Aprovado se média é MAIR OU IGUAL A 6 e SE A frequênciaÉ MAIOR OU IGUAL 75%.
Caso contrário, exiba se foi reprovado por nota, por frequência ou por ambos.
Se a média for exatamente 10, exiba: "Parabéns! Nota máxima!
*/
//Variaveis 
//nota 1 
//nota 2 
// frequencia 
//media 



float nota1, nota2, media, frequencia, comparacao;//vi em outro arquivo

void setup()
{
  Serial.begin(9600);
}


void loop()
{ 
    Serial.println("Digite sua primeira nota.");
  while(!Serial.available());
  nota1 = Serial.parseFloat();
  
  Serial.println("Digite sua segunda nota ");
    while(!Serial.available());
    nota2 = Serial.parseFloat();
  
  //processamento 
  media = (nota1 + nota2) / 2;
  comparacao = ( nota1 >= 6 || nota2 >= 6) * 7.5;//vi em outro arquivo
  
  //saida 
  Serial.println("Media " + String(media));
  if ( media >= 6){
    Serial.println(" Aprovado");
  }else if( media <=5 ){
    Serial.println("Reprovado");
  }
    delay(3000);
} 
  
  
  