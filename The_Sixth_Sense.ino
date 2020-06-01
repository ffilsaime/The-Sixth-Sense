#include "Arduino.h"
#include "vmotor.h"
#include "MicrophoneSensor.h"
#include "PIRSensor.h"

void setup() {
  // put your setup code here, to run once:
  vm.SETUP();
  mic.microphoneSetup();
  ms.pirSetup();
}

void loop() {
  // put your main code here, to run repeatedly:
  if(ms.motionDetected()){
    Serial.println("The sound set off the motor!");
    vm.startMotor();
    delay(8000);
    vm.stopMotor();
    delay(3000);
  }else if(mic.soundDetected()){
    Serial.println("The microphone set the motor off!");
    vm.startMotor();
    delay(5000);
    vm.stopMotor();
    delay(5000);
  }else{
    Serial.println("It's okay to drive or move");
    }

}
