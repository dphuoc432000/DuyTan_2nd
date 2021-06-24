#include "Circle.h"
#include<iostream>
using namespace std;
Circle::Circle() {
	this->radius = 0;
}
Circle::Circle(double r) {
	this->setRadius(r);
}
double Circle::getRadius() {
	return this->radius;
}
void Circle::setRadius(double r) {
	if (r < 0)
		this->radius = 0;
	else
		this->radius = r;
}
void Circle::input() {
	cout << "Enter radius: ";
	cin >> this->radius;
}
void Circle::output() {
	cout << this->radius;
}
double Circle::area() {
	return this->radius * this->radius * 3.14;
}
double Circle::circumference() {
	return this->radius * 2 * 3.14;
}