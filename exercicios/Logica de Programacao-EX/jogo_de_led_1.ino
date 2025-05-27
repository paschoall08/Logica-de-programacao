// C++ code
//

void desenhaCabecalho()
{
  Serial.println("!!!! SEJA BEM-VINDO AO PROGRAMA JOGO DE DADOS !!!!");
  Serial.println();
  delay(500);
}

int qtdAcerto = 0;
int leds ;
int ledVerde = 13;
int ledVermelho =8;
int ledAzul1 = 4;
int ledAzul2 = 3;
int ledAzul3 = 1;
#include <Servo.h>
Servo motor; 
Servo meuServo;




void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));
  motor.attach(2);
  motor.write(0);



  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(1, OUTPUT);
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


  palpiteDigitado = numeroSorteado;// sempre acerta

  if(palpiteDigitado == numeroSorteado)
  {
    Serial.println("Parabens, voce acertou!");
    digitalWrite(13, HIGH);
    delay(1500);
    digitalWrite(13, LOW);
    qtdAcerto += 1;

  }else{
    Serial.println("Que pena, tente outra vez!!");
    digitalWrite(8, HIGH );
    delay(1500);
    digitalWrite(8, LOW);
  }

  //acendendo cada led azul 

  if(qtdAcerto == 1 )

  {
    digitalWrite(1, HIGH);

  }else if(qtdAcerto == 2 )

  {
    digitalWrite(3, HIGH);

  } else if(qtdAcerto == 3 )

  {
    digitalWrite(4, HIGH);

    motor.write(0);
    delay(1500);
    motor.write(90);
    delay(1500);
    motor.write(180);
    delay(1500);
    motor.write(90);
    delay(1500);
    motor.write(0);





    Serial.println("Reiniciando programa");
    delay(1500);
   



  }




}//fim do loop
