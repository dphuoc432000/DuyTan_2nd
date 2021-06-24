#include "Matrix.h"
#include <iostream>
#include "Array.h"
using namespace std;
Matrix::Matrix(int n) {
	this->n = n;
	this->a = new  int* [this->n];
	for (int i = 0; i < this->n; i++)
		this->a[i] = new int[this->n];
}
Matrix::Matrix(const Matrix& matrix) {
	this->n = matrix.n;
	this->a = new int* [this->n];
	for (int row = 0; row < this->n; row++)
		this->a[row] = new int[this->n];

	for (int row = 0; row < matrix.n; row++)
		for (int col = 0; col < matrix.n; col++)
			this->a[row][col] = matrix.a[row][col];
}
Matrix& Matrix::operator=(const Matrix& matrix) {
	this->n = matrix.n;
	this->a = new int* [this->n];
	for (int row = 0; row < this->n; row++)
		this->a[row] = new int[this->n];

	for (int row = 0; row < matrix.n; row++)
		for (int col = 0; col < matrix.n; col++)
			this->a[row][col] = matrix.a[row][col];
	return *this;
}
void Matrix::input() {
	for (int row = 0; row < this->n; row++)
		for (int col = 0; col < this->n; col++) {
			cout << "[" << row << "]" << "[" << col << "]: ";
			cin >> this->a[row][col];
		}
}
void Matrix::output() {
	for (int row = 0; row < this->n; row++) {
		for (int col = 0; col < this->n; col++)
			cout << this->a[row][col] << "\t";
		cout << endl << endl;
	}
}