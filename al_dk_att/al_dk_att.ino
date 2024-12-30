int greenPin = 13;  // Pin connected to the green LED
int redPin = 12;    // Pin connected to the red LED

void setup() {
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    char signal = Serial.read();
    if (signal == 'G') {
      // Turn on the green LED
      digitalWrite(greenPin, HIGH);
      digitalWrite(redPin, LOW);
    } else if (signal == 'R') {
      // Turn on the red LED
      digitalWrite(greenPin, LOW);
      digitalWrite(redPin, HIGH);
    }
  }
}