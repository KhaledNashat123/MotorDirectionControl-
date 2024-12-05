// Define pin numbers
const int motorPin1 = 8;  // Motor direction pin 1
const int motorPin2 = 9;  // Motor direction pin 2
const int buttonPin = 7;  // Button input pin

void setup() {
  // Set motor pins as output
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  
  // Set button pin as input with pull-up resistor
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  // Read button state (HIGH = not pressed, LOW = pressed)
  int buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    // Default state: Motor runs in one direction
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
  } else {
    // Button pressed: Reverse motor direction
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, HIGH);
  }
}
