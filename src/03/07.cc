#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() 
{
	string s1, s2;
	
	cout << "Enter two strings: " << endl;

	cin >> s1 >> s2;

	cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl;
	cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;
	cout << s1 << " > " << s2 << ": " << (s1 == s2) << endl;
	cout << s1 << ".size() == " << s2 << ".size(): " << (s1.size() == s2.size()) << endl;
	cout << s1 << ".size() < " << s2 << ".size(): " << (s1.size() < s2.size()) << endl;
	cout << s1 << ".size() > " << s2 << ".size(): " << (s1.size() > s2.size()) << endl;

	return 0;
}