#pragma once
#ifndef POINT_H
#define POINT_H
class Point
{
private:
	int x; int y;
public:
	Point();
	Point(int x, int y);
	void input();
	void output();
	int getY();
	int getX();
	void setY(int y);
	void setX(int x);
	double distance(Point b);

};
#endif 