int ledPin = 3;  // Pin connected to the LED
int valPot = 0;  // Variable to store the potentiometer value
int thresholdValue = 128;  // Set your desired threshold value (0-255)

void setup() {
  Serial.begin(9600);      // Initialize serial communication
  pinMode(ledPin, OUTPUT); // Set the ledPin as output
}

void loop() {
  valPot = analogRead(A0);               // Read the potentiometer value
  valPot = map(valPot, 0, 1023, 0, 255);  // Map it to 0-255 range

  // Print the potentiometer value and the brightness to the Serial Monitor
  Serial.print("Potentiometer Value: ");
  Serial.print(valPot);
  Serial.print(" | LED Brightness: ");

  // Set LED brightness based on the conditional value
  if (valPot > thresholdValue) {
    analogWrite(ledPin, valPot); // Set LED brightness
    Serial.println(valPot);       // Print the brightness value
  } else {
    analogWrite(ledPin, 0);       // Turn off the LED if below threshold
    Serial.println(0);            // Print 0 for LED off
  }

  delay(100); // Small delay for stability
}