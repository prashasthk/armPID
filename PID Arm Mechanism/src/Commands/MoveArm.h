#ifndef MoveArm_H
#define MoveArm_H

#include "OI.h"
#include <WPILIb.h>
#include "../CommandBase.h"
#include "Subsystems/Arm.h"
#include "ctre/Phoenix.h"


class MoveArm : public CommandBase {
public:
	MoveArm();
	~MoveArm();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // MoveArm_H
