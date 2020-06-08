#include <iostream>
#include "Pump.h"

Pump::Pump() :bPumpStatus{false}
{
	std::cout << "It's a Pump" << std::endl;
}

Pump::~Pump()
{
}

void Pump::StartPump()
{
	bPumpStatus = true;
}

void Pump::StopPump()
{
	bPumpStatus = false;
}
