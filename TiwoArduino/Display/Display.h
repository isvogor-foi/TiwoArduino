/*
 * Display.h
 *
 *  Created on: 19. pro 2014.
 *      Author: Ivan
 */

#ifndef LCD_DISPLAY_H_
#define LCD_DISPLAY_H_

#include "Arduino.h"

class Display {
public:
	Display();
	void displayText(char text[]);
};

#endif /* LCD_DISPLAY_H_ */
