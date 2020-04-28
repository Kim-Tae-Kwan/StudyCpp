#include <stdio.h>
#include <string.h>
#include <iostream>
//using namespace std;

class Human
{
protected:
	char name[12];
	int age;

public:
	Human(const char* aname, int aage) {
		strcpy(name, aname);
		age = aage;
	}
	virtual void intro()
	{
		printf("%s은 %d살 입니다.\n", name, age);
	}
};

class Student : public Human {
private:
	int stunum;
public:
	Student(const char *aname, int aage, int astunum) : Human(aname,aage)
	{ stunum = astunum; }
	void intro() 
	{
		printf("%d번, %s입니다.\n", stunum, name);
	}
};

int main()
{
	Human h("성명건", 45);
	Student s("김태관", 27, 22);
	Human* ph;
	Student* ps;
	
	int sel = 0;
	
	std::cout << "원하는 수를 고르세요(1:Human,2:Student)";
	std::cin >> sel;

	if (sel == 1)
	{
		ph = &h;
	}
	else if (sel == 2)
	{
		ph = &s;
	}
	else {
		std::cout << "맞는 수가 없습니다." << std::endl;
		exit(-1);
	}
	ph->intro();
}