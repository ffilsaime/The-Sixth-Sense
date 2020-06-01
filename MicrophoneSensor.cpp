/***********************************************/
/* Name of the program: Microphone Sensor      */
/* Author: Florebencia Fils-Aime               */
/* Person Number: 50190413                     */
/* C program file: MicrophoneSensor.c          */
/* Date : 10/17/2019                           */
/* Used to test the Mic Sensor and get the     */
/* methods                                     */
/***********************************************/

#include "Arduino.h"
#include "MicrophoneSensor.h"

int sensorPin = A0;
int microphoneLED = 5;
int soundFound = 0;
const int threshold = 335; 

MicSensor::MicSensor(){}

 void MicSensor::microphoneSetup(){
  pinMode(microphoneLED, OUTPUT);
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
}

bool MicSensor::soundDetected(){
  soundFound = analogRead(sensorPin);

  if(soundFound > threshold){
    Serial.println(soundFound);
    digitalWrite(microphoneLED, HIGH);
	return true;
    
  }else{
    digitalWrite(microphoneLED, LOW);
    Serial.print("This frequency is less: ");
    Serial.println(soundFound);
	return false;
  }
}

MicSensor mic = MicSensor();
