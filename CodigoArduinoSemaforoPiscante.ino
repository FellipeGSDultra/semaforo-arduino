int ledVermelho = 13;
int ledAmarelo = 12;
int ledVerde = 11;

void setup() {

  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);

}

void loop() {

  // Verde ligado
  digitalWrite(ledVerde, HIGH);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, LOW);
  delay(4000);

  // Amarelo piscando
  for (int i = 0; i < 4; i++) {

      digitalWrite(ledVerde, LOW);
      digitalWrite(ledAmarelo, HIGH);
      digitalWrite(ledVermelho, LOW);
      delay(300);

      digitalWrite(ledVerde, LOW);
      digitalWrite(ledAmarelo, LOW);
      digitalWrite(ledVermelho, LOW);
      delay(300);

  }

  // Vermelho ligado
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, HIGH);
  delay(4000);
}