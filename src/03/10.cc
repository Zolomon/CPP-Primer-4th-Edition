#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string input, output;

	cout << "Enter a string with punctuations: " << endl;

	while ( cin >> input) {
		for(string::size_type i = 0; i != input.size(); ++i) {
			if (!ispunct(input[i])) {
				output += input[i];
			}
		}
		output += " ";
	}

	cout << "The string without punctuation is: " << endl;
	cout << output << endl;

	return 0;
}