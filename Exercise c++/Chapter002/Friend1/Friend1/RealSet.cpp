#include "RealSet.h"
#include <iostream>
using namespace std;
RealSet::RealSet() {
	this->a = new double[10];
	this->n = 0;
}
RealSet::RealSet(int capacity) {
	a = new double[capacity];
	n = 0;
}
RealSet::RealSet(const RealSet& intSet) {
	this->a = new double[10];
	this->n = intSet.n;
	for (int i = 0; i < intSet.n; i++)
		this->a[i] = intSet.a[i];
}
RealSet& RealSet::operator=(const RealSet& intSet) {
	this->a = new double[10];
	this->n = intSet.n;
	for (int i = 0; i < intSet.n; i++)
		this->a[i] = intSet.a[i];
	return *this;
}
RealSet::~RealSet() {
	delete[]a;
	a = NULL;
}
void RealSet::input() {
	cout << "Enter n: ";
	cin >> this->n;
	for (int i = 0; i < this->n; i++)
		cin >> this->a[i];
}
void RealSet::output() {
	for (int i = 0; i < this->n; i++)
		cout << this->a[i];
}