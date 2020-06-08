#pragma once
#include "LiquidPipe.h"

class Pump: public LiquidPipe
{
public:

	Pump();
	~Pump();
	void StartPump();
	void StopPump();

private:
	bool bPumpStatus = false;
};

