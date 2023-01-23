#include "staticheader.h"
#include "externheader.h"

int main()
{
	// this is what happens with static in header
	nsStatic::print2();   // we can already print it
	nsStatic::change1(1); // we can change it for static1.cpp
	nsStatic::print1();   // and static1.cpp remembers
	nsStatic::change2(2); // we can change it for static2.cpp
	nsStatic::print2();   // and static2.cpp will also remember
	nsStatic::print1();   // but static1.cpp still remembers its own !!!

	// this is what happens with extern in header
	nsExtern::print2();   // we can already print it also
	nsExtern::change1(5); // and we can change it for extern1.cpp
	nsExtern::print1();   // extern1.cpp remembers the change
	nsExtern::change2(7); // same for extern2.cpp
	nsExtern::print2();   // same
	nsExtern::print1();   // and extern1.cpp knows about the change done in extern2.cpp !!! <- we want this

	// static members of a class behave like extern free variables (except in anonymous namespaces)
	nsStatic::printClass2();
	nsStatic::changeClass1(11);
	nsStatic::printClass1();
	nsStatic::changeClass2(22);
	nsStatic::printClass2();
	nsStatic::printClass1();
}
