#pragma once
#include "Pump.h"
#include "Valve.h"
#include "Tank101.h"
#include "Tank102.h"

class Workstation
{
public:
	Workstation();
	~Workstation();

	void emergenceStop();

	Tank101 tank101 = Tank101();
	Tank102 tank102 = Tank102();
	Pump pipe2 = Pump();
	Valve pipe1 = Valve();
};

