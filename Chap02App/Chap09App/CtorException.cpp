#include <stdio.h>

class Int100
{
private:
	int num;

public:
	Int100(int a)
	{
		if (a <= 100) num = a;
		else throw a;
	}
	void OutValue()
	{
		printf("%d", num);
	}

	Int100& operator+=(int b) {
		if (num + b <= 100) num += b;
		else throw num + b;
		return *this;
	}

};

int main()
{
	try
	{
		Int100 i(85);
		i += 12;
		i.OutValue();
	}
	catch (int n)
	{
		printf("[ERROR] %d은 100보다 큼\n", n);
	}

	return 0;
}