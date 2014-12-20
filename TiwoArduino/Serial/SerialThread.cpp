/*
 * SerialThread.cpp
 *
 *  Created on: 20. pro 2014.
 *      Author: Ivan
 */

#include "Arduino.h"
#include "mthread.h"
#include "SerialThread.h"

SerialThread::SerialThread(int id) {
	//initialize serial
	this->id = id;
}

bool SerialThread::loop() {

	this->read();

	sleep_milli(500);
	return true;
}

void SerialThread::read() {

	char inData[20];
	char inChar = -1;
	byte index = 0;
	bool receivedData = false;

	while (Serial.available() > 0) {
		receivedData = true;
		if (index < 19) {
			inChar = Serial.read();
			inData[index] = inChar;
			index++;
			inData[index] = '\0';
			if (inChar == '\n') break;
		}
	}

	if(receivedData){
		Serial.print("Received: ");
		Serial.println(inData);
	}

}

