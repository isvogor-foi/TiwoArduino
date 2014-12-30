/*
 * Motor.cpp
 *
 *  Created on: 16. pro 2014.
 *      Author: Ivan
 *
 *  Warning: While using Arduino UNO/Deumilanove, any Serial.print in the
 *  following code causes significant slow down of stepper motors.
 */
#include "Arduino.h"
#include "Motor.h"
#include "AccelStepper.h"



Motor::Motor() {
	// setup 2 wire connection to stepper drivers
	this->left_stepper = new AccelStepper(AccelStepper::FULL2WIRE, PUL_LEFT, DIR_LEFT);
	this->right_stepper = new AccelStepper(AccelStepper::FULL2WIRE, PUL_RIGHT, DIR_RIGHT);

	// set max speed (steps per second)
	this->left_stepper->setMaxSpeed(MAX_SPEED);
	this->right_stepper->setMaxSpeed(MAX_SPEED);

	// set default acceleration (steps per second per second)
	this->left_stepper->setAcceleration(DEF_ACCEL);
	this->right_stepper->setAcceleration(DEF_ACCEL);
}

void Motor::goForward(){
	this->left_stepper->setSpeed(-this->current_speed);
	this->right_stepper->setSpeed(this->current_speed);
}

void Motor::goBackward(){
	this->left_stepper->setSpeed(this->current_speed);
	this->right_stepper->setSpeed(-this->current_speed);
}

void Motor::goLeft(){
	this->left_stepper->setSpeed(this->current_speed);
	this->right_stepper->setSpeed(this->current_speed);
}

void Motor::goRight(){
	this->left_stepper->setSpeed(-this->current_speed);
	this->right_stepper->setSpeed(-this->current_speed);
}

void Motor::stop(){
	this->left_stepper->stop();
	this->right_stepper->stop();
	this->current_speed = 0;
}

void Motor::setSpeed(int speed){
	this->current_speed = speed;
}

void Motor::runMotors(){
	this->left_stepper->runSpeed();
	this->right_stepper->runSpeed();
}
