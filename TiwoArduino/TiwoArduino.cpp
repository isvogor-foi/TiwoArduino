// Do not remove the include below
#include "TiwoArduino.h"
#include "mthread.h"
#include "MotorDriver/MotorThread.h"
#include "Display/DisplayThread.h"
#include "Display/Symbols.h"
#include "Serial/SerialThread.h"

MotorThread *motorThread = new MotorThread(MOTOR_THREAD_ID);
SerialThread *serialThread = new SerialThread(SERIAL_THREAD_ID, motorThread);

void setup()
{
// Add your initialization code here
	Serial.begin(9600);

	main_thread_list->add_thread(motorThread);
	main_thread_list->add_thread(serialThread);
	//main_thread_list->add_thread(new DisplayThread(DISPLAY_THREAD_ID));

	/*
	Display *display = new Display();
	display->writeRow(0, "REC: FWD | 14.V");
	display->writeRow(1, "[ OBJ DETEC. ]");
	display->writeSymbol(1, 15, LCD_HEART);
	*/
}
