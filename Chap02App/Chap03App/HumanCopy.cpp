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
		printf("%s ��ü�� �����ڰ� ȣ��Ǿ����ϴ�.\n", pname);
	}

	Human(const Human& other)
	{
		pname = new char[strlen(other.pname) + 1];
		strcpy(pname, other.pname);
		age = other.age;
	}



	~Human()
	{
		printf("%s ��ü�� �İ��Ǿ����ϴ�.\n", pname);
		delete[] pname;
	}

	void intro()
	{
		printf("�̸�=%s,����=%d\n", pname, age);
	}
};

void printHuman(Human who)
{
	who.intro();
}

int main()
{
	Human kim("���°�", 12);
	Human boy = kim;

	boy.intro();
}