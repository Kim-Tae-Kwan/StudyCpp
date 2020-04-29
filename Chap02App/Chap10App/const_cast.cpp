#include <stdio.h>
#include <string>
using namespace std;

int main()
{
	char str[] = "string";
	string str2 = " ";

	const char* c1 = str;
	char* c2;
	//c2 = c1;
	c2 = const_cast<char*>(c1);
	c2[0] = 'S';
	puts(c2);


	return 0;
}