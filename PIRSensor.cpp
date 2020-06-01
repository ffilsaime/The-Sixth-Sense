/****************************************************************************************************************/
/* Name of the program: PIR Sensor                                                                              */
/* Author: Florebencia Fils-Aime                                                                                */
/* Person Number: 50190413                                                                                      */
/* C program file: PIRSensor.c                                                                                  */
/* Date : 10/15/2019                                                                                            */
/* Used to test the PIRSensor and get the                                                                       */
/* methods                                                                                                      */
/* Adapted From: https://learn.adafruit.com/pir-passive-infrared-proximity-motion-sensor/using-a-pir-w-arduino  */ 
/****************************************************************************************************************/

#include "Arduino.h"
#include "PIRSensor.h"

const uint8_t inputPin = 11;
uint8_t pirState = LOW;
const uint8_t pirLED = 13;
uint8_t pirResponse = 0;

MotionSensor::MotionSensor(){}

void MotionSensor::pirSetup(){
  pinMode(pirLED, OUTPUT); // sets the led as an output
  pinMode(inputPin, INPUT); //sets the input pin as an input
  Serial.begin(9600); // sets the data rate in bits per second for serial data transmission
}

bool MotionSensor::motionDetected(){
  pirResponse = digitalRead(inputPin);
  if(pirResponse == HIGH){ // check if something moved
    digitalWrite(pirLED, HIGH); //turn on the led
    if(pirState == LOW){
      Serial.println("Motion detected!");
      pirState = HIGH;
	  return true;
    }
  }
  else {
    digitalWrite(pirLED, LOW);
    if(pirState == HIGH){
      Serial.println("Motion ended!");
      pirState = LOW;
	  return false;
    }
  }
  return false;
}

MotionSensor ms = MotionSensor();
