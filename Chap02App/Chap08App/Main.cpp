#include "PosValue.h"

int main()
{
	PosValue<int> iv(10, 10, 2);
	PosValue<char> cv(25, 5, 'c');
	PosValue<double> dv(30, 15, 3.14);
	iv.outvalue();
	cv.outvalue();
	dv.outvalue();
}