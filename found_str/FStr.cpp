#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Start find to word." << endl;
	string x("MyNameIsCPP.c");
	cout << "words : " << "MYNameIsCPP.c" << endl;
	cout << "x.find(\".c\"): " << x.find(".c") << endl;
	return 0;
}

