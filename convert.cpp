#include <iostream>
#include <string>
#include <map>

#include "convert.hpp"

Convert::Convert(int n): comp({
									{1,	   "I"},
									{4,	   "IV"},
									{5,	   "V"},
									{9,	   "IX"},
									{10,   "X"},
									{40,   "XL"},
									{50,   "L"},
									{90,   "XC"},
									{100,  "C"},
									{400,  "CD"},
									{500,  "D"},
									{900,  "CM"},
									{1000, "M"}
								}), n_(n)
{

}

							



void Convert::ConvertToRoman()
{
	auto it = comp.end();
	it--;

	if (!(str.empty()))
	{
		str = "";
	}

	while(n_)
	{
		if (n_/it->first)
		{
			str += it->second;
			n_ -= it->first;
		}
		else
		{
			it--;
		}

	}


}


const std::string& Convert::GetRoman()
{
	return str;
}


Convert& Convert::operator=(int n)
{
	n_ = n;
	return *this;

}










