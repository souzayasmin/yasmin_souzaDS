float salario, novoSalario;
 void setup() {
  Serial.begin(9600);
  //Inicialização a comunicação serial
}
void loop() {
  Serial.println("Digite o salario do funcionario:");
  while(!Serial.available());
  //Aguarda a entrada serial
  salario = Serial.parseFloat(); 
  Serial.println(salario);
  // Aguarda a entrada serial

  //Calcula o novo salario com um aumento 25%
  novoSalario = salario * 1.25;

  Serial.print("O novo salario com aumento de 25% e: ");
  Serial.println(novoSalario);

  delay(5000);
  //Aguarda 5 segundos antes de reiniciar
}