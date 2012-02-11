#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string concatenation, input;

	// while (cin >> input)
	// 	concatenation += input;

	// cout << concatenation << endl;

	// concatenation = "";
	while (cin >> input)
		concatenation += input + " ";

	cout << concatenation << endl;

	return 0;
}