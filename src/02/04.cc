/*
Short:
signed: 	-32768 to 32767
unsigned: 		 0 to 65535

If we assign 100,000 to a signed: 
100000 % 32767 = 1699
Unsigned: remainder of the value modulo MAX; 
100000 % 65535 = 34465
*/

// TIAS (TRY IT AND SEE)

#include <iostream>

int main(int argc, char const *argv[])
{
	std::cout << "100000 in hex =  " << std::hex << 100000 << std::dec << std::endl;
	signed short signedShort 		= 100000;
	unsigned short unsignedShort 	= 100000;

	std::cout << "signedShort   = " << signedShort << std::endl;
	std::cout << "unsignedShort =  " << unsignedShort << std::endl;

	return 0;
}