#include <iostream>

int main() {
	int i = 100, sum = 0;
	for (int i = 0; i != 10; ++i)
		sum += i;

	// I guess: i = 9, sum = 55.
	// I was wrong.
	// It should be i = 100, sum = 45.
	std::cout << i << " " << sum << std::endl;

	return 0;
}