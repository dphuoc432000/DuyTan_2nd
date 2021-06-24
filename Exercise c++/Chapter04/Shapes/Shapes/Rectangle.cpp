#include "Rectangle.h"
#include<iostream>
using namespace std;
Rectangle::Rectangle() :Shape() {
	this->width = 0;
	this->length = 0;
}
Rectangle::Rectangle(double width, double length) {
	this->width = width;
	this->length = length;
}
void Rectangle::input() {
	cout << "Enter width: ";
	cin >> this->width;
	cout << endl << "Enter length: ";
	cin >> this->length;
	cout << endl;
}
double Rectangle::area() {
	return this->width * this->length;
}
istream& operator>>(istream& is, Rectangle& rec) {
	rec.input();
	return is;
}
