#pragma once
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
	friend void matrixMultiplyArray(Matrix& matrix, Array& array);
};
#endif