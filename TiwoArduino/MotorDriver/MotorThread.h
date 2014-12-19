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

class MotorThread : public Thread{
public:
	MotorThread(int id);
	bool loop();
private:
	int id;
	Motor *motor;
};

#endif /* MOTORTHREAD_H_ */
