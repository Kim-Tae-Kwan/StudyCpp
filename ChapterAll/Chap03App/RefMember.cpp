#include <stdio.h>

class Some
{
private:
	int& total;

public:
	
	Some(int &atotal) : total(atotal){}
	void OutTotal()
	{
		printf("%d\n", total);
	}
};

int main()
{
	int val = 8;
	Some S(val);
	S.OutTotal();
}