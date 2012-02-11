#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string s;
	cout << s[0] << endl;

	if (s[0] == '\0')
		cout << "Only contains a null terminator!" << endl;
	else 
		cout << "Contains something strange!" << endl;

	// It is valid.. Because [] returns a const char, and the const char is of [size() + 1].
	// Since the string is empty, the only character that remains is a '\0', null terminator. 
	
	return 0;
}