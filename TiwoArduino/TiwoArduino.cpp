// Do not remove the include below
#include "TiwoArduino.h"
#include "mthread.h"
#include "MotorDriver/MotorThread.h"
#include "Display/DisplayThread.h"
#include "Display/Symbols.h"

void setup()
{
// Add your initialization code here
	Serial.begin(9600);

	main_thread_list->add_thread(new MotorThread(MOTOR_THREAD_ID));
	//main_thread_list->add_thread(new DisplayThread(DISPLAY_THREAD_ID));
	Display *display = new Display();
	display->writeRow(0, "REC: FWD | 14.V");
	display->writeRow(1, "[ OBJ DETEC. ]");
	display->writeSymbol(1, 15, LCD_HEART);
}
