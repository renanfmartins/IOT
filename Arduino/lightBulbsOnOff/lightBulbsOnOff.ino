 #define pin7 7

void setup() {
  pinMode(pin7,OUTPUT);
}

void loop() {
  digitalWrite(pin7, LOW);
  delay(1000);
    digitalWrite(pin7, HIGH);
  delay(1000);
}
