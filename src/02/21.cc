#include <iostream>

int main() {
	
	int sum = 0;
	for (int i = 0; i != 10; ++i)
		sum += i;

	std::cout << "Sum from 0 to " << i // i is out of scope!!
			  << " is " << sum << std::endl;

	return 0;
}