#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream ifs("readme.txt");
	string line;
	while(getline(ifs,line))
	{
		cout << line << endl;
	}
	return 0;
	
}

