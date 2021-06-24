#pragma once
#ifndef MATRIX1_H
#define MATRIX1_H
class Matrix1
{
private:
	int m, n;
	int** a;
public:
	Matrix1(int m, int n);
	Matrix1(const Matrix1& matrix);
	Matrix1& operator =(const Matrix1& matrix);
	~Matrix1();
	void input();
	void output();
};
#endif // !MATRIX1



