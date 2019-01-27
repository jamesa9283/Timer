#include "Countingmech.h"
#include "windows.h"
#include <iostream>
#include <iomanip>


Countingmech::Countingmech()
{
	double a, b, c, d;
	a = 0;
	b = 0;
	while (true)
	{
		b = a + 1;
		a = b;
		Sleep(990);
		c = b / 3600;
		d = c * 3;
		std::cout << std::fixed << std::setprecision(2) << d << std::endl;
	}
}


Countingmech::~Countingmech()
{
	double a, b, c, d;
	a = 0;
	b = 0;
	while (true)
	{
		b = a + 1;
		a = b;
		Sleep(990);
		c = b / 3600; 
		d = c * 3;
		std::cout << std::fixed << std::setprecision(2) << d << std::endl;
	}
}
