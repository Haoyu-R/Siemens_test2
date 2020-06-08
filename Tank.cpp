#include <iostream>
#include "Tank.h"

Tank::Tank():bOverflowStatus{false}
{
	std::cout << "Initialize tank in the workstation" << std::endl;
}

Tank::~Tank()
{
}
