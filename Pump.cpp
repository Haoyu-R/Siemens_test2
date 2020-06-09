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
	std::cout << "Turn the pump on." << std::endl;
	bPumpStatus = true;
}

void Pump::StopPump()
{
	std::cout << "Turn the pump off." << std::endl;
	bPumpStatus = false;
}
