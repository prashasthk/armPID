#ifndef Arm_H
#define Arm_H

#include <Commands/Subsystem.h>
#include "ctre/Phoenix.h"
#include <Commands/MoveArm.h>

class Arm : public Subsystem {
private:
	TalonSRX * talonArm;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

public:
	Arm();
	~Arm();
	void moveArm(double armValue);
	void InitDefaultCommand();
};

#endif  // Arm_H
