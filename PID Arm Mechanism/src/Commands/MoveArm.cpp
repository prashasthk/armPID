#include "MoveArm.h"

MoveArm::MoveArm() {
	Requires(armDrive);
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void MoveArm::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void MoveArm::Execute() {
	double armValue = oi->getarmJoystick()->GetY();
	double p = 0.3;
	double i = 0.003;
	double d = 3;
	double d = 0.003;
	int izone = 300;
	double ramprate = 48;
	int profile = 1;
	armDrive -> SetProfileSlot(profile);
	armDrive -> SetPID(p, i, d, f);
	armDrive -> SetIzone(izone);
	armDrive -> SetCLoseLoopRampRate(ramprate);
	armDrive -> moveArm(armValue);
}

// Make this return true when this Command no longer needs to run execute()
bool MoveArm::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void MoveArm::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MoveArm::Interrupted() {

}
