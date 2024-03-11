//constante para o pino da buzzer
#define  botao 8
#define buzina 2 
int led = 3;
bool status = false;

void setup() {
  Serial.begin(9600);
  pinMode(botao, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzina, OUTPUT);
  delay(1000); //parada estratégica
}

void loop() {
  Serial.println(digitalRead(botao));

  if(digitalRead(botao) == 1) {
    tone(buzina, 523); // Liga a buzina, Tom (Dó)
    digitalWrite(led, HIGH);
    delay(1000);

}
  else {
    noTone(buzina); //Desliga a buzina
    digitalWrite(led, LOW);
  }
  
}