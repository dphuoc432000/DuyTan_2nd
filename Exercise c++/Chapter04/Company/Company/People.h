#pragma once
#include "Date.h"
#include "Address.h"
#include<iostream>
#include <string>
using namespace std;
class People
{
protected:
	char* lastName, * firstName;
	Date dob;
	Address address;
	int sex;
public:
	People();
	People(char* l, char* f, Date dob, Address address, int sex);
	People(const People&);
	People& operator=(const People&);
	~People();
	virtual void input();
	virtual void output();
	friend istream& operator>>(istream& is, People&);
	friend ostream& operator<<(ostream& is, People&);
	Date getDob() {
		return this->dob;
	}
	Address getAddress() {
		return this->address;
	}
	void setDob(Date dob) {
		this->dob = dob;
	}
	void setAddress(Address address) {
		this->address = address;
	}
	char getLastName() {
		return *lastName;
	}
	char getFistName() {
		return *firstName;
	}
	int getSex() {
		return this->sex;
	}
	void setLastName(char* lastName) {
		strcpy_s(this->lastName,sizeof lastName, lastName);
		/*this->lastName = lastName;*/
	}
	void setFirstName(char* fn) {
		strcpy_s(this->firstName,sizeof firstName, fn);
		/*this->firstName = firstName;*/
	}
	void setSex(int sex) {
		if (sex < 0 || sex >= 1) {
			do {
				cout << "Enter False. Please enter again: ";
				cin >> this->sex;
			} while (this->sex < 0 || this->sex > 1);
		}
		else
			this->sex = sex;
	}
	/*void setDate(Date dob) {
		this->dob = dob;
	}
	void setAddress(Address add) {
		this->address = add;
	}*/
};

