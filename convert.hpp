#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <map>

class Convert
{
private:
	int n_;
	const std::map<int, std::string> comp; 
	std::string str;
public:
	Convert(int = 0);
	void ConvertToRoman();  
	void Show();
	const std::string & GetRoman();
	Convert& operator=(int); 

	//~Convert();
	
};













#endif
