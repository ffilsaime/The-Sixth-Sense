/****************************************************/
/* Name of the program: Vibration Motor Header      */
/* Author: Florebencia Fils-Aime               		*/
/* Person Number: 50190413                     		*/
/* C program file: vmotor.h          				*/
/* Date : 11/6/2019                            		*/
/* Used to test the vibration Motor and get    		*/
/* the methods                                 		*/
/****************************************************/

//#ifndef PIRSensor.h
//#define PIRSensor.h

class MotionSensor{
	public:
	MotionSensor();
	
	void pirSetup();
	bool motionDetected();
};

extern MotionSensor ms;

//#endif 
