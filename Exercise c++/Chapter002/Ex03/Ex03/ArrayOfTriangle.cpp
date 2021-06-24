#include "ArrayOfTriangle.h"
#include <iostream>
using namespace std;
ArrayOfTriangle::ArrayOfTriangle() {
	a = new Triangle[10];
	this->n = 0;
}
ArrayOfTriangle::ArrayOfTriangle(const ArrayOfTriangle& rec) {
	this->n = rec.n;
	ArrayOfTriangle* a = new ArrayOfTriangle[10];
	for (int i = 0; i < rec.n; i++)
		this->a[i] = rec.a[i];
}
ArrayOfTriangle& ArrayOfTriangle::operator=(const ArrayOfTriangle& rec) {
	this->n = rec.n;
	ArrayOfTriangle* a = new ArrayOfTriangle[10];
	for (int i = 0; i < rec.n; i++)
		this->a[i] = rec.a[i];
	return *this;
}
void ArrayOfTriangle::input() {
	cout << "Enter size: ";
	cin >> this->size;
	cout << endl;
	for (int i = 0; i < this->size; i++) {// nhap duoc nhieu phan tu theo size
		this->a[i].input();
		n++;
	}

	/*if (n >= 10) //  chi nhap duoc 1 phan tu
		cout << "ArrayOfTriangle is full";
	else {
		this->a[n] = a[n];
		a[n].input();
		n++;
	}	*/
}
void ArrayOfTriangle::output() {
	for (int i = 0; i < this->size; i++) {
		this->a[i].output();
		cout << endl;
	}
	cout << endl;
}
int ArrayOfTriangle::maxArea() {
	int max = this->a[0].area();
	for (int i = 0; i < n; i++)
		if (max <= this->a[i].area())
			max = this->a[i].area();
	return max;
}
int ArrayOfTriangle::maxCircumference() {
	int max = this->a[0].circumference();
	for (int i = 0; i < n; i++)
		if (max <= this->a[i].circumference())
			max = this->a[i].circumference();
	return max;
}
