#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() 
{
	vector< vector<int> > ivec;			// OK
	//vector<string> svec = ivec; 		// ILLEGAL
	vector<string> svec(10, "null"); 	// OK

	return 0;
}