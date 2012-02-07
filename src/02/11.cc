#include <iostream>

int main() {
	int b,p,r = 1;
	
	std::cout << "Enter base: ";
	std::cin >> b;
	std::cout << "Enter exponent: ";
	std::cin >> p;

	for (int i = 0; i != p; ++i)
		r *= b;

	std::cout << b << " raised to the power of " << p << ": \t" << r << std::endl;

	return 0;
}