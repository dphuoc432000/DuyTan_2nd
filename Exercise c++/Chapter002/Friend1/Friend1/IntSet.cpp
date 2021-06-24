#include "IntSet.h"
#include <iostream>
using namespace std;
IntSet::IntSet() {
	a = new int[10];
	this->n = 0;
}
IntSet::IntSet(int capacity) {
	a = new int[capacity];
	n = 0;
}
IntSet::IntSet(const IntSet& intSet) {
	this->a = new int[10];
	this->n = intSet.n;
	for (int i = 0; i < intSet.n; i++)
		this->a[i] = intSet.a[i];
}
IntSet& IntSet::operator=(const IntSet& intSet) {
	this->a = new int[10];
	this->n = intSet.n;
	for (int i = 0; i < intSet.n; i++)
		this->a[i] = intSet.a[i];
	return *this;
}
IntSet::~IntSet() {
	delete[]a;
	a = NULL;
}
void IntSet::input() {
	cout << "Enter n: ";
	cin >> this->n;
	for (int i = 0; i < this->n; i++)
		cin >> this->a[i];
}
void IntSet::output() {
	for (int i = 0; i < this->n; i++)
		cout << this-> a[i];
}
