#include "IntSet.h"
#include <iostream>
#include "RealSet.h"
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
void IntSet::intSetToRealSet(RealSet& s2) {
	s2.n = this->n;
	s2.a = new double[s2.n];
	for (int i = 0; i < s2.n; i++)
		s2.a[i] = (double)this->a[i];
}
