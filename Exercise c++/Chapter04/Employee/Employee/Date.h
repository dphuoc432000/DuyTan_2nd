#pragma once
#include <iostream>
using namespace std;
class Date
{
protected:
	int d, m, y;
public:
	Date();
	Date(int d, int m, int y);
	int maxDay();
	void setDay(int d);
	void setMonth(int m);
	void setYear(int y);
	void input();
	friend istream& operator>>(istream& is, Date&);
	void output();
	friend ostream& operator << (ostream& os, Date&);
	int getDay() {
		return this->d;
	}
	int getMonth() {
		return this->m;
	}
	int getYear() {
		return this->y;
	}
};

