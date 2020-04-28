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
			puts("메모리가 부족");
			break;
		case 2:
			puts("연산 범위를 초과");
			break;
		case 3:
			puts("하드디스크 FULL");
			break;
		case 4:
			puts("스택이 가득 참");
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
		puts("작업 완료");
	}
	catch (Exception &e)
	{
		printf("에러 코드 =%d =>", e.GetErrorcode());
		e.ReportError();

	}

}