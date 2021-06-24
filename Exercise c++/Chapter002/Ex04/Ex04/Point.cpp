#include "Point.h"
#include<iostream>
#include<cmath>
using namespace std;
Point::Point()
{
	x = 0;
	y = 0;
}
Point::Point(int x, int y)
{
	this->setX(x);
	this->setY(y);
}
void Point::input()
{
	cout << "Enter x: ";
	cin >> this->x;
	cout << endl << "Enter y: ";
	cin >> this->y;
	cout << endl;
}
void Point::output()
{
	cout << "x: " << this->x << "\t" << "y: "<< this->y;
	cout << endl;
}
int Point::getY()
{
	return this->y;
}
int Point::getX()
{
	return this->y;
}
void Point::setY(int y)
{
	this->y = y;
}
void Point::setX(int x)
{
	this->x = x;
}
double Point::distance(Point b)
{
	return sqrt((b.x - this->x) * (b.x - this->x) + (b.y - this->y) * (b.y - this->y));
}
