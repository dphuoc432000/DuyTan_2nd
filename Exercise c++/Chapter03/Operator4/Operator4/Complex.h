#pragma once
#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;
class Complex
{
private:
	double a, b;
public:
	Complex();
	Complex(int a, int b);
	Complex(const Complex&);
	Complex& operator = (const Complex&);
	/*void output();*/
	friend istream& operator>>(istream& is, Complex&);
	friend ostream& operator << (ostream& os, Complex&);
	Complex operator+(Complex f2);
	Complex operator-(Complex f2);
	Complex operator*(Complex f2);
	Complex operator/(Complex f2);
	bool operator==(Complex f2);
	bool operator!=(Complex f2);
	bool operator>(Complex f2);
	bool operator>=(Complex f2);
	bool operator<(Complex f2);
	bool operator<=(Complex f2);
	/*get*/const Complex& operator()()const;
	/*set*/Complex& operator()();
};
#endif // COMPLEX_H

