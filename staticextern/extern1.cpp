#include "externheader.h"

#include <iostream>

int nsExtern::i = 55; // here we define the extern. see explanation in extern2.cpp for lack of second one

namespace nsExtern
{
	void change1(int newI)
	{
		i = newI;
	}

	void print1()
	{
		std::cout << i << std::endl;
	}
}
