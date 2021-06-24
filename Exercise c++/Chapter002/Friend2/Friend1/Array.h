#pragma once
#include "Matrix.h"
#ifndef ARRAY_H
#define ARRAY_H
class Matrix;
class Array
{
private:
	int* a;
	int n;
public:
	Array(int n);
	Array(const Array&);
	Array& operator=(const Array&);
	void input();
	void output();
	friend void Matrix::matrixMultiplyArray(Array& arr);
};
#endif // !ARRAY_H



