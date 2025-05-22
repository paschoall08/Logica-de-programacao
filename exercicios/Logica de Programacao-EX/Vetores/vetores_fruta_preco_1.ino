// Variáveis globais
String frutas[6];
float precosFrutas[6];

void setup() {
  Serial.begin(9600);

  Serial.println("*** SACOLAO DO ZEH ***");
  Serial.println();
  Serial.println("Oh Zhe, bora cadastrar as frutas!");
  Serial.println();

  for (int i = 0; i < 6; i++) {
    Serial.println("Informe a " + String(i + 1) + " fruta:");
    while (!Serial.available());
    frutas[i] = Serial.readStringUntil('\n'); // lê até o ENTER

    Serial.println("Qual o preço de " + frutas[i] + "?");
    while (!Serial.available());
    precosFrutas[i] = Serial.parseFloat();

    // Limpa o buffer de entrada após o parseFloat
    while (Serial.available()) {
      Serial.read();
    }

    Serial.println("Fruta cadastrada: " + frutas[i]);
    Serial.println();
  }

  Serial.println("Exibindo os valores cadastrados:");
  Serial.println();

  for (int i = 0; i < 6; i++) {
    Serial.println(String(i + 1) + "ª Fruta: " + frutas[i]);
    Serial.println("Preco da Fruta: R$ " + String(precosFrutas[i], 2));
  }
}

void loop() {
  delay(3000); // Apenas pausa o loop, pois nada ocorre aqui
}
