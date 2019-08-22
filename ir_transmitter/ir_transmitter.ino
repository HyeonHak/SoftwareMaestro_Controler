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
  
 unsigned long senddata;
 while(BLE.available())
  {
    char myChar = (char)BLE.read();
    Code+=myChar;
    delay(5);
  }

  if(Code.equals("1"))
  {
    Serial.println("input value : "+Code);
    senddata = 0x48B7C837;
    Serial.println(senddata);
    Code="";
    irsend.sendNEC(senddata, 32);
  }
}
