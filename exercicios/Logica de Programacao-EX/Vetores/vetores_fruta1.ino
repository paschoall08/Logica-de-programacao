// C++ code
//
void setup()
{
  Serial.begin(9600);
  
  Serial.println("*** SACOLAO DO ZEH");
  Serial.println();
  
  String frutas [6];

    Serial.println("oh ze, bora cadastrar as frutas ");

  Serial.println();


  for(int i = 0; i <= 5; i++){  
  Serial.println("informe a " + String(i + 1) + "a Fruta:");
  while(!Serial.available());
  String frutaDigitada = Serial.readString();
                   
                
  frutas [i] = frutaDigitada;
 }
  
  for(int i = 0; i <= 5; i++)
    
    Serial.println(frutas[i]);
  
  
  
   }
                   
                   
                   
                   
                   
                   
                   


                   
              
                  
                                   
  
    

void loop()
{
  delay (3000);
}