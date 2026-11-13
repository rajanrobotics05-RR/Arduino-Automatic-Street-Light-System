
/*
  Project Name : Automatic Street Light System
  Controller   : Arduino Uno
  Sensor       : LDR
  Developed By : Rajan Robotics

  Vision to Reality
*/

#define LDR_PIN A0
#define LED_PIN 9

// Adjust this threshold based on ambient light
#define LIGHT_THRESHOLD 500

int ldrValue = 0;

void setup()
{
  Serial.begin(9600);

  pinMode(LED_PIN, OUTPUT);

  digitalWrite(LED_PIN, LOW);

  Serial.println("RAJAN ROBOTICS");
  Serial.println("Automatic Street Light System");
  Serial.println("------------------------------");
}

void loop()
{
  // Read LDR analog value
  ldrValue = analogRead(LDR_PIN);

  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  // Switch ON LEDs in darkness
  if (ldrValue < LIGHT_THRESHOLD)
  {
    digitalWrite(LED_PIN, HIGH);
    Serial.println("Darkness Detected - LIGHT ON");
  }
  else
  {
    digitalWrite(LED_PIN, LOW);
    Serial.println("Daylight Detected - LIGHT OFF");
  }

  Serial.println("------------------------------");

  delay(500);
}
