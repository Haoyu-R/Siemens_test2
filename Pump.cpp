#include <iostream>
#include "Pump.h"

Pump::Pump() :bPumpStatus{false}
{
	std::cout << "It's on a pump" << std::endl;
}

Pump::~Pump()
{
}

void Pump::StartPump()
{
	std::cout << "Start the pump" << std::endl;
	bPumpStatus = true;
}

void Pump::StopPump()
{
	std::cout << "Stop the pump" << std::endl;
	bPumpStatus = false;
}
