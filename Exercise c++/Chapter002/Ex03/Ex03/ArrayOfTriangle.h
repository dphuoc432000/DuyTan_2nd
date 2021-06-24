#pragma once
#ifndef ARRAYOFTRIANGLE
#define ARRAYOFTRIANGLE
#include "Triangle.h"
class ArrayOfTriangle
{
private:
	Triangle* a;
	int n;
	int size;
public:
	ArrayOfTriangle();
	ArrayOfTriangle(const ArrayOfTriangle& rec);
	ArrayOfTriangle& operator=(const ArrayOfTriangle& rec);
	void input();
	void output();
	int maxArea();
	int maxCircumference();
};
#endif // !ARRAYOFTRIANGLE



