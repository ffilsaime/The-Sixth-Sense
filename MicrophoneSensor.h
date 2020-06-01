/**********************************************************/
/* Name of the program: Microphone Sensor Header file     */
/* Author: Florebencia Fils-Aime               			  */
/* Person Number: 50190413                     			  */
/* C program file: MicrophoneSensor.h          			  */
/* Date : 11/6/2019                           			  */
/* Used to test the Mic Sensor and get the     			  */
/* methods                                     			  */
/**********************************************************/

//#ifndef MicrophoneSensor.h
//#define MicrophoneSensor.h

class MicSensor{
	public:
	MicSensor();
	
	void microphoneSetup();
	bool soundDetected();
};

extern MicSensor mic;

//#endif 
