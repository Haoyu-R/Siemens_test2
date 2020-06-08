#pragma once
#include "LiquidTank.h"

class Tank101: public LiquidTank
{
	bool bMaxLevelStatus;
	bool bMinLevelStatus;
public:
	Tank101();
	~Tank101();
};
