#include <stdio.h>
#include <exception>

void myterm()
{
	puts("처리되지 않은 예외 발생");
	exit(-1);
}

int main()
{
	set_terminate(myterm);
	try
	{
		throw 1;
	}
	catch (const char *m)
	{
		puts(m);
	}

}
