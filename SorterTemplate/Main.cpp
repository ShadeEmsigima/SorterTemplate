#include <iostream>
#include <vector>
#include "Template.h"

int main() {
	std::vector<std::string> colours{ "red", "green", "white", "blue", "orange", "green", "orange", "black", "purple" };
	// use functions from <algorithm> and <functional> to do things with (ORIGINAL copies of this vector)
	// 1) split vectors into 2 new vectors: 1 with everything that comes BEFORE 'purple' in alphabetical order
	// and 1 with everything that comes AFTER 'purple' in alphabetical order

	{
		std::vector<std::string> colours{ "red", "green", "white", "blue", "orange", "green", "orange", "black", "purple" };
		// 2) make all elements UPPERCASE.
	}
	{
		std::vector<std::string> colours{ "red", "green", "white", "blue", "orange", "green", "orange", "black", "purple" };
		// 3) to remove all double words
	}

	std::vector<double> numbers{ 10, 324422, 6, -23, 234.5, 654.1, 3.1242, -9.23, 635 };
	// use functions from <algorithm> and <functional> to do things with (ORIGINAL copies of this vector)
	// 1) remove all negative elements
	// 2) to determine if the elements are even
	// 3) to calculate the sum (everything added up), average, and product of all elements (multiply the next with the next)
	
	return 0;
}