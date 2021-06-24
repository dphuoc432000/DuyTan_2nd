#include "ArrayOfPhieu.h"
#include <iostream>
using namespace std;
ArrayOfPhieu::ArrayOfPhieu() {
	a = new Phieu * [10];
	n = 0;
}
ArrayOfPhieu::ArrayOfPhieu(Phieu** a, int n) {
	a = new Phieu * [10];
	this->a = a;
	this->n = n;
}
ArrayOfPhieu::ArrayOfPhieu(const ArrayOfPhieu& arr) {
	this->a = new Phieu * [10];
	this->n = arr.n;
	for (int i = 0; i < arr.n; i++)
		this->a[i] = arr.a[i];
}
ArrayOfPhieu& ArrayOfPhieu::operator=(const ArrayOfPhieu& arr) {
	this->a = new Phieu * [10];
	this->n = arr.n;
	for (int i = 0; i < arr.n; i++)
		this->a[i] = arr.a[i];
	return *this;
}
ArrayOfPhieu::~ArrayOfPhieu() {
	delete[]a;
	a = NULL;
}
void ArrayOfPhieu::input() {
	cout << "Enter n: ";
	cin >> this->n;
	for (int i = 0; i < this->n; i++) {
		a[i]->input();
	}
}
void ArrayOfPhieu::output() {
	for (int i = 0; i < this->n; i++)
		a[i]->output();
}
