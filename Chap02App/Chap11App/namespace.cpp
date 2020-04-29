#include <stdio.h>
int value;
class MyClass {
public:
	MyClass() { ; }
	void OutTime()
	{} 
};



namespace A {
	double value;
}

namespace B {
	int value;
}''



int main()
{
	::value = 5;
	A::value = 12.345;
	B::value = 123;

	return 0;
}