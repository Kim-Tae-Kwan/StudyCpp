#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Base
{
	virtual void foo(int i);
};
class Derived : Base {
	virtual void foo(int i) override;
};


enum ITEMTYPE : short{
	WEAPON,
	EQUIPMENT,
	GEM =10,
	DEFENSE,
};

class TEST2 {

	void f1(int i) { cout << i << endl; }
	void f2(double d) = delete;
};

class TEST {
public:
	//TEST(){}
	//TEST(int an1,string as1):n1(an1),s1(as1){}
	void print()
	{
		cout << n1 << ", " << s1 << endl;
	}

	int n1 =2;
	string s1="HI";

};

void func(int a) { cout << "func int " << a << endl; }
void func(double* p) { cout << "func double * " << *p << endl; }

double pow(double x, size_t y)
{
	return y != 1 ? x * pow(x, y - 1) : x;
}

int main()
{
	cout << pow(2.0, 2) << endl;
	cout << pow(3.0, 6) << endl;

	short itemType1 = WEAPON;
	cout << "ItemType1 = " << itemType1 << endl;

	char* p = nullptr;

	cout <<"size of nullptr " << sizeof(nullptr) << endl;
	cout << "typeid of nullptr " << typeid(nullptr).name() << endl;

	//TEST test1(1, "test");
	//test1.print();
	
	TEST test2;
	test2.print();
	
	TEST test3{ 3,"Hello" };
	test3.print();

	const string str = "Hello";

	vector<string> v;
	v.push_back(str);



	return 0;
}