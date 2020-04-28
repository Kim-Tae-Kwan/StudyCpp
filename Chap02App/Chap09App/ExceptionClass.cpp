#include <stdio.h>

class MyClass
{
public:
	class Exception
	{
	private:
		int Errorcode;
	public:
		Exception(int ae) :Errorcode(ae) {}
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

	void calc()
	{
		try
		{
			if (true)throw Exception(1);
		}
		catch (Exception &e)
		{
			printf("에러 코드 =%d =>", e.GetErrorcode());
			e.ReportError();
		}
	}

	void calc2() throw(Exception) {
		if (true)throw Exception(2);
	}


};




int main()
{
	MyClass m;
	m.calc();
	try
	{
		m.calc2();
	}
	catch (MyClass::Exception &e)
	{
		printf("에러 코드 =%d =>", e.GetErrorcode());
		e.ReportError();
	}


	return 0;
}