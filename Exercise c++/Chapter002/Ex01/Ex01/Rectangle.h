#pragma once
#ifndef RECTANGLE
#define RECTANGLE
class Rectangle
{
private:
	int length, width;
public:
	Rectangle();
	Rectangle(int l, int w);
	int getLength();
	int getWidth();
	void setlength(int l);
	void setWidth(int w);
	void input();
	void output();
	int area();
	int circumference();
};
#endif // !RECTANGLE



