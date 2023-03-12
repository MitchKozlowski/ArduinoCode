void setup() {
  // Initiallize serial connection at 9600 b/s
  Serial.begin(9600);
  // Initiallize this PWM pin for output
  pinMode(3, OUTPUT);
}

void loop() {
  // Defines sensorValue as 0-1023 value analog input 
int sensorValue = analogRead(A0);
  // Defines PWM output value 0-255
int motorValue = sensorValue * 0.25;

  // PWM(analog) output to pin 3
analogWrite(3, motorValue);

  // Display current analog value input from potentiometer
Serial.println(sensorValue);
  // Display current analog output value
Serial.println(motorValue);
  // 200ms delay for stability
delay(200);
}
