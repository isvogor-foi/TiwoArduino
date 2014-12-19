/*
 * DisplayThread.cpp
 *
 *  Created on: 19. pro 2014.
 *      Author: Ivan
 */

#include "display.h"
#include "DisplayThread.h"

DisplayThread::DisplayThread(int id) {
	display = new Display();
	this->id = id;
}

bool DisplayThread::loop(){
	display->writeRow(0, "Hello...");
	sleep_milli(2000);
	return true;
}
