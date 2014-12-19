/*
 * Display.cpp
 *
 *  Created on: 19. pro 2014.
 *      Author: Ivan
 */
#include "Arduino.h"
#include "Display.h"
#include "LiquidCrystal.h"
#include "Symbols.h"

Display::Display() {
	this->lcdDisplay = new LiquidCrystal(LCD_RS, LCD_ENABLE, LCD_D4, LCD_D5, LCD_D6, LCD_D7);
	this->lcdDisplay->begin(COLS_MAX, ROWS_MAX);

	this->lcdDisplay->createChar(LCD_HEART, LCD_BYTE_HEART);
	this->lcdDisplay->createChar(LCD_SMILEY, LCD_BYTE_SMILEY);
}

void Display::writeChar(int row, int column, char character){
	this->lcdDisplay->setCursor(column, row);
	this->lcdDisplay->print(character);
	this->lcdDisplay->display();
}

void Display::writeRow(int row, char text[COLS_MAX]){
	this->lcdDisplay->setCursor(0, row);
	this->lcdDisplay->print(text);
	this->lcdDisplay->display();
}

void Display::writeSymbol(int row, int column, int symbol_code){
	this->lcdDisplay->setCursor(column, row);
	this->lcdDisplay->write(symbol_code);
}
