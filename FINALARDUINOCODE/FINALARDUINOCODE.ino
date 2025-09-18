#define GREEN_LED 3
#define RED_LED   4

void setup() {
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);

  digitalWrite(GREEN_LED, LOW);
  digitalWrite(RED_LED, LOW);

  Serial.begin(115200);
  while (!Serial); // wait for USB
  Serial.println("System ready. Type 'ok' or 'notok' in Serial Monitor.");
}

void loop() {
  if (Serial.available() > 0) {
    String input = Serial.readStringUntil('\n');
    input.trim();

    if (input.equalsIgnoreCase("ok")) {
      digitalWrite(GREEN_LED, HIGH);
      digitalWrite(RED_LED, LOW);
      Serial.println("✅ Rail OK detected");
    } 
    else if (input.equalsIgnoreCase("notok")) {
      digitalWrite(GREEN_LED, LOW);
      digitalWrite(RED_LED, HIGH);
      Serial.println("⚠️ Rail NOT OK detected");
    } 
    else {
      Serial.println("Unknown command. Type 'ok' or 'notok'.");
    }
  }
}
