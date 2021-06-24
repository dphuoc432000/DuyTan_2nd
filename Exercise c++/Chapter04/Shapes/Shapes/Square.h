#pragma once
#include <iostream>
using namespace std;
#include "Rectangle.h"
class Square:public Rectangle
{
public: 
	Square();
	Square(double);
	void input();
	double area();
	friend istream& operator >> (istream& is, Square&);
};

