#ifndef OI_H
#define OI_H

#include <WPILIb.h>
#include "ctrlib/CANTalon.h"

class OI {
public:
	OI();
	~OI();
	Joystick * getarmJoystick();
private:
	Joystick * armJoystick;
};


#endif  // OI_H
