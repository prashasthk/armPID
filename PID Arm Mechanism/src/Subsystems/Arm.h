#ifndef Arm_H
#define Arm_H

#include <Commands/Subsystem.h>
#include <ctrlib/CANTalon.h>
#include <Commands/MoveArm.h>

class Arm : public Subsystem {
private:
	CANTalon * talonArm;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

public:
	Arm();
	~Arm();
	void moveArm(double armValue);
	void InitDefaultCommand();
};

#endif  // Arm_H
