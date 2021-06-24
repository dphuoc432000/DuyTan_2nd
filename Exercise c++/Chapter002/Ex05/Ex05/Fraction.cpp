#include "Fraction.h"
#include <iostream>
using namespace std;
Fraction::Fraction() {
	this->denominator = 1;
	this->numerator = 0;
}
Fraction::Fraction(int d, int n) {
	this->setDenominator(d);
	this->setNumerator(n);
}
int Fraction::getDenominator() {
	return this->denominator;
}
int Fraction::getNumerator() {
	return this->numerator;
}
void Fraction::setDenominator(int d) {
	if (d = 0)
		d = 1;
	else
		this->denominator = d;
}
void Fraction::setNumerator(int n) {
	this->numerator = n;
}
Fraction Fraction::plus(Fraction f1) {
	Fraction f2;
	f2.numerator = f1.denominator * this->numerator + this->denominator * f1.numerator;
	f2.denominator = f1.denominator * this->denominator;
	return f2;
}
Fraction Fraction::divison(Fraction f1) {
	Fraction f3;
	f3.numerator = this->numerator * f1.denominator;
	f3.denominator = this->denominator * f1.numerator;
	return f3;
}
Fraction Fraction::multiplication(Fraction f1) {
	Fraction f3;
	f3.numerator = this->numerator * f1.numerator;
	f3.denominator = this->denominator * f1.denominator;
	return f3;
}
Fraction Fraction::Subtraction(Fraction f1) {
	Fraction f3;
	f3.numerator = this->numerator * f1.denominator - this->denominator * f1.numerator;
	f3.denominator = this->denominator * f1.denominator;
	return f3;
}
void Fraction::input() {
	cout << "Enter denominator: ";
	cin >> this->denominator;
	cout << endl << "Enter numerator: ";
	cin >> this->numerator;
	cout << endl;
}
void Fraction::output() {
	cout << this->numerator << "/" << this->denominator;
	cout << endl;
}
