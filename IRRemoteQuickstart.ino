
#include "IRMap.h"
#include <IRremote.h>

int recvPin = 3;
IRrecv irrecv(recvPin);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);   // Status message will be sent to PC at 9600 baud
  irrecv.enableIRIn();  // Start the receiver
}

void loop() {
  // put your main code here, to run repeatedly:
  decode_results results;

  if(irrecv.decode(&results)){
    Serial.println(IRMap::code_map(results.value));
    delay(50);
    irrecv.resume();
  }
}
