#include <iostream>

int main() {
	extern int ix = 1024; // DEFINITION, because even though we declare it with extern, we are initializing it
	int iy; // DEFINITION (default constructor)
	//extern int iz; // DECLARATION, no initialization occurs.
	//extern const int &ri; // DECLARATION? 

	return 0;
}