#include "staticheader.h"

#include <iostream>

namespace nsStatic
{
	void change1(int newI)
	{
		i = newI;
	}

	void print1()
	{
		std::cout << i << std::endl;
	}

	int Test::i = 1;

	void changeClass1(int newI)
	{
		Test::i = newI;
	}

	void printClass1()
	{
		std::cout << Test::i << std::endl;
	}
}
