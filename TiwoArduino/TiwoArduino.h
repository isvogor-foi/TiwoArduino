// Only modify this file to include
// - function definitions (prototypes)
// - include files
// - extern variable definitions
// In the appropriate section

#ifndef TiwoArduino_H_
#define TiwoArduino_H_
#include "Arduino.h"
//add your includes for the project TiwoBot here

//thread ids
static int const MOTOR_THREAD_ID = 1;
static int const DISPLAY_THREAD_ID = 2;
static int const SERIAL_THREAD_ID = 3;

//end of add your includes here
#ifdef __cplusplus
extern "C" {
#endif
void loop();
void setup();
#ifdef __cplusplus
} // extern "C"
#endif

//add your function definitions for the project TiwoBot here




//Do not add code below this line
#endif /* TiwoBot_H_ */
