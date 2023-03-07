void setup() {
  // Initialize serial connection at 9600 bits per second
  Serial.begin(9600);
  
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  // Read the input on analog pin 0
  int sensorValue = analogRead(A0);

  // If the analog value is below 800 LED connected to port 7 turns on, else LED on port 8 is turned on
  if(sensorValue < 800){
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
  }
  else{
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
  }

  // print out value
    Serial.println(sensorValue);
  // Delay of 100 ms for stability
    delay(100);
}
