#include "Square.h"
#include <iostream>
using namespace std;

Square::Square() :Rectangle() {
}
Square::Square(int a) : Rectangle(a, a) {
}
Square::Square(const Square& square):Rectangle((Rectangle&)square) {
}
Square& Square::operator=(const Square& square) {
	Rectangle::operator=((Rectangle&)square);
	return *this;
}
void Square::input() {
	cout << "Enter edge: ";
	cin >> this->height;
	this->width =this ->height;
}
istream& operator>>(istream& is, Square& square) {
	square.input();
	return is;
}
