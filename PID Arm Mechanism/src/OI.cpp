#include "OI.h"

#include <WPILib.h>

OI::OI()
:armJoystick(new Joystick(0))
{
	// Process operator interface input here.
}
OI::~OI()
{
	delete armJoystick;
}
Joystick * OI::getarmJoystick()
{
	return armJoystick;
}
