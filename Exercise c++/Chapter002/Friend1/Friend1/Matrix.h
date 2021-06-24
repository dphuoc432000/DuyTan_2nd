#pragma once
#ifndef MATRIX_H
#define MATRIX_H
class Array;
class Matrix
{
private:
	int** a;
	int n;
public:
	Matrix(int);
	Matrix(const Matrix&);
	Matrix& operator=(const Matrix&);
	void input();
	void output();
	friend void matrixMultiplyArray(Matrix& matrix, Array& array);
};
#endif // !MATRIX_H



