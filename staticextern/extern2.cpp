#include "externheader.h"

#include <iostream>

// extern can be defined only once in a program (all compilation units)
// if we uncomment below line, linker will complain about double definition
// int nsExtern::i = 0;
// eg. "extern2.cpp.obj : error LNK2005: "int nsExtern::i" (?i@nsExtern@@3HA) already defined in extern1.cpp.obj"

namespace nsExtern
{
	void change2(int newI)
	{
		i = newI;
	}

	void print2()
	{
		std::cout << i << std::endl;
	}
}
