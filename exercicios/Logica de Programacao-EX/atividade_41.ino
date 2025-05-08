
// Faça um programa que receba o nome, o peso e a altura de uma
//pessoa.

//Variáveis
String nome = "";
float peso = 0;
float altura = 0;
float imc = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  //cabeçalho
  Serial.println("|------------------------------|");//Primeira Linha
  Serial.println("|                              |");
  Serial.println("|                              |");
  Serial.println("|          LOPAL-EX_04         |");
  Serial.println("|                              |");
  Serial.println("|                              |");
  Serial.println("|------------------------------|");//Ultima linha
  
 Serial.println("Digite o seu nome:");
  while (!Serial.available());
  nome = Serial.readString();
  
  Serial.println();
  
  Serial.println("Digite o seu peso (em kg):");
  while (!Serial.available());
  peso = Serial.parseFloat();
  
  Serial.println();
  
  Serial.println("Digite a sua altura (em metros, ex: 1.70 ):");
  while (!Serial.available());
  altura = Serial.parseFloat();

  
  //processamento
  float imc = peso / (altura * altura);
      
  //saída  
     Serial.println("Seu nome: " + nome);
     Serial.println("Seu peso: " + String(peso));
     Serial.println("Sua altura: " + String(altura));
     Serial.println("Seu IMC: " + String(imc));
     delay (6000);

}