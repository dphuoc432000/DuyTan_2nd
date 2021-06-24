#pragma once
#ifndef ARRAYOFCIRCLE_H
#define ARRAYOFCIRCLE_H
#include "Circle.h"
class ArrayOfCircle
{
private:
	Circle* a;
	int n;
public:
	ArrayOfCircle();
	ArrayOfCircle(const ArrayOfCircle& cir);
	ArrayOfCircle& operator=(const ArrayOfCircle& cir);
	void input();
	void output();
	double maxArea();
	double maxCircumference();
};
#endif // ARRAYOFCIRCLE_H



