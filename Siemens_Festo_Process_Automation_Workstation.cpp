// Siemens_Festo_Process_Automation_Workstation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Workstation.h"

int main()
{
    Workstation station1 = Workstation();
    station1.emergenceStop();
}
