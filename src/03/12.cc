#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> ivec1; // 0 elements
	vector<int> ivec2(10); // 10 elements value-initialized to 0
	vector<int> ivec3(10, 42); // 10 elements value-initialized to 42
	vector<string> svec1; // 0 elements
	vector<string> svec2(10); // 10 elements value-initialized to "", empty string.
	vector<string> svec3(10, "hello"); // 10 elements value-initialized to "hello"

	cout << "ivec1.size(): " 							<< ivec1.size() << endl;
	cout << "vector<int> ivec2(10): " 					<< ivec2.size() << endl;
	cout << "vector<int> ivec3(10, 42): " 				<< ivec3.size() << endl;
	cout << "vector<string> svec1: " 					<< svec1.size() << endl;
	cout << "vector<string> svec2(10): " 				<< svec2.size() << endl;
	cout << "vector<string> svec3(10, \"hello\"): " 	<< svec3.size() << endl;

	cout << "ivec1 contains: " << endl;
	for (string::size_type i = 0; i != ivec1.size(); ++i)
		cout << ivec1[i] << endl;

	cout << "ivec2 contains: " << endl;
	for (string::size_type i = 0; i != ivec2.size(); ++i)
		cout << ivec2[i] << endl;

	cout << "ivec3 contains: " << endl;
	for (string::size_type i = 0; i != ivec3.size(); ++i)
		cout << ivec3[i] << endl;

	cout << "svec1 contains: " << endl;
	for (string::size_type i = 0; i != svec1.size(); ++i)
		cout << svec1[i] << endl;

	cout << "svec2 contains: " << endl;
	for (string::size_type i = 0; i != svec2.size(); ++i)
		cout << svec2[i] << endl;

	cout << "svec3 contains: " << endl;
	for (string::size_type i = 0; i != svec3.size(); ++i)
		cout << svec3[i] << endl;

	return 0;
}