#include "Date.h"
#include<iostream>
using namespace std;

Date::Date() {
	this->y = 1900;
	this->m = 1;
	this->d = 1;
}
Date::Date(int d, int m, int y) {
	this->setYear(y);
	this->setMonth(m);
	this->setDay(d);
}

int Date::maxDay() {
	if (this->m == 4 || this->m == 6 || this->m == 9 || this->m == 11)
		return 30;
	else {
		if (m == 2) {
			if ((this->y % 4 == 0 && this->y / 100 == 0) || this->y % 400 == 0)
				return 29;
			else
				return 28;
		}
		else
			return 31;
	}
}
void Date::setDay(int day)
{
	if (day  < 0 || day > maxDay()) {
		do {
			cout << "Enter False. Please enter again: ";
			cin >> this->d;
		} while (this->d < 0 || this->d > maxDay());
	}
	else
		this->d = day;
}
void Date::setMonth(int month)
{
	if (month < 0 || month > 12) {
		do {
			cout << "Enter False. Please enter again: ";
			cin >> this->m;
		} while (this->m < 0 || this->m >12);
	}
	else
		this->m = month;
}
void Date::setYear(int year)
{
	if (year < 1800 || year > 5000) {
		do {
			cout << "Enter False. Please enter again: ";
			cin >> this->y;
		} while (this->y < 1800 || this->y > 5000);
	}
	else
		this->y = year;
}
void Date::input() {
	cout << endl;
	cout << "Enter Year: ";
	cin >> this->y;
	setYear(this->y);
	cout << endl;
	cout << "Enter Month: ";
	cin >> this->m;
	setMonth(this->m);
	cout << endl;
	cout << "Enter Day: ";
	cin >> this->d;
	setDay(this->d);
}
istream& operator>>(istream& is, Date& date) {
	date.input();
	return is;
}
void Date::output() {
	cout << this->d << " / " << this->m << " / " << this->y << endl;
}
ostream& operator<<(ostream& os, Date& date) {
	date.output();
	return os;
}