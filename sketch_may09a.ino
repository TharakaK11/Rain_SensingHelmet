// Set pin numbers for rain sensor and L298N
const int rainSensorPin = 15;
const int motorPin1 = 19;
const int motorPin2 = 21;
const int motorPin3 = 18;
const int motorPin4 = 5;

void setup() {
  // Set pin modes
  pinMode(rainSensorPin, INPUT);
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
}

void loop() {
  // Read rain sensor input
  int rainSensorValue = digitalRead(rainSensorPin);
  
  // If rain sensor detects rain, turn on fan
  if (rainSensorValue == LOW) {
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin4, LOW);
    digitalWrite(motorPin3, HIGH);
  } else {
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW);
  }
}
