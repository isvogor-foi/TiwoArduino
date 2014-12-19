/*
 * Motor.cpp
 *
 *  Created on: 16. pro 2014.
 *      Author: Ivan
 */
#include "Arduino.h"
#include "Motor.h"

Motor::Motor() {}

void Motor::goForward(){
	Serial.println("Going forward");
}

void Motor::goBackward(){
	Serial.println("Going backward");
}

void Motor::goLeft(){
	Serial.println("Going left");
}

void Motor::goRight(){
	Serial.println("Going right");
}

void Motor::stop(){
	Serial.println("Stopping");
}
