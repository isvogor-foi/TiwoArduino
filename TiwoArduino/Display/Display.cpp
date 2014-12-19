/*
 * Display.cpp
 *
 *  Created on: 19. pro 2014.
 *      Author: Ivan
 */
#include "Arduino.h"
#include "Display.h"

Display::Display() {}

void Display::displayText(char text[]){
	Serial.print("Sending text: ");
	Serial.println(text);
}
