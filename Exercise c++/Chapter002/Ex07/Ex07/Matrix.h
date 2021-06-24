#pragma once
#ifndef MATRIX_H
#define MATRIX_H
class Matrix
{
private:
	int n;
	int** a;
public:
	Matrix(int n);
	Matrix(const Matrix& matrix);
	Matrix& operator =(const Matrix& matrix);
	~Matrix();
	void input();
	void output();
};
#endif // !MATRIX_H



