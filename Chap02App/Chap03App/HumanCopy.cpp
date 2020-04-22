#include <stdio.h>
#include <string.h>

class Human
{
private:
	char* pname;
	int age;

public:
	Human(const char* aname, int aage)
	{
		pname = new char[strlen(aname) + 1];
		strcpy(pname, aname);
		age = aage;
		printf("%s 객체의 생성자가 호출되었습니다.\n", pname);
	}

	Human(const Human& other)
	{
		pname = new char[strlen(other.pname) + 1];
		strcpy(pname, other.pname);
		age = other.age;
	}



	~Human()
	{
		printf("%s 객체가 파과되었습니다.\n", pname);
		delete[] pname;
	}

	void intro()
	{
		printf("이름=%s,나이=%d\n", pname, age);
	}
};

void printHuman(Human who)
{
	who.intro();
}

int main()
{
	Human kim("김태관", 12);
	Human boy = kim;

	boy.intro();
}