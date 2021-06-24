#pragma once
#include "Rectangle.h"
#include <iostream>
using namespace std;
class Square:public Rectangle
{
public:
	Square();
	Square(int a);
	Square(const Square& square);
	Square& operator=(const Square&);
	void input();
	friend istream& operator>>(istream& is, Square& square);

};

