#include <stdio.h>

class Human 
{
public:
	char name[12];
	int age;

	void intro()
	{

		printf("�̸� : %s, ���� : %d\n", name, age);
	}
};

int main()
{

	/*human k = { "���°�",27 };
	k.intro();*/
	Human arFriend[10] = {
		{"������",49},
		{"������",49},
		{"�ڻ�",49}
	};
	
	Human* pFriend;
	pFriend = &arFriend[1];
	pFriend->intro();


	return 0;
}