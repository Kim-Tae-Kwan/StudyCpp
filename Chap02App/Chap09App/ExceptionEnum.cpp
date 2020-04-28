#include <stdio.h>

enum E_Error {OUTOFMEMORY,OVERRANGE,HARDFULL,STACKFULL};

class Exception
{
private:
	int Errorcode;
public:
	Exception(int ae):Errorcode(ae){}
	int GetErrorcode() { return Errorcode; }
	void ReportError()
	{
		switch (Errorcode) {
		case 1:
			puts("�޸𸮰� ����");
			break;
		case 2:
			puts("���� ������ �ʰ�");
			break;
		case 3:
			puts("�ϵ��ũ FULL");
			break;
		case 4:
			puts("������ ���� ��");
			break;
		}
	}
};

void report()
{
	if (true) throw Exception(3);

}
int main()
{
	try
	{
		report();
		puts("�۾� �Ϸ�");
	}
	catch (Exception &e)
	{
		printf("���� �ڵ� =%d =>", e.GetErrorcode());
		e.ReportError();

	}

}