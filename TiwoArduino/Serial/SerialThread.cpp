/*
 * SerialThread.cpp
 *
 *  Created on: 20. pro 2014.
 *      Author: Ivan
 */

#include "Arduino.h"
#include "mthread.h"
#include "SerialThread.h"
#include "string.h"
#include "MotorDriver/MotorThread.h"

SerialThread::SerialThread(int id, MotorThread *motorThread) {
	//initialize serial
	this->id = id;
	this->motorThread = motorThread;
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
		this->evaluateCommand(inData);
	}
}

void SerialThread::evaluateCommand(char command[20]){
	if(strcmp(command, "FORWARD") == 0){
		Serial.println("FORWARD");
		this->motorThread->setMovement(FORWARD);
	}
	if(strcmp(command, "BACKWARD") == 0){
		Serial.println("BACKWARD");
		this->motorThread->setMovement(BACKWARD);
	}
	if(strcmp(command, "LEFT") == 0){
		Serial.println("LEFT");
		this->motorThread->setMovement(LEFT);

	}
	if(strcmp(command, "RIGHT") == 0){
		Serial.println("RIGHT");
		this->motorThread->setMovement(RIGHT);

	}
	if(strcmp(command, "STOP") == 0){
		Serial.println("STOP");
		this->motorThread->setMovement(STOP);

	}
}

