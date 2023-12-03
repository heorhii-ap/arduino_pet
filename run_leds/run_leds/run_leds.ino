/* Программа "Бегущие огни"

byte ledPin;


void setup() {

  for (ledPin = 4; ledPin <= 11; ledPin++) {
    pinMode(ledPin, OUTPUT);
    digitalWrite(ledPin, HIGH);
  }

  for (ledPin = 4; ledPin <= 11; ledPin++) {
    digitalWrite(ledPin, LOW);
    delay(200);
    digitalWrite(ledPin, HIGH);
  }

}

void loop() {

  for (ledPin = 10; ledPin >= 4 ; ledPin--) {
    digitalWrite(ledPin, LOW);
    delay(200);
    digitalWrite(ledPin, HIGH);
  }

  for (ledPin = 5; ledPin <= 11; ledPin++) {
    digitalWrite(ledPin, LOW);
    delay(200);
    digitalWrite(ledPin, HIGH);
  }

}
