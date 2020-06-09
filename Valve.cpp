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
	std::cout << "Open the valve" << std::endl;
	bValveStatus = true;
}

void Valve::CloseValve()
{
	std::cout << "Close the valve" << std::endl;
	bValveStatus = false;
}
