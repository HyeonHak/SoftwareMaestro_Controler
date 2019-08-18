#include <Wire.h>
#include <SoftwareSerial.h>
#include <IRremote.h>

IRsend irsend;

const int TX = 2;
const int RX = 5;
SoftwareSerial BLE(TX,RX);
String Code="";//받는 문자열

void setup() {
  Serial.begin(9600);
  Wire.begin();
  BLE.begin(9600);
  Serial.println("Setting end...");
 
}

void loop() {
 while(BLE.available())
  {
    char myChar = (char)BLE.read();
    Code+=myChar;
    delay(5);
  }
  if(!Code.equals(""))
  {
    Serial.println("input value: "+Code);
    Code="";
  }
}
