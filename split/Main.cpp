#include <iostream>
#include <iterator>
#include <regex>
#include <string>
#include <initializer_list>


using namespace std;

vector<string> split(string&& s, regex&& pattern)
{
	std::sregex_token_iterator first(s.begin(), s.begin(), s.end(), pattern, -1);
	std::sregex_token_iterator last;
	return vector<string>(first, last);
}


int main()
{
	string s = "123 public html";
	vector<string> result = split(move(s), regex(" "));
	for(const  string& x : result)
	{
		cout << x << endl;
	}
	return 0;
}

