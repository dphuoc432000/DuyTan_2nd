#pragma once
#include "Date.h"
#include "Address.h"
#include<iostream>
using namespace std;
class People :public Date,public Address
{
protected:
	char* lastName, * firstName;
	Date dob;
	Address address;
	bool sex;
public:
	People();
	People(char* l, char* f, Date dob, Address address, bool sex);
	People(const People&);
	/*People& operator=(const People&);*/
	~People();
	void input();
	void output();
	friend istream& operator>>(istream& is, People&);
	friend ostream& operator<<(ostream& is, People&);
	char getLastName() {
		return *this->lastName;
	}
	char getFistName() {
		return *this->firstName;
	}
	bool getSex() {
		return this->sex;
	}
};

