/****************************************************/
/* Name of the program: Vibration Motor C++ file    */
/* Author: Florebencia Fils-Aime               		*/
/* Person Number: 50190413                     		*/
/* C program file: vmotor.c          				*/
/* Date : 11/6/2019                            		*/
/* Used to test the vibration Motor and get    		*/
/* the methods                                 		*/
/****************************************************/

#include "Arduino.h"
#include "vmotor.h"

const uint8_t vMotorLED = 1;
const uint8_t Motor = 8;

VibrationMotor::VibrationMotor(){}

void VibrationMotor::SETUP(){
	pinMode(vMotorLED, OUTPUT); // makes sure the led can light up
	pinMode(Motor, OUTPUT); // makes sure the motor makes a sound
}

void VibrationMotor::startMotor(){
	digitalWrite(Motor, HIGH);
	digitalWrite(vMotorLED, HIGH);
}

void VibrationMotor::stopMotor(){
	digitalWrite(Motor, LOW);
	digitalWrite(vMotorLED, LOW);
}

VibrationMotor vm = VibrationMotor();