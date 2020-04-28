#include <stdio.h>
#include <conio.h>
#include <math.h>
#include "cursor.h"

class Point
{
protected:
	int x, y;
	char ch;
public:
	Point(int ax, int ay, char ach) { x = ax; y = ay; ch = ach; }
	void show() {
		gotoxy(x, y); putch(ch);
	}
	void hide() {
		gotoxy(x, y); putch(' ');
	}
	void move(int nx, int ny)
	{
		hide();
		x = nx;
		y = ny;
		show();
	}
};

class Circle : public Point
{
private:
	int radius;
public:
	Circle(int ax, int ay, char ach, int arad) :Point(ax, ay, ach) { radius = arad; }
	void show() {
		gotoxy(radius * x, radius * y);
		putch(ch);
	}

};


int main()
{
	Point p(1, 1, 'P');
	Circle c(5, 5, 'C', 2);
	p.show();
	//p.hide();
	c.show();

	getchar();
	p.move(40, 1);
	c.move(41, 2);

	return 0;
}