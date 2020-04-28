#include <stdio.h>

void divide(int a, int b)
{
	if (b == 0) throw "0으로는 연산 불가";
	printf("나눅 결과 = %d\n", a / b);
}

int main()
{
	try
	{
		divide(10, 0);
	}
	catch (const char*msg)
	{
		puts(msg);
	}
	divide(10, 5);


	return 0;
}