#include <stdio.h>

class Time
{
public:
	int hour, min, sec;
	void OutTime()
	{
		printf("%d:%d:%d¿‘¥œ¥Ÿ.\n", hour, min, sec);
	}
};

int main()
{
	Time now;
	int Time::* pi;

	pi = &Time::hour;
	now.*pi = 11;
	pi = &Time::min;
	now.*pi = 23;
	pi = &Time::sec;
	now.*pi = 50;

	now.OutTime();


	return 0;
}