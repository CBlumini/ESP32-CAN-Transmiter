#include "BluetoothSerial.h"

BluetoothSerial serialBT;
float tm;
void setup() {
Serial.begin(9600);
if(!serialBT.begin("Lotus")){
Serial.println("An error occurred initializing Bluetooth");
Serial.print("The device started, now you can pair it with bluetooth!");
}
}


void loop() {
tm = millis();
serialBT.print("*NBP1, UPDATE,");
serialBT.println((tm)*1.00);
serialBT.print("Gear");
serialBT.println(":3");
serialBT.println("#");
Serial.println(tm);
delay (2000);
}
