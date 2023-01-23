#include "staticheader.h"

#include <iostream>

namespace nsStatic
{
	void change2(int newI)
	{
		i = newI;
	}

	void print2()
	{
		std::cout << i << std::endl;
	}

	void changeClass2(int newI)
	{
		Test::i = newI;
	}

	void printClass2()
	{
		std::cout << Test::i << std::endl;
	}
}
