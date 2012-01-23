#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item previous, current;
	int i = 0;

	std::cout << "Enter ISBNs (ctrl+c to quit):" << std::endl;
	
	// Read the first transaction...
	std::cin >> previous;

	// While we have more transactions, read each one by one
	// If a transaction have the same ISBN as a previous one,
	// add it to the group and read the next one
	// Otherwise: output the previous transaction, and start 
	// With a new group. 
	while(std::cin >> current) {
		if (previous.same_isbn(current)) {
			previous = previous + current;
		} else {
			std::cout << "Group: " << (++i) << ": " << previous << std::endl;
			previous = current;
		}
	}

	// If we don't have any more transactions to read, output 
	// the last transaction group.
	std::cout << previous;

	return 0;
}
