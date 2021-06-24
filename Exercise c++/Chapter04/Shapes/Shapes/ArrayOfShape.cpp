#include "ArrayOfShape.h"
#include <iostream>
using namespace std;
 
ArrayOfShape::ArrayOfShape() {
	this->n = 0;
	this->a = new Shape * [10];
}
ArrayOfShape::ArrayOfShape(Shape** a, int n) {
	a = new Shape * [10];
	this->a = a;
	this->n = n;
}
ArrayOfShape::ArrayOfShape(const ArrayOfShape& arr) {
	this->a = new Shape * [10];
	this->n = arr.n;
	for (int i = 0; i < arr.n; i++)
		this->a[i] = arr.a[i];
}
ArrayOfShape& ArrayOfShape::operator=(const ArrayOfShape& arr) {
	this->a = new Shape * [10];
	this->n = arr.n;
	for (int i = 0; i < arr.n; i++)
		this->a[i] = arr.a[i];
	return *this;
}
ArrayOfShape::~ArrayOfShape() {
	delete[]a;
	a = NULL;
}
void ArrayOfShape::input() {
	cout << "Enter n: ";
	cin >> this->n;
	for (int i = 0; i < this->n; i++) {
		int choose;
		cout << "Enter choose(0.Rectangle - 1.Square - 2.Cicle - 3.Cyclinder): ";
		cin >> choose;
		if (choose < 0 || choose > 3) {
			do {
				cout << "You did false enter. Enter again: ";
				cin >> choose;
			} while (choose < 0 || choose > 3);
		}
		cout << endl;
		if (choose == 0) {
			a[i] = new Rectangle();
			a[i]->input();
		}
		else if (choose == 1) {
			a[i] = new Square();
			a[i]->input();
		}
		else if (choose == 2) {
			a[i] = new Circle();
			a[i]->input();
		}
		else if (choose == 3) {
			a[i] = new Cyclinder();
			a[i]->input();
		}
		
	}
}
void ArrayOfShape::area() {
	for(int i = 0; i < this->n; i++) {
		cout << a[i]->area();
		cout << endl;
	}
}
