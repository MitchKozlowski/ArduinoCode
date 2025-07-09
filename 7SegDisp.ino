// Segment pin mapping for common-anode display
const int segmentPins[7] = {2, 3, 4, 5, 6, 7, 8}; // a to g

// Digit patterns for 0-9 (0 = ON, 1 = OFF)
const byte digitPatterns[10][7] = {
  {0,0,0,0,0,0,1},  // 0
  {1,0,0,1,1,1,1},  // 1
  {0,0,1,0,0,1,0},  // 2
  {0,0,0,0,1,1,0},  // 3
  {1,0,0,1,1,0,0},  // 4
  {0,1,0,0,1,0,0},  // 5
  {0,1,0,0,0,0,0},  // 6
  {0,0,0,1,1,1,1},  // 7
  {0,0,0,0,0,0,0},  // 8
  {0,0,0,0,1,0,0}   // 9
};

int count = 0;

void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(segmentPins[i], OUTPUT);
  }
}

void loop() {
  displayDigit(count); // Show the digit 1
  count++;
  delay(1000);
  if (count >= 10){
    count=0;
  }
}

void displayDigit(int digit) {
  for (int i = 0; i < 7; i++) {
    digitalWrite(segmentPins[i], digitPatterns[digit][i]);
  }
}
