//Definiçao das constantes: pinos de entrada
#define pinoBuzzer 2

//leds
#define pinoDo 3
#define pinoRe 4
#define pinoMi 5
#define pinoFa 6
#define pinoSo 7
#define pinoLa 8
#define pinoSi 9
#define pinoDo2 10

byte Doh, Re, Mi, Fa, So, La, Si, Do2 = 0;

void setup() {

  pinMode(pinoBuzzer, OUTPUT);

  pinMode(pinoDo, INPUT);
  pinMode(pinoRe, INPUT);
  pinMode(pinoMi, INPUT);
  pinMode(pinoFa, INPUT);
  pinMode(pinoSo, INPUT);
  pinMode(pinoLa, INPUT);
  pinMode(pinoSi, INPUT);
  pinMode(pinoDo2, INPUT);

  Serial.begin(9600);
  delay(1000);
}

void loop() {
  //leitura dos botões armazenada nas variáveis de controle
  Doh = digitalRead(pinoDo);
  Re = digitalRead(pinoRe);
  Mi = digitalRead(pinoMi);
  Fa = digitalRead(pinoFa);
  So = digitalRead(pinoSo);
  La = digitalRead(pinoLa);
  Si = digitalRead(pinoSi);
  Do2 = digitalRead(pinoDo2);

  //verificando qual nota foi acionada
  if (Doh == 1) {
    tone(pinoBuzzer, 523);
  } else if (Re == 1) {
    tone(pinoBuzzer, 587);
  } else if (Mi == 1) {
    tone(pinoBuzzer, 659);
  } else if (Fa == 1) {
    tone(pinoBuzzer, 349);
  } else if (So == 1) {
    tone(pinoBuzzer, 415);
  } else if (La == 1) {
    tone(pinoBuzzer, 440);
  } else if (Si == 1) {
    tone(pinoBuzzer, 494);
  } else if (Do2 == 1) {
    tone(pinoBuzzer, 554);
  } else {
    //deliga o buzzer
    noTone(pinoBuzzer);
  }
  delay(50);
}
