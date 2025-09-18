#define GREEN_LED 3
#define RED_LED 4

void setup() {
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
}

void loop() {
  digitalWrite(GREEN_LED, HIGH);  // Green ON
  digitalWrite(RED_LED, LOW);
  delay(1000);

  digitalWrite(GREEN_LED, LOW);   // Red ON
  digitalWrite(RED_LED, HIGH);
  delay(1000);
}
