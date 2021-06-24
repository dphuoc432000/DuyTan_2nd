#pragma once
#include <iostream>
using namespace std;
class Address
{
protected:
	string number, street, district, city;
public:
	Address();
	Address(string n, string s, string d, string c);
	string getNumber() {
		return this->number;
	}
	string getStreet() {
		return this->street;
	}
	string getDistrict() {
		return this->district;
	}
	string getCity() {
		return this->city;
	}
	void setNumber(string n) {
		this->number = n;
	}
	void setStreet(string s) {
		this->street = s;
	}
	void setDistric(string d) {
		this->district = d;
	}
	void setCity(string c) {
		this->city = c;
	}
	void input();
	friend istream& operator>>(istream& is, Address&);
	void output();
	friend ostream& operator<<(ostream& os, Address&);
};

