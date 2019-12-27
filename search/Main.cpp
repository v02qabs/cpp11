#include <iostream>
#include <string>
#include <functional>

using namespace std;

int main()
{

	const string str = "Hello11Hello222";
	const string query = "Hello2";
	const auto searcher = boyer_moore_horspool_searcher(query.begin(),query.end());
	
	const auto result = searcher(str.begin(), str.end());
	if(result.first != str.end())
	{
		cout << "(" << distance(str.begin(), result.first) << ", " << distance(str.begin(), result.second) << ")" << endl;
}
}


