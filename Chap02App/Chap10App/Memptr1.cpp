#include <stdio.h>

class Calc
{
public:
	void Op1(int a, int b) { printf("%d\n", a + b); }
	void Op2(int a, int b) { printf("%d\n", a - b); }
	void Op3(int a, int b) { printf("%d\n", a * b); }
	void Op4(int a, int b) { printf("%d\n", (a / b)); }
	void DoCalc(void (Calc::* fp)(int, int), int a, int b)
	{
		puts("지금부터 연산 결과를 발표하겠습니다.");
		printf("%d와%d의 연산 결과 : ", a, b);
		(this->*fp)(a, b);
		puts("이상입니다.");
	} 

};

int main()
{
	int ch;
	Calc c;
	int a = 10, b = 5;
	void (Calc:: * arOp[4])(int, int) = { &Calc::Op1, &Calc::Op2, &Calc::Op3, &Calc::Op4 };




	while (true) {
		printf("연산을 선택하세요. 1=더하기,2=빼기,3=곱하기,4=나누기,종료=0 : ");
		scanf("%d", &ch);

		if (ch >= 1 && ch < 5)
		{
			c.DoCalc(arOp[ch - 1], a, b);
		}
		else if (ch == 0) {
			puts("program shutdown");
			return 0;
		}

		else
			puts("잘못 입력");



		/*switch (ch)
		{
		case 1:
			c.Op1(a, b);
			break;
		case 2:
			c.Op2(a, b);
			break;
		case 3:
			c.Op3(a, b);
			break;
		case 4:
			c.Op4(a, b);
			break;
		case 0:
			printf("프로그램 종료....\n");
			return 0;
			break;
		default :
				printf("잘못 입력하였습니다.\n");
		}*/
	}
	return 0;
}