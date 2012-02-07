#include <iostream>

int main() {
	
	int ival = 1.01;   // legal, will be 1
	//int &rval1 = 1.01; // illegal
	int &rval2 = ival; // legal
	const int &rval3 = 1; // legal, but for const references ONLY.

	std::cout << ival << std::endl;
	std::cout << rval2 << std::endl;
	std::cout << rval3 << std::endl;

	return 0;
}