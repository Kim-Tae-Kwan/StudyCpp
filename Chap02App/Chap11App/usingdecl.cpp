#include<stdio.h>



namespace UTIL {
	int value;
	double score;
	void sub()
	{
		puts("~~~");
	}
}

int main()
{

	using UTIL::value;

	value = 3;
	UTIL::score = 1.2345;
	UTIL::sub();

	return 0;
}