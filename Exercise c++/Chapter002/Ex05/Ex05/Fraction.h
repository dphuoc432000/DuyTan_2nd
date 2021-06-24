#pragma once
#ifndef FRACTION_H
#define FRACTION_H
class Fraction
{
private:
	int denominator, numerator;
public:
	int getDenominator();
	int getNumerator();
	void setDenominator(int d);
	void setNumerator(int n);
	void input();
	void output();
	Fraction();
	Fraction(int d, int n);
	Fraction plus(Fraction f1);
	Fraction divison(Fraction f1);
	Fraction multiplication(Fraction f1);
	Fraction Subtraction(Fraction f1);
};
#endif // !1