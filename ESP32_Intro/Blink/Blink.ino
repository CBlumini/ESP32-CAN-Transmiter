//esp32 blink

// LED on GPI02
int ledPin = 2;

void setup() {
  //Set LED as output
  pinMode(ledPin, OUTPUT);

  //Serial monitor begin
  Serial.begin(115200);


}

void loop() {
    
    Serial.print("Hello");
    digitalWrite(ledPin, HIGH);
    
    delay(500);
    
    Serial.println(" world!");
    digitalWrite(ledPin, LOW);
    
    delay(500);

}
