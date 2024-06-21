/*
    Project name : ESP8266 Relay Module
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-relay-module
*/

// Define the GPIO pin connected to the relay module
const int relayPin = D1; // GPIO pin D1 on NodeMCU

void setup() {
  Serial.begin(9600); // Initialize serial communication for debugging
  pinMode(relayPin, OUTPUT); // Set relay pin as output
}

void loop() {
  // Turn relay ON (close the switch)
  digitalWrite(relayPin, HIGH);
  Serial.println("Relay turned ON");
  delay(2000); // Wait for 2 seconds

  // Turn relay OFF (open the switch)
  digitalWrite(relayPin, LOW);
  Serial.println("Relay turned OFF");
  delay(2000); // Wait for 2 seconds
}
