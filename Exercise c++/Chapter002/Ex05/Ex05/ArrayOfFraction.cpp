#include "ArrayOfFraction.h"
#include <iostream>
using namespace std;
ArrayOfFraction::ArrayOfFraction() {
	a = new Fraction[10];
	this->n = 0;
}
ArrayOfFraction::ArrayOfFraction(const ArrayOfFraction& rec) {
	this->n = rec.n;
	ArrayOfFraction* a = new ArrayOfFraction[10];
	for (int i = 0; i < rec.n; i++)
		this->a[i] = rec.a[i];
}
ArrayOfFraction& ArrayOfFraction::operator=(const ArrayOfFraction& rec) {
	this->n = rec.n;
	ArrayOfFraction* a = new ArrayOfFraction[10];
	for (int i = 0; i < rec.n; i++)
		this->a[i] = rec.a[i];
	return *this;
}
void ArrayOfFraction::input() {
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
void ArrayOfFraction::output() {
	for (int i = 0; i < this->size; i++) {
		this->a[i].output();
		cout << endl;
	}
	cout << endl;
}
ArrayOfFraction ArrayOfFraction::maxPlus() {
	int flag1 = 0, flag2 = 0;
	double max =  1.0*this->a[0].plus(this->a[1]).getNumerator()/ this->a[0].plus(this->a[1]).getDenominator();
	for (int i = 0; i < this->size; i++)
		if (max <= 1.0*this->a[i].plus(this->a[i + 1]).getNumerator()/ this->a[i].plus(this->a[i + 1]).getDenominator()){
			max = 1.0*this->a[i].plus(this->a[i + 1]).getNumerator()/ this->a[i].plus(this->a[i + 1]).getDenominator();
			flag1 = i;
			flag2 = i + 1;
		}
	a[flag1].output();
	a[flag2].output();
}
 