#pragma once
#include "Pipe.h"

class Pump: public Pipe
{
public:

	Pump();
	~Pump();
	void StartPump();
	void StopPump();

private:
	bool bPumpStatus = false;
};

