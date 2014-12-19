// Do not remove the include below
#include "TiwoArduino.h"
#include "mthread.h"
#include "MotorDriver/MotorThread.h"
#include "Display/DisplayThread.h"

void setup()
{
// Add your initialization code here
	Serial.begin(9600);

	main_thread_list->add_thread(new MotorThread(MOTOR_THREAD_ID));
	main_thread_list->add_thread(new DisplayThread(DISPLAY_THREAD_ID));

}
