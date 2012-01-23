#include <iostream>
#include "Sales_item.h"

int main()
{
	// variables to hold running sum and data for the next record
	Sales_item total, trans;

	// is there data to process? 
	if (std::cin >> total)
	{
		while (std::cin >> trans)
			if (total.same_isbn(trans))
				total = total + trans;
			else {
				// no match: print & assign to total
				std::cout << total << std::endl;
				total = trans;		
			}
		// remember to print last record 
		std::cout << total << std::endl;
	} else {
		// no input! warn user
		std::cout << "No data?!" << std::endl;
		return -1;
	}
	return 0;
}