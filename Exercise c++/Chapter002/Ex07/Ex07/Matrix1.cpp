
#include <iostream>
#include "Matrix1.h"
using namespace std;
Matrix1::Matrix1(int m, int n)
{
	this->m = m;
	this->n = n;
	this->a = new int* [this->m];
	for (int i = 0; i < this->m; i++)
		for (int j = 0; j < this->n; j++)
			this->a[i] = new int[this->n];
}
Matrix1::Matrix1(const Matrix1& matrix)
{
	this->m = matrix.m;
	this->n = matrix.n;
	this->a = new int* [this->m];
	for (int row = 0; row < this->n; row++)
		this->a[row] = new int[this->n];

	for (int row = 0; row < matrix.m; row++)
		for (int col = 0; col < matrix.n; row++)
			this->a[row][col] = matrix.a[row][col];

}

Matrix1& Matrix1::operator=(const Matrix1& matrix)
{

	this->n = matrix.n;
	this->m = matrix.m;
	this->a = new int* [this->m];
	for (int row = 0; row < this->m; row++)
		this->a[row] = new int[this->m];

	for (int row = 0; row < matrix.m; row++)
		for (int col = 0; col < matrix.n; col++)
			this->a[col] = new int[this->n];

	return *this;
}

Matrix1::~Matrix1()
{
	cout << "Day la ham huy" << endl;
	delete[]a;
	a = NULL;
}

void Matrix1::input()
{
	for (int row = 0; row < this->m; row++)
		for (int col = 0; col < this->n; col++)
		{
			cout << "[" << row << "][" << col << "]";
			cin >> a[row][col];
		}
}
void Matrix1::output()
{
	for (int row = 0; row < this->m; row++)
	{
		for (int col = 0; col < this->n; col++)
			cout << a[row][col];
		cout << endl;
	}

}