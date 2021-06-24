#pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_H
class Triangle
{
private:
	double a, b, c;
public:
	Triangle();
	Triangle(double a, double b, double c);
	void setA(double a);
	void setB(double b);
	void setC(double c);
	double getA();
	double getB();
	double getC();
	void input();
	void output();
	double area();
	double circumference();
};
#endif // !TRIANGLE_H



