#pragma once
#include"Shape.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include "Cyclinder.h"
#include<iostream>
using namespace std;
class ArrayOfShape
{
private:
	Shape** a;
	int n;
public:
	ArrayOfShape();
	ArrayOfShape(Shape** a, int n);
	ArrayOfShape(const ArrayOfShape&);
	ArrayOfShape &operator=(const ArrayOfShape&);
	~ArrayOfShape();
	void input();
	void area();
	friend istream& operator>>(istream& is, ArrayOfShape& arr) {
		arr.input();
		return is;
	}
};

