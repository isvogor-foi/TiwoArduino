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

class SerialThread : public Thread{
public:
	SerialThread(int id);
	void read();
	bool loop();
private:
	int id;
};

#endif /* SERIAL_SERIALTHREAD_H_ */
