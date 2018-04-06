#include <iostream>
#include "convert.hpp"

int main()
{
	int n;
	std::cout << "n = ";
	std::cin >> n;

	Convert c(n);
	c.ConvertToRoman();
	std::cout << c.GetRoman() << std::endl;

/*	for(int i(1); i < 100; ++i)
	{
		c = i;
		c.ConvertToRoman();
		std::cout << c.GetRoman() << std::endl;


	}
	
*/
	return 0;
}