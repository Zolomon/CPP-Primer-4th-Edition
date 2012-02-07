#include <iostream>

int main() {
	
	int ival = 0; // legal
	const int &ri = 0; // legal, might be illegal due to 0 meaning NULL address or something...

	std::cout << ival << std::endl;
	std::cout << ri << std::endl;

	ival = ri; // legal, ival = 0
	//ri = ival; // illegal

	std::cout << ival << std::endl;

	return 0;
}