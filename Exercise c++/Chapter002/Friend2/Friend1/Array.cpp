#include "Array.h"
#include <iostream>
using namespace std;
Array::Array(int n) {
	this->n = n;
	a = new int[this->n];
}
Array::Array(const Array& array) {
	this->n = array.n;
	this->a = new int[this->n];
	for (int i = 0; i < this->n; i++)
		this->a[i] = array.a[i];
}
Array& Array::operator=(const Array& array) {
	this->n = array.n;
	this->a = new int[this->n];
	for (int i = 0; i < this->n; i++)
		this->a[i] = array.a[i];
	return *this;
}
void Array::input() {
	for (int i = 0; i < this->n; i++) {
		cout << i << ": ";
		cin >> this->a[i];
	}
}
void Array::output() {
	for (int i = 0; i < this->n; i++)
		cout << this->a[i] << "\t";
}
