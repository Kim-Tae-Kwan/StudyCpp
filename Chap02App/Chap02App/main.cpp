#include "time.h"
#include "Date.h"

int main()
{
	Date d;
	d.SetDate(2020, 04, 21);
	d.OutDate();

	Time now;
	now.SetTime(15, 22, 10);
	now.outTime();

	//¡÷ºÆ.

	return 0;
}