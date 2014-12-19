/*
 * MotorThread.cpp
 *
 *  Created on: 16. pro 2014.
 *      Author: Ivan
 */
#include "MotorThread.h"
#include "Arduino.h"
#include "Motor.h"


MotorThread::MotorThread(int id) {
	this->id = id;
	this->motor = new Motor();

}

bool MotorThread::loop(){

	Serial.print("Hello from thread -> ");
	this->motor->goForward();
	sleep_milli(1000);

	return true;
}

