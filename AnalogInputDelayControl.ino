void setup() {
  // Initiallize serial connection at 9600 b/s
  Serial.begin(9600);
  // Initiallize these pins for output
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  // Defines sensorValue as 0-1023 value analog input 
  int sensorValue = analogRead(A0);
  // Defines delay value with a 50ms buffer
  int delayValue = sensorValue + 50;

  // "Blink LED connected to pin 3
  digitalWrite(3, HIGH);
  delay(delayValue);
  digitalWrite(3, LOW);
  //Delay set for potentiometer value
  delay(delayValue);
  
  // "Blink LED connected to pin 5
  digitalWrite(5, HIGH);
  delay(delayValue);
  digitalWrite(5, LOW);
  // Delay set for potentiometer value
  delay(delayValue);

}
