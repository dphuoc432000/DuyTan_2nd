#pragma once
#include"Shape.h"
#include <iostream>
using namespace std;
class Rectangle:public Shape
{
protected:
	double width, length;
public:
	Rectangle();
	Rectangle(double, double);
	virtual void input();
	virtual double area();
	friend istream& operator>>(istream& is, Rectangle&);
};

