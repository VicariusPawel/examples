#ifndef EXTERNHEADER_H
#define EXTERNHEADER_H

namespace nsExtern
{
	extern int i; // extern should not be declared but only defined in the header

	void change1(int newI);
	void change2(int newI);
	void print1();
	void print2();
}

#endif //EXTERNHEADER_H
