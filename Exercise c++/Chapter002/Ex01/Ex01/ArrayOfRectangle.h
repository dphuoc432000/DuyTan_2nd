#pragma once
#ifndef ARRAYOFRECTANGLE
#define ARRAYOFRECTANGLE
#include "Rectangle.h"
class ArrayOfRectangle
{
private:
	Rectangle* a;
	int n;
	int size;
public:
	ArrayOfRectangle();
	ArrayOfRectangle(const ArrayOfRectangle& rec);
	ArrayOfRectangle& operator=(const ArrayOfRectangle& rec);
	void input();
	void output();
	int maxArea();
	int maxCircumference();
};
#endif // !ARRAYOFRECTANGLE



