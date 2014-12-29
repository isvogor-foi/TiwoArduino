/*
 * MotorThread.h
 *
 *  Created on: 16. pro 2014.
 *      Author: Ivan
 */

#ifndef MOTORTHREAD_H_
#define MOTORTHREAD_H_

#include "Arduino.h"
#include "mthread.h"
#include "MotorDriver/Motor.h"

enum Movement { FORWARD = 1, BACKWARD = 2, LEFT = 3, RIGHT = 4, STOP = 5};

class MotorThread : public Thread{
public:
	MotorThread(int id);
	void setMovement(Movement movement);
	bool loop();
private:
	int id;
	Movement currentMovement;
	Motor *motor;
};

#endif /* MOTORTHREAD_H_ */
