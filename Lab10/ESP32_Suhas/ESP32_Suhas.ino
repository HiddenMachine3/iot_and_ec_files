#include <WiFi.h>
#include <HTTPClient.h>

// Wi-Fi credentials
const char* ssid = "star platinum";
const char* password = "";

// ThingSpeak settings
const char* server = "http://api.thingspeak.com";
const char* readApiKey ="";   // Replace with your ThingSpeak Read API Key
const int channelID = 2738548;                 // Replace with your ThingSpeak Channel ID

// LED pin (built-in LED on ESP32, GPIO2)
const int ledPin = 2;

void setup() {
  // Initialize Serial Monitor
  Serial.begin(115200);
  
  // Set LED pin as output
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);  // Initially turn LED off

  // Connect to Wi-Fi
  Serial.print("Connecting to WiFi...");
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("Connected to WiFi!");
}

void loop() {
  if (WiFi.status() == WL_CONNECTED) { // Check Wi-Fi connection status
    HTTPClient http;

    // Prepare URL to read the latest LED state value from ThingSpeak
    String url = String(server) + "/channels/" + String(channelID) + "/fields/1/last?api_key=" + readApiKey;
    http.begin(url);
    int httpCode = http.GET();

    if (httpCode > 0) { // Check if GET request was successful
      String payload = http.getString();
      Serial.println("Received data: " + payload);

      // Control the LED based on received data
      if (payload == "1") {
        digitalWrite(ledPin, HIGH); // Turn LED ON
        Serial.println("LED ON");
      } else if (payload == "0") {
        digitalWrite(ledPin, LOW);  // Turn LED OFF
        Serial.println("LED OFF");
      }
    } else {
      Serial.println("Error in HTTP request");
    }

    http.end(); // Close connection
  } else {
    Serial.println("WiFi not connected.");
  }

  delay(15000); // Delay between requests (15 seconds to stay within ThingSpeak's rate limits)
}
