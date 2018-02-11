#include "Arm.h"
#include "../RobotMap.h"

Arm::Arm() :
	frc::Subsystem("Arm"),
	talonArm(new CANTalon(4))  {

}
Arm::~Arm() {
	delete talonArm;
}
void Arm::moveArm(double armValue){
	talonArm -> Set(armValue);
}
void Arm::InitDefaultCommand() {
SetDefaultCommand(new MoveArm());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
