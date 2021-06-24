#include "SquareEquation.h"
// ham tao va ham tao sao chep goi tren tieu de ham
// ham thanh vien goi trong than ham
// ham istream ostream khong duoc goi lop cha, chi duoc goi thog qua ham input() output()
#include <iostream>
using namespace std;
SquareEquation::SquareEquation() :LinearEquation()// goi ham tao khong doi so cua lop cha
{
	this->a = 0;
}
SquareEquation::SquareEquation(int a, int b, int c) : LinearEquation(b, c)//goi ham tao 2 doi so cua lop cha
{
	this->a = 0;
}
SquareEquation::SquareEquation(const SquareEquation& square) :LinearEquation((LinearEquation&)square)// goi ham tao sao chep cua lop cha
{
	this->a = square.a;
}
SquareEquation& SquareEquation::operator=(const SquareEquation& square) {
	LinearEquation::operator=((LinearEquation&)square);
	this->a = a;
	return *this;
}
void SquareEquation::input() {
	LinearEquation::input();
	cout << "Nhap vao a: ";
	cin >> this->a;
}
istream& operator >>(istream& is, SquareEquation& square) {
	square.input();
	return is;
}
void SquareEquation::solve() {
	if (a == 0) {
		LinearEquation::solve();
		cout << this->a;
	}
	else {
		int denta;
		denta = this->b * this->b - 4 * this->a * this->c;
		if (denta < 0) {
			cout << "no-roof.";
		}
		else if (denta == 0)
			cout << "x1 = x2= " << -this->b / 2 / this->a;
		else
			cout << "x1= " << (-this->b + sqrt(denta)) / 2 / this->a << "\n" << "x2= " << (-this->b - sqrt(denta)) / 2 / this->a;
	}
}