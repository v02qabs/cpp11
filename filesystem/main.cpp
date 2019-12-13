#include <iostream>
#include <string>
#include <filesystem>

using namespace std;
using namespace filesystem;


int main()
{
	cout << "Hello" << endl;
	path p = "/data/data/com.termux/files/usr";
	cout << p.string() << endl;
	return 0;
}

