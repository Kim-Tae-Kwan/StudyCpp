#include<stdio.h>

class Shape
{
public:
	virtual void draw() = 0;//{ puts("도형 오브젝트입니다."); }
};

class Line : public Shape
{
public:
	virtual void draw() { puts("선을 긋습니다."); }

};

class Circle : public Shape
{
public:
	virtual void draw() { puts("동그라미 그렸습니다."); }

};

class Rect : public Shape
{
public:
	virtual void draw() { puts("사각형을 그렸습니다."); }
};

class Triangle : public Shape
{
public:
	virtual void draw() { puts("삼각형을 그렸습니다."); }
};



int main()
{
	Shape* ar[] = {
		new Rect(),new Circle(),new Rect(), new Line(), new Triangle() };
	for (int i = 0; i < sizeof(ar) / sizeof(ar[0]); i++)
	{
		ar[i]->draw();
	}
	for (int i = 0; i < sizeof(ar) / sizeof(ar[0]); i++)
	{
		delete ar[i];
	}
}