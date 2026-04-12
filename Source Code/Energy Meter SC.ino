#include <WiFi.h>
#include <HTTPClient.h>
#include <PZEM004Tv30.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// LCD config (20x4)
LiquidCrystal_I2C lcd(0x27, 20, 4);

// WiFi credentials
const char* ssid = "Sabbir";
const char* pass = "19122918";

// ThingSpeak
const char* thingspeakServer = "http://api.thingspeak.com/update";
const char* writeAPIKey = "D365QZ70TT4KABOL"; // Replace with your ThingSpeak Write API Key

// PZEM UART pin configuration
#define PZEM_RX_PIN 16
#define PZEM_TX_PIN 17

PZEM004Tv30 pzem(&Serial2, PZEM_RX_PIN, PZEM_TX_PIN);

// Electricity rate
const float BDT_RATE = 4.50;

// Timer
unsigned long lastUpdate = 0;
const long interval = 20000; // 20s ThingSpeak update interval (ThingSpeak limit)

void setup() {
  Serial.begin(115200);

  // LCD init
  Wire.begin(21, 22);
  lcd.init();
  lcd.backlight();
  lcd.clear();

  // WiFi connect
  WiFi.begin(ssid, pass);
  lcd.setCursor(0, 0); lcd.print("Connecting WiFi...");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  lcd.clear();
  lcd.setCursor(0, 0); lcd.print("WiFi Connected");

  // Start PZEM
  Serial2.begin(9600, SERIAL_8N1, PZEM_RX_PIN, PZEM_TX_PIN);

  delay(1000);
  lcd.clear();
}

void loop() {
  // Read PZEM data
  float voltage   = pzem.voltage();
  float current   = pzem.current();
  float energy    = pzem.energy(); // kWh
  float frequency = pzem.frequency();
  float cost      = (!isnan(energy)) ? energy * BDT_RATE : 0;

  // --- LCD Display ---
  lcd.setCursor(0, 0); lcd.print("V:"); lcd.print(voltage, 2); lcd.print("V   ");
  lcd.setCursor(0, 1); lcd.print("I:"); lcd.print(current, 3); lcd.print("A   ");
  lcd.setCursor(0, 2); lcd.print("Unit:"); lcd.print(energy, 3); lcd.print("kWh   ");
  lcd.setCursor(0, 3); lcd.print("F:"); lcd.print(frequency, 2); lcd.print("Hz   ");
  lcd.setCursor(10, 3); lcd.print("BDT:"); lcd.print(cost, 2); lcd.print("   ");

  // --- ThingSpeak update (every 20s) ---
  if (millis() - lastUpdate > interval && WiFi.status() == WL_CONNECTED) {
    lastUpdate = millis();

    HTTPClient http;
    String url = String(thingspeakServer) + "?api_key=" + writeAPIKey
                 + "&field1=" + String(voltage, 2)
                 + "&field2=" + String(current, 3)
                 + "&field3=" + String(energy, 3)
                 + "&field4=" + String(frequency, 2)
                 + "&field5=" + String(cost, 2);

    http.begin(url);
    int httpCode = http.GET();
    if (httpCode > 0) {
      Serial.print("ThingSpeak update: ");
      Serial.println(httpCode);
    } else {
      Serial.print("Error updating ThingSpeak: ");
      Serial.println(http.errorToString(httpCode));
    }
    http.end();
  }

  delay(2000); // LCD refresh every 2s
}
