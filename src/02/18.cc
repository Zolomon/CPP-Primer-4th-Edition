#include <iostream>

int main() {
	extern std::string name;
	// Declares, but does not define, the string name. Nothing is allocated to it, 
	// it already exists somewhere else in the program.

	std::string name("exercise 3.5a")
	// Declares and defines name, "exercise 3.5a" is allocated to the variable.

	extern std::string name("exercise 3.5a") 
	// Declares and defines name, "exercise 3.5a" is allocated to the variable.  

	return 0;
}