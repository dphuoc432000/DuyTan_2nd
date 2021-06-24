#include "Square.h"
#include <iostream>
using namespace std;
Square::Square() :Rectangle(){}
Square::Square(double edge) : Rectangle(edge, edge) {
}
void Square::input() {
	
	cout << "Enter edge: ";
	cin >> this->length;
	this->width = this->length;
	cout << endl;
}
double Square::area() {
	return this->length * this->width;
}
istream& operator >> (istream& is, Square& square) {
	square.input();
	return is;
}
