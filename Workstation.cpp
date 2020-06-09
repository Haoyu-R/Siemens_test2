#include <iostream>
#include "Workstation.h"

Workstation::Workstation()
{
	std::cout << "Initialize Festo Process Automation Workstation" << std::endl;
}

Workstation::~Workstation()
{
}

void Workstation::emergenceStop()
{
	std::cout << "Activate emergency stop of the workstation." << std::endl;
	pipe1.CloseValve();
	pipe2.StopPump();
}
