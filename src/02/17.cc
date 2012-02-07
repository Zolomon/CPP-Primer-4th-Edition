#include <iostream>
#include <string>

using namespace std;

string global_str;
int global_int;

int main() {
	int local_int;
	string local_str;

	cout << "global_str: " << global_str << endl; // Empty string, ""
	cout << "global_int: " << global_int << endl; // 0
	cout << "local_str: " << local_str << endl;   // Empty string, ""
	cout << "local_int: " << local_int << endl;   // 0

	return 0;
}