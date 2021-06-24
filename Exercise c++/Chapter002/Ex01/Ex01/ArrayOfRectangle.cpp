#include "ArrayOfRectangle.h"
#include <iostream>
using namespace std;
ArrayOfRectangle::ArrayOfRectangle() {
	a = new Rectangle[10];
	this->n = 0;
}
ArrayOfRectangle::ArrayOfRectangle(const ArrayOfRectangle& rec) {
	this->n = rec.n;
	ArrayOfRectangle* a = new ArrayOfRectangle[10];
	for (int i = 0; i < rec.n; i++)
		this->a[i] = rec.a[i];
}
ArrayOfRectangle& ArrayOfRectangle::operator=(const ArrayOfRectangle& rec) {
	this->n = rec.n;
	ArrayOfRectangle* a = new ArrayOfRectangle[10];
	for (int i = 0; i < rec.n; i++)
		this->a[i] = rec.a[i];
	return *this;
}
void ArrayOfRectangle::input() {
	cout << "Enter size: ";
	cin >> this->size;
	cout << endl;
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
void ArrayOfRectangle::output() {
	for (int i = 0; i < this->size; i++) {
		this->a[i].output();
		cout << endl;
	}
	cout << endl;
}
int ArrayOfRectangle::maxArea() {
	int max = this->a[0].area();
	for (int i = 0; i < n; i++)
		if (max <= this->a[i].area())
			max = this->a[i].area();
	return max;
}
int ArrayOfRectangle::maxCircumference() {
	int max = this->a[0].circumference();
	for (int i = 0; i < n; i++)
		if (max <= this->a[i].circumference())
			max = this->a[i].circumference();
	return max;
}
