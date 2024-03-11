//*Declaração das variáveis /numeros Reais*/

float nota1, nota2, nota3, peso1, peso2, peso3, media;

void setup() {
  //Inicia a comunicação com o Serial Monitor
  Serial.begin(96000);

  delay(1000);  //Espera estratégica
}

void loop() {
  Serial.print("Digite a nota 1: ");

  //while = comando de repetição "enquanto"
  nota1 = aguardaEntradaNumerica();
  Serial.println(nota1);

  Serial.print("Digite a nota 2: ");
  nota2 = aguardaEntradaNumerica();
  Serial.println(nota2);

  Serial.print("Digite a nota 3: ");
  nota3 = aguardaEntradaNumerica();
  Serial.println(nota3);


  //Atribuição dos pesos:

  // PESO 1
  Serial.print("Digite o peso 1: ");
  peso1 = aguardaEntradaNumerica();
  Serial.println(peso1);

  //PESO 2
  Serial.print("Digite o peso 2: ");
  peso2 = aguardaEntradaNumerica();
  Serial.println(peso2);

  //PESO 3
  Serial.print("Digite o peso 3: ");
  peso3 = aguardaEntradaNumerica();
  Serial.println(peso3);

  //Calculo da média ponderada:
  media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

  Serial.print("A media ponderada e: ");
  Serial.println(media, 1);
  delay(1000);
}
//criando uma função chamada
float aguardaEntradaNumerica() {
  while (!Serial.available() > 0) {
    //Aguarda até que um valor seja digitado
  }
  //Verifica se a entrada é númerica ou ponto
  while (!isdigit(Serial.peek()) && Serial.peek() != '-' && Serial.peek() != '-')
    //Descarta a entrada não númerica
    Serial.read();
  while (Serial.available() == 0) {
    //Aguardaa nova entrada do usuário
  }

  //Retornar o valor digitado no serial tipo float
  return Serial.parseFloat();
}