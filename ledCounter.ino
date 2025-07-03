
const int ledPins[8] = {2, 3, 4, 5, 6, 7, 8, 9};

//int count = 0;

void setup() {
  for(int i = 0; i < 8; i++){

    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  
  for (int i = 0; i < 8; i++) {
    // Turn all LEDs off
    for (int j = 0; j < 8; j++) {
      digitalWrite(ledPins[j], LOW);
    }

    // Turn on the current LED
    digitalWrite(ledPins[i], HIGH);
    delay(500);
  }
}
