#include <string>
#include <iostream>
#include <boost/algorithm/string.hpp>
using namespace std;

int main()
{
	string str = "Hello World";
	for (int i = 0; i < str.size(); i++)
	{
		str[i] = toupper(str[i]);
	}
	cout << str << endl;


	//boost upper »ç¿ë
	string str2 = "Hello World";
	boost::to_upper(str2);
	cout << str2 << endl;


	return 0;
}