#include "Cyclinder.h"
#include <iostream>
using namespace std;

Cyclinder::Cyclinder() :Circle() {
	this->height = 0;
}
Cyclinder::Cyclinder(double r, double h) : Circle(r) {
	this->height = h;
}
void Cyclinder::input() {
	Circle::input();
	cout << "Enter height: ";
	cin >> this->height;
	cout << endl;
}
double Cyclinder::area() {
	return Circle::area() * this->height;
}
istream& operator>>(istream& is, Cyclinder& cyc) {
	cyc.input();
	return is;
}
