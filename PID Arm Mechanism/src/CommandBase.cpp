#include "CommandBase.h"

#include <Commands/Scheduler.h>

#include "Subsystems/ExampleSubsystem.h"

// Initialize a single static instance of all of your subsystems. The following
// line should be repeated for each subsystem in the project.
std::unique_ptr<OI> CommandBase::oi = nullptr;
Arm * CommandBase::armDrive = nullptr;


CommandBase::CommandBase(const std::string &name) :
		frc::Command(name) {

}
void CommandBase::initialize()
{
	armDrive = new Arm();
}
