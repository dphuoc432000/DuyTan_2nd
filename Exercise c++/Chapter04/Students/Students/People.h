#pragma once
#include "Date.h"
#include "Address.h"
#include<iostream>
#include<string>
using namespace std;
class People :public Date, public Address
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
	People& operator=(const People&);
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
	void setLastName(char* lastName) {
		/*strcpy(this->lastName, lastName);*/
		this->lastName = lastName;
	}
	void setFirstName(char* firstName) {
		/*strcpy(this->firstName, firstName);*/
		this->firstName = firstName;
	}
	/*void setSex(bool sex) {
		if (sex < 0 || sex >= 1) {
			do {
				cout << "Enter False. Please enter again: ";
				cin >> this->sex;
			} while (this->sex < 0 || this->sex > 1);
		}
		else
			this->sex = sex;
	}*/
	void setDate(Date dob) {
		this->dob = dob;
	}
	void setAddress(Address address) {
		this->address = address;
	}
};

