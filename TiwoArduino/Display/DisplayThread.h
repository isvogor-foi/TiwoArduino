/*
 * DisplayThread.h
 *
 *  Created on: 19. pro 2014.
 *      Author: Ivan
 */

#ifndef LCD_DISPLAYTHREAD_H_
#define LCD_DISPLAYTHREAD_H_

#include "Arduino.h"
#include "mthread.h"
#include "Display.h"

class DisplayThread : public Thread{
public:
	DisplayThread(int id);
	bool loop();
private:
	int id;
	Display *display;
};

#endif /* LCD_DISPLAYTHREAD_H_ */
