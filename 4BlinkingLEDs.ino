
  const int pin8 = 8;
  const int pin7 = 7;
  const int pin4 = 4;
  const int pin2 = 2;

void setup() {
  pinMode(pin2, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin7, OUTPUT);
  pinMode(pin8, OUTPUT);
}

void loop() {
  digitalWrite(pin2, HIGH);         // Set digital pin 2 to "On state" for 500ms
  delay(500);
  digitalWrite(pin2, LOW);          // Set digital pin 2 to "off state" and waits for 500ms
  delay(500);
  digitalWrite(pin4, HIGH);
  delay(500);
  digitalWrite(pin4, LOW);
  delay(500);
  digitalWrite(pin7, HIGH);
  delay(500);
  digitalWrite(pin7, LOW);
  delay(500);
  digitalWrite(pin8, HIGH);
  delay(500);
  digitalWrite(pin8, LOW);
  delay(500);
}
