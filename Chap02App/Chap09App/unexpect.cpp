#include <stdio.h>
#include <exception>
using namespace std;

void myunex()
{
	puts("�߻��ؼ��� �� �Ǵ� ���� �߻�");
	exit(-2);
}

void calc() throw(int)
{
	throw "string";

}



int main()
{
	set_terminate(myunex);
	try
	{
		calc();
	}
	catch (int a)
	{
		puts("������ ���� �߻�");
	}

	puts("���α׷� ����");
	return 0;
}