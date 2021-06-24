#include "Rectangle.h"
#include<iostream>
using namespace std;
Rectangle::Rectangle() {
	this->height = 0;
	this->width = 0;
}
Rectangle::Rectangle(int w, int h) {
	this->height = h;
	this->width = w;
}
Rectangle::Rectangle(const Rectangle& rectangle) {
	this->height = rectangle.height;
	this->width = rectangle.width;
}
Rectangle& Rectangle::operator=(const Rectangle& rectangle) {
	this->height = rectangle.height;
	this->width = rectangle.width;
	return *this;
}
void Rectangle::input() {
	cout << "Enter height: ";
	cin >> this->height;
	cout << endl << "Enter width: ";
	cin >> this->width;
	cout << endl;
}
istream& operator>>(istream& is, Rectangle& rectangle) {
	rectangle.input();
	return is;
}
int Rectangle::Areal() {
	return this->height * this->width;
}
int Rectangle::Circuference() {
	return (this->height + this->width) * 2;
}
