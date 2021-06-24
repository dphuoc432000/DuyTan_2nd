
#include <iostream>
#include "Matrix.h"
using namespace std;
Matrix::Matrix(int n)
{
	this->n = n;
	this->a = new int* [this->n];
	for (int i = 0; i < this->n; i++)
		this->a[i] = new int[this->n];
}
Matrix::Matrix(const Matrix& matrix){
	this->n = matrix.n;
	this->a = new int* [this->n];
	for (int row = 0; row < this->n; row++)
		this->a[row] = new int[this->n];

	for (int row = 0; row < matrix.n; row++)
		for (int col = 0; col < matrix.n; row++)
			this->a[row][col] = matrix.a[row][col];

}

Matrix& Matrix::operator=(const Matrix& matrix)
{

	this->n = matrix.n;
	this->a = new int* [this->n];
	for (int row = 0; row < this->n; row++)
		this->a[row] = new int[this->n];

	for (int row = 0; row < matrix.n; row++)
		for (int col = 0; col < matrix.n; col++)
			this->a[col] = new int[this->n];

	return *this;
}

Matrix::~Matrix()
{
	cout << "Day la ham huy" << endl;
	delete[]a;
	a = NULL;
}

void Matrix::input()
{
	for (int row = 0; row < this->n; row++)
		for (int col = 0; col < this->n; col++)
		{
			cout << "[" << row << "][" << col << "]";
			cin >> a[row][col];
		}
}
void Matrix::output()
{
	for (int row = 0; row < this->n; row++)
	{
		for (int col = 0; col < this->n; col++)
			cout << a[row][col];
		cout << endl;
	}

}