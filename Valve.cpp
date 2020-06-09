#include <iostream>
#include "Valve.h"

Valve::Valve() : bValveStatus{false}
{
	std::cout << "It's on a valve" << std::endl;
}

Valve::~Valve()
{
}

void Valve::OpenValve()
{
	std::cout << "Turn the valve on." << std::endl;
	bValveStatus = true;
}

void Valve::CloseValve()
{
	std::cout << "Turn the valve off." << std::endl;
	bValveStatus = false;
}
