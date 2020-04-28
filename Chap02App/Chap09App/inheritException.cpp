#include <stdio.h>

class Exception {
protected:
	int number;
public:
	Exception(int n):number(n){}
	void PrintError() {
		printf("[ERROR]%d는 음수로 오류\n", number);
	}
};

class TooBigException : public Exception {
public:
	TooBigException(int n):Exception(n){}
	 void PrintError()
	{
		printf("[ERROR]%d는 너무 큽니다. 100보다 작아야 합니다.\n", number);
	}

};

class OddException : public TooBigException {
public:
	OddException(int n) : TooBigException(n) {}
	 void PrintError()
	{
		printf("[ERROR]%d는 홀수입니다. 짝수여야 합니다.\n", number);
	}
};

int main()
{
	int n;
	while (true) {
		try
		{
			printf("숫자를 입력하세요(끝낼 때 0) : ");
			scanf("%d", &n);
			if (n == 0)break;
			if (n < 0)throw Exception(n);
			if (n > 100)throw TooBigException(n);
			if (n % 2 != 0)throw OddException(n);
			printf("%d 숫자는 규칙에 맞는 숫자입니다.\n", n);
		}
		catch (Exception &e)
		{
			e.PrintError();
		}










	}


}