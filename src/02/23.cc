#include <iostream>

int main() {
	const int buf; // undefined initial value as const, shouldn't happen? 
	
	int cnt = 0;
	const int sz = cnt; // I think this is legal.. compiler can deduce the value of cnt and apply it to sz. 

	cnt++; // Legal
	sz++;  // Illegal - sz is const (read-only)!!

	return 0;
}