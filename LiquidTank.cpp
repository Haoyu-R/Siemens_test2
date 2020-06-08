#include <iostream>
#include "LiquidTank.h"

LiquidTank::LiquidTank():bOverflowStatus{false}
{
	std::cout << "Initialize tank in the workstation" << std::endl;
}

LiquidTank::~LiquidTank()
{
}
