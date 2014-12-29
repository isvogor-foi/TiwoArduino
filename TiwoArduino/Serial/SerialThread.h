/*
 * SerialThread.h
 *
 *  Created on: 20. pro 2014.
 *      Author: Ivan
 */

#ifndef SERIAL_SERIALTHREAD_H_
#define SERIAL_SERIALTHREAD_H_

#include "Arduino.h"
#include "mthread.h"
#include "MotorDriver/MotorThread.h"

class SerialThread : public Thread{
public:
	SerialThread(int id, MotorThread *motorThread);
	void read();
	bool loop();
	void evaluateCommand(char command[20]);
private:
	int id;
	MotorThread *motorThread;
};

#endif /* SERIAL_SERIALTHREAD_H_ */
