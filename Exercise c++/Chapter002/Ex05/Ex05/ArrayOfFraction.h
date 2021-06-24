#pragma once
#ifndef ARRAYOFFRACTION_H
#define ARRAYOFFRACTION_H
#include "Fraction.h"
class ArrayOfFraction
{
private:
	Fraction* a;
	int n;
	int size;
public:
	ArrayOfFraction();
	ArrayOfFraction(const ArrayOfFraction& rec);
	ArrayOfFraction& operator=(const ArrayOfFraction& rec);
	void input();
	void output();
	ArrayOfFraction maxPlus();
	ArrayOfFraction maxDivision();
	ArrayOfFraction maxmultiplication();
	ArrayOfFraction maxSubtraction();
};
#endif // !ARRAYOFFRACTION_H



