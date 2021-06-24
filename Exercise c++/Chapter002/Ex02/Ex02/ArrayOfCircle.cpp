#include "ArrayOfCircle.h"
#include <iostream>
using namespace std;
ArrayOfCircle::ArrayOfCircle() {
	a = new Circle[n];
}
ArrayOfCircle::ArrayOfCircle(const ArrayOfCircle& cir) {
	this->n = cir.n;
	Circle* a = new Circle[n];
	for (int i = 0; i < cir.n; i++)
		this->a[i] = cir.a[i];
}
ArrayOfCircle &ArrayOfCircle::operator=(const ArrayOfCircle& cir) {
	this->n = cir.n;
	Circle* a = new Circle[n];
	for (int i = 0; i < cir.n; i++)
		this->a[i] = cir.a[i];
	return *this;
}
void ArrayOfCircle::input() {
	cout << "Enter size: ";
	cin >> n;
	for (int i = 0; i < this->n; i++)
		this->a[i].input();
}
void ArrayOfCircle::output() {
	for (int i = 0; i < this->n; i++)
		this->a[i].output();
}
double ArrayOfCircle::maxArea() {
	double max = this->a[0].area();
	for (int i = 0; i < this->n; i++)
		if (max <= this->a[i].area())
			max = this->a[i].area();
	return max;
}
double ArrayOfCircle::maxCircumference() {
	double max = this->a[0].circumference();
	for (int i = 0; i < this->n; i++)
		if (max <= this->a[i].circumference())
			max = this->a[i].circumference();
	return max;
}
