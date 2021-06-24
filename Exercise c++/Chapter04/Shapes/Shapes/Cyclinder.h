#pragma once
#include <iostream>
#include "Circle.h";
class Cyclinder: public Circle
{
protected:
	double height;
public:
	Cyclinder();
	Cyclinder(double, double);
	void input();
	double area();
	friend istream& operator>>(istream& is, Cyclinder&);
};

