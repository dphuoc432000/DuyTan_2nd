#pragma once
#include "Shape.h"
#include <iostream>
using namespace std;
class Circle :public Shape
{
protected:
	double radius;
public:
	Circle();
	Circle(double);
	virtual void input();
	virtual double area();
	friend istream& operator>>(istream& is, Circle&);
};

