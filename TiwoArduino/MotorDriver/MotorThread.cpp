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
	//this->motor->setSpeed(500);

	this->setMovement(STOP);
}

bool MotorThread::loop(){

	switch(currentMovement){
		case FORWARD:
			this->motor->goForward();
			break;
		case BACKWARD:
			this->motor->goBackward();
			break;
		case LEFT:
			this->motor->goLeft();
			break;
		case RIGHT:
			this->motor->goRight();
			break;
		case STOP:
			this->motor->stop();
	}

	if(currentMovement != STOP){
		//Serial.println(currentMovement);
		this->motor->setSpeed(500);
		this->motor->runMotors();
	}

	return true;
}

void MotorThread::setMovement(Movement newMovement){
	this->currentMovement = newMovement;
}

