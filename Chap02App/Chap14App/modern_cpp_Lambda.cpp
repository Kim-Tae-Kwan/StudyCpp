#include <iostream>
using namespace std;

void func() { cout << "ete" << endl; }
template<typename Func>
void Test(Func func)
{
	func();
}

int main()
{
	auto func=[] {cout << "Hello World " << endl; };
	Test(func);

	auto func1 = [] {return 3.14; };
	auto func2 = [](float f) {return f; };
	auto func3 = []()->float {return 3.14; };

	float f1 = func1();
	float f2 = func2(3.14f);
	float f3 = func3();




	getchar();


	return 0;
}