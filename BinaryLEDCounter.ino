
  const int pin1 = 2;
  const int pin2 = 3;
  const int pin3 = 4;
  const int pin4 = 5;
  const int pin5 = 6;
  const int pin6 = 7;
  const int pin7 = 8;
  const int pin8 = 9;

  int count = 0;

void setup() {
  
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);
  pinMode(pin7, OUTPUT);
  pinMode(pin8, OUTPUT);


}

void loop() {

  digitalWrite(pin8, bitRead(count,7));
  digitalWrite(pin7, bitRead(count,6)); 
  digitalWrite(pin6, bitRead(count,5));
  digitalWrite(pin5, bitRead(count,4));
  digitalWrite(pin4, bitRead(count,3));
  digitalWrite(pin3, bitRead(count,2));
  digitalWrite(pin2, bitRead(count,1)); 
  digitalWrite(pin1, bitRead(count,0));
  count=count+1;
  delay(1000);


}
