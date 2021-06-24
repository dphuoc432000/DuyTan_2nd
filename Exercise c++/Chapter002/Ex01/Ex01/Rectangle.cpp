#include "Rectangle.h"
#include<iostream>
using namespace std;
Rectangle::Rectangle() {
	this->length = 0;
	this->width = 0;
}
Rectangle::Rectangle(int l, int w) {
	this->setlength(l);
	this->setWidth(w);
}
int Rectangle::getLength() {
	return this->length;
}
int Rectangle::getWidth() {
	return this->width;
}
void Rectangle::setlength(int l) {
	if (l < 0)
		this->length = 0;
	else
		this->length = l;
}
void Rectangle::setWidth(int w) {
	if (w < 0)
		this->width = 0;
	else
		this->width = w;
}
void Rectangle::input() {
	cout << "Enter length: ";
	cin >> this->length;
	cout << "Enter Width: ";
	cin >> this->width;
}
void Rectangle::output() {
	cout << "Length: " << this->length << "\t" << "Width: " << this->width << endl;
}
int Rectangle::area() {
	return this->length * this->width;
}
int Rectangle::circumference() {
	return (this->length + this->width) * 2;
}