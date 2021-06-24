#pragma once
#include <iostream>
using namespace std;
class Shape
{
public:
	Shape(){}
	virtual void input() {
	}
	virtual double area() {
		return 0;
	}
	friend istream& operator>>(istream& is, Shape&);
};

