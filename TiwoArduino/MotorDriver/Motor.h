/*
 * Motor.h
 *
 *  Created on: 16. pro 2014.
 *      Author: Ivan
 */

#ifndef MOTOR_H_
#define MOTOR_H_

#include "Arduino.h"

class Motor {
public:
	Motor();
	void goForward();
	void goBackward();
	void goLeft();
	void goRight();
	void stop();
};

#endif /* MOTOR_H_ */
