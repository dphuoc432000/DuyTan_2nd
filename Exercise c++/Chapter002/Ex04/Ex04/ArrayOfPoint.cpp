#include "ArrayOfPoint.h"
#include <iostream>
using namespace std;
ArrayOfPoint::ArrayOfPoint() {
	a = new Point[10];
	this->n = 0;
}
ArrayOfPoint::ArrayOfPoint(const ArrayOfPoint& rec) {
	this->n = rec.n;
	ArrayOfPoint* a = new ArrayOfPoint[10];
	for (int i = 0; i < rec.n; i++)
		this->a[i] = rec.a[i];
}
ArrayOfPoint& ArrayOfPoint::operator=(const ArrayOfPoint& rec) {
	this->n = rec.n;
	ArrayOfPoint* a = new ArrayOfPoint[10];
	for (int i = 0; i < rec.n; i++)
		this->a[i] = rec.a[i];
	return *this;
}
void ArrayOfPoint::input() {
	cout << "Enter size: ";
	cin >> this->size;
	cout << endl;
	if (this->size > 10)
		cout << "limitted of array is 10: ";
	else
		for (int i = 0; i < this->size; i++) {// nhap duoc nhieu phan tu theo size
			this->a[i].input();
			n++;
		}

	/*if (n >= 10) //  chi nhap duoc 1 phan tu
		cout << "ArrayOfRectangle is full";
	else {
		this->a[n] = a[n];
		a[n].input();
		n++;
	}	*/
}
void ArrayOfPoint::output() {
	for (int i = 0; i < this->size; i++) {
		this->a[i].output();
		cout << endl;
	}
	cout << endl;
}
double ArrayOfPoint::maxDistance() {
	double max = this->a[0].distance(this->a[1]);
	for (int i = 0; i < this->size; i++)
		if (max <= this->a[i].distance(this->a[i + 1]))
			max = this->a[i].distance(this->a[i + 1]);
	return max;
}
