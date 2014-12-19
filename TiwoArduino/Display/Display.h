/*
 * Display.h
 *
 *  Created on: 19. pro 2014.
 *      Author: Ivan
 */

#ifndef LCD_DISPLAY_H_
#define LCD_DISPLAY_H_

#include "Arduino.h"
#include "LiquidCrystal.h"

// lcd size
static const int ROWS_MAX = 2;
static const int COLS_MAX = 16;

// pinout
static const int LCD_RS = 8;
static const int LCD_ENABLE = 9;
static const int LCD_D4 = 4;
static const int LCD_D5 = 5;
static const int LCD_D6 = 6;
static const int LCD_D7 = 7;

class Display {
public:
	Display();
	void writeRow(int row, char text[COLS_MAX]);
	void writeChar(int row, int column, char character);
	void writeSymbol(int row, int column, int symbol_code);
private:
	LiquidCrystal *lcdDisplay;
};

#endif /* LCD_DISPLAY_H_ */
