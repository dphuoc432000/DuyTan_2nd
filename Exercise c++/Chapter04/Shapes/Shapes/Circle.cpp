#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle() : Shape() {
	this->radius = 0;
}
Circle::Circle(double r) {
	this->radius = r;
}
void Circle::input() {
	cout << "Enter radius: ";
	cin >> this->radius;
	cout << endl;
}
double Circle::area() {
	return this->radius * this->radius * 3.14;
}
istream& operator>>(istream& is, Circle& circle) {
	circle.input();
	return is;
}
