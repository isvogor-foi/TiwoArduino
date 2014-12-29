/*
 * Motor.h
 *
 *  Created on: 16. pro 2014.
 *      Author: Ivan
 */

#ifndef MOTOR_H_
#define MOTOR_H_

#include "Arduino.h"
#include "AccelStepper.h"

// pins
static int const DIR_LEFT = 10;
static int const PUL_LEFT = 11;
static int const DIR_RIGHT = 13;
static int const PUL_RIGHT = 12;

// speeds
static int const MAX_SPEED = 850; // max speed
static int const DEF_ACCEL = 300; // default acceleration
static int const DEF_SPEED = 300; // default speed

class Motor {
public:
	Motor();
	// setup methods
	void goForward();
	void goBackward();
	void goLeft();
	void goRight();
	// command methods
	void runMotors();
	void stop();
	void setSpeed(int speed);
private:
	AccelStepper *left_stepper;
	AccelStepper *right_stepper;
	int current_speed;
};

#endif /* MOTOR_H_ */
