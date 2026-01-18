// Traffic Light Module Pins
const int redPin = 2;       // Red light connected to digital pin 2
const int yellowPin = 3;    // Yellow light connected to digital pin 3
const int greenPin = 4;     // Green light connected to digital pin 4

// Duration of each light in seconds
int redDuration = 5;
int yellowDuration = 2;
int greenDuration = 5;

void setup() {
  // Initialize pins as OUTPUT
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);

  // Initialize Serial communication for monitoring/logging
  Serial.begin(9600);
  Serial.println("Arduino Traffic Light System Initialized");
}

void loop() {
  // --- RED LIGHT ---
  digitalWrite(redPin, HIGH);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, LOW);
  Serial.println("Red Light ON");
  delay(redDuration * 1000); // Convert seconds to milliseconds

  // --- GREEN LIGHT ---
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, HIGH);
  Serial.println("Green Light ON");
  delay(greenDuration * 1000);

  // --- YELLOW LIGHT ---
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, HIGH);
  digitalWrite(greenPin, LOW);
  Serial.println("Yellow Light ON");
  delay(yellowDuration * 1000);
}
