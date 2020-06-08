#pragma once
#include "LiquidPipe.h"

class Valve: public LiquidPipe
{
public:
	Valve();
	~Valve();
	void OpenValve();
	void CloseValve();

private: 
	bool bValveStatus;
};

