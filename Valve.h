#pragma once
#include "Pipe.h"

class Valve: public Pipe
{
public:
	Valve();
	~Valve();
	void OpenValve();
	void CloseValve();

private: 
	bool bValveStatus;
};

