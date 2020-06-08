#include <iostream>
#include "Valve.h"

Valve::Valve() : bValveStatus{false}
{
	std::cout << "It's a valve" << std::endl;
}

Valve::~Valve()
{
}

void Valve::OpenValve()
{
	bValveStatus = true;
}

void Valve::CloseValve()
{
	bValveStatus = false;
}
