#include <stdio.h>
#include <conio.h>
#include <math.h>
#include "cursor.h"
#include <iostream>
#include <Windows.h>
using namespace std;

void gotoxy(int x, int y)
{
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

class Shape
{
protected:
	int x, y;
public:
	Shape(int ax, int ay) { x = ax; y = ay; }
	virtual void draw() {
		gotoxy(x, y); putch('*');
	}
	virtual void clear() {
		system("cls");
	}
};

int main() {

	int input;
	Shape* pS = new Shape(10, 10);

	while (true)
	{
		gotoxy(10, 1);
		printf("��µ��� ����(0:����, 1:��, 2:��, 3:�簢��, 4:�ﰢ��, 5:��) : ");
		cin >> input;
		pS->clear();

		switch (input)
		{
		case 0:
			exit(0);
			break;
		case 1:
			break;
		case 2:
			break;
		}
	}

	delete pS;
	return 0;
}
