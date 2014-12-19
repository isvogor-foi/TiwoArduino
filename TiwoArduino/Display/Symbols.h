// make some custom characters:
#ifndef Symbols_H_
#define Symbols_H_

// symbol codes
static const int LCD_HEART = 1;
static const int LCD_SMILEY = 2;

// simbol bytes
static byte LCD_BYTE_HEART[8] = {
  0b00000,
  0b01010,
  0b11111,
  0b11111,
  0b11111,
  0b01110,
  0b00100,
  0b00000
};

static byte  LCD_BYTE_SMILEY[8] = {
  0b00000,
  0b00000,
  0b01010,
  0b00000,
  0b00000,
  0b10001,
  0b01110,
  0b00000
};

#endif /* Symbols */
