#include <iostream>
#include "Workstation.h"

Workstation::Workstation()
{
	std::cout << "Initialize workstation" << std::endl;
}

Workstation::~Workstation()
{
}

void Workstation::emergenceStop()
{
	std::cout << "Emergency! Stop all the pump and valve" << std::endl;
	pipe1.CloseValve();
	pipe2.StopPump();
}
