#ifndef STATICHEADER_H
#define STATICHEADER_H

#include <iostream>

namespace nsStatic
{
	static int i = 11; // static can be defined here but... (see comments in main)

	void change1(int newI);
	void change2(int newI);
	void print1();
	void print2();

	class Test
	{
	public:
		static int i; // we cannot define it here
	};

	void changeClass1(int newI);
	void changeClass2(int newI);
	void printClass1();
	void printClass2();
}

#endif //STATICHEADER_H
