#include "Triangle.h"
#include <iostream>
using namespace std;
Triangle::Triangle() {
	this->a = 0;
	this->b = 0;
	this->c = 0;
}
Triangle::Triangle(double a, double b, double c) {
	this->setA(a);
	this->setB(b);
	this->setC(c);
}
void Triangle::setA(double a) {
	if (a < 0) this->a = 0;
	else this->a = a;
}
void Triangle::setB(double b) {
	if (b < 0) this->b = 0;
	else this->b = b;
}
void Triangle::setC(double c) {
	if (c < 0) this->c = 0;
	else this->c = c;
}
double Triangle::getA() {
	return this->a;
}
double Triangle::getB() {
	return this->b;
}
double Triangle::getC() {
	return this->c;
}
void Triangle::input() {
	cout << "Enter A: ";
	cin >> this->a;
	cout << endl;
	cout << "Enter B: ";
	cin >> this->b;
	cout << endl;
	cout << "Enter C: ";
	cin >> this->c;
	cout << endl;
}
void Triangle::output() {
	cout << this->a << " " << this->b << " " << this->c;
}
double Triangle::area() {
	if (this->a >= this->b && this->a >= this->c)
		return (this->b * this->c / 2);
	else if (this->b > this->a && this->b >= this->c)
		return (this->a * this->c / 2);
	else if (this->c > b && this->c > this->a)
		return(this->b * this->a / 2);
}
double Triangle::circumference() {
	return this->a + this->b + this->c;
}