//constante para o pino da buzzer
#define pinoBuzzer 2

//constante do Led
#define pinoLedvermelho 3

void setup() {
  Serial.begin(9600);

  //Modo do pino
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoLedvermelho, OUTPUT);

  delay(1000);  //parada estratégica
}

void loop() {
  tone(pinoBuzzer, 523);  //nota músical
  digitalWrite(pinoLedvermelho, HIGH);
  delay(1000);
  noTone(pinoBuzzer); //desliga a buzzer
  digitalWrite(pinoLedvermelho, LOW); //apaga o Led
  delay(1000);

}
