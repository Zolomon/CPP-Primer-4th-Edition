#include <iostream>

using namespace std;

int main() {
	
	int month = 9, day = 7;
	cout << month << " " << day << endl;

	// Commented lines are errors.
	// Error: 0 before a digit means it's using octal representation to specify the value.
	// This means that you can't use 09 because 9 > 8.
	//month = 09, day = 07;
	//cout << month << " " << day << endl;

	return 0;
}