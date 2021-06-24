#pragma once
#ifndef ARRAYOFPOINT_H
#define ARRAYOFPOINT_H
#include "Point.h"
class ArrayOfPoint
{
private:
	Point* a;
	int n;
	int size;
public:
	ArrayOfPoint();
	ArrayOfPoint(const ArrayOfPoint& rec);
	ArrayOfPoint& operator=(const ArrayOfPoint& rec);
	void input();
	void output();
	double maxDistance();
};
#endif


