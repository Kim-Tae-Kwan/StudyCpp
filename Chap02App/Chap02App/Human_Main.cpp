#include <stdio.h>

class Human 
{
public:
	char name[12];
	int age;

	void intro()
	{

		printf("이름 : %s, 나이 : %d\n", name, age);
	}
};

int main()
{

	/*human k = { "김태관",27 };
	k.intro();*/
	Human arFriend[10] = {
		{"문동욱",49},
		{"김유진",49},
		{"박상막",49}
	};
	
	Human* pFriend;
	pFriend = &arFriend[1];
	pFriend->intro();


	return 0;
}