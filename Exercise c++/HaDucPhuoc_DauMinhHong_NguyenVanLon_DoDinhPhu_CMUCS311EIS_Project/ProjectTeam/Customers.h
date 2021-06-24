#pragma once
#include "Date.h"
#include "Address.h"
#include<iostream>
#include <string>
using namespace std;
class Customers
{
protected:
	string MaKH;
	string lastName;
	string firstName;
	Address address;
	int sex;
	

public:
	Customers();
	Customers(string MaKH, string l, string f, Address address, bool sex);
	Customers(const Customers&);
	Customers& operator=(const Customers&);
	virtual void input();
	virtual void output();
	friend istream& operator>>(istream& is, Customers&);
	friend ostream& operator<<(ostream& is, Customers&);

	string getMaKH() {
		return this->MaKH;
	}

	void setMaKH(string MaKH) {
		this->MaKH = MaKH;
	}
	Address getAddress() {
		return this->address;
	}
	void setAddress(Address address) {
		this->address = address;
	}
	string getLastName() {
		return this->lastName;
	}
	string getFistName() {
		return this->firstName;
	}
	int getSex() {
		return this->sex;
	}
	void setLastName(string lastName) {
		this->lastName = lastName;
	}
	void setFirstName(string fn) {
		this->firstName = fn;
	}
	void setSex(int sex) {
		if (sex < 0 || sex > 1) {
			do {
				cout << "Enter False. Please enter again: ";
				cin >> this->sex;
			} while (this->sex < 0 || this->sex > 1);
		}
		else
			this->sex = sex;
	}
	
};

