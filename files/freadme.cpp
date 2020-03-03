#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::ifstream ifs("readme.txt");
	std::string str;
	ifs>>str;
	std::cout<<str<<std::endl;
	return 0;
}


