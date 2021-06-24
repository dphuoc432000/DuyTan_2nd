#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H
class Circle
{
private:
	double radius;
public:
	Circle();
	Circle(double r);
	double getRadius();
	void setRadius(double r);
	void input();
	void output();
	double area();
	double circumference();
};
#endif // !CIRCLE_H



