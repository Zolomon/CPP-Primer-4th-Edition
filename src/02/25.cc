#include <iostream>

int main() {
	
	int ival = 1.01;   // legal, will be 1
	//int &rval1 = 1.01; // illegal
	int &rval2 = ival; // legal
	const int &rval3 = 2; // legal, but for const references ONLY.

	rval2 = 3.14159; // should be legal.. will be 3 though!
	rval2 = rval3; // legal, should now print 2.
	ival = rval3; // legal, should now print 2.
	//rval3 = ival; // illegal, rval3 is read only!!

	std::cout << ival << std::endl;
	std::cout << rval2 << std::endl;
	std::cout << rval3 << std::endl;

	return 0;
}