#include "Complex.h"
#include <iostream>
#include <cmath>
using namespace std;
Complex::Complex() {
	this->a = 0;
	this->b = 0;
}
Complex::Complex(int a, int b) {
	this->a = a;
	this->b = b;
}
Complex::Complex(const Complex& s2) {
	this->a = s2.a;
	this->b = s2.b;
}
Complex& Complex::operator=(const Complex& s2) {
	this->a = s2.a;
	this->b = s2.b;
	return *this;
}
/*void Complex::output() {
	cout << a << " + " << b << "i" << endl;
}*/
istream& operator>>(istream& is, Complex& complex) {
	cout << "Enter real number: "; is >> complex.a;
	cout << "Enter magic number: "; is >> complex.b;
	return is;
}
ostream& operator<<(ostream& os, Complex& complex) {
	os << complex.a << " + " << complex.b << "i" << endl;
	return os;
}
Complex Complex::operator+(Complex s2) {
	Complex s3;
	s3.a = this->a + s2.a;
	s3.b = this->b + s2.b;
	return s3;
}
Complex Complex::operator-(Complex s2) {
	Complex s3;
	s3.a = this->a - s2.a;
	s3.b = this->b - s2.b;
	return s3;
}
Complex Complex::operator*(Complex s2) {
	Complex s3;
	s3.a = this->a * s2.a + this->b * s2.b;
	s3.b = this->a * s2.b + this->b * s2.a;
	return s3;
}
Complex Complex::operator/(Complex s2) {
	Complex s3;
	s3.a = (this->a * s2.a + this->b * s2.b)/(pow(s2.a, 2) - pow(s2.b, 2));
	s3.b = (this->a * s2.b + this->b * s2.a)/(pow(s2.a, 2) - pow(s2.b, 2));
	return s3;
}
bool Complex::operator==(Complex s2) {
	if (this->a == s2.a && this->b == s2.b)
		return true;
	return false;
}
const Complex& Complex::operator()()const {
	return *this;
}
Complex& Complex::operator()() {
	return *this;
}
