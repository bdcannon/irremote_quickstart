
#include "IRMap.h"
#include <IRremote.h>

int recvPin = 11;
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
    String buttonPressed = IRMap::code_map(results.value);

    if(buttonPressed == "POWER") {
      Serial.println("Put stuff here to run when the Power button is pressed");  
    }

    if(buttonPressed == "PLAY"){
      Serial.println("Put things here for when PLAY is pressed");
    }
    
    delay(100);
    irrecv.resume();
  }
}
