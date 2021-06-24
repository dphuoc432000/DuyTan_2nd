#pragma once
#include <iostream>
#include <string>
#include "People.h"
using namespace std;
class Employee :public People
{
protected:
	string id, position;
	double allowance;
public:
	Employee();
	Employee(string id, string position, double allowance, char* l, char* f, Date dob, Address address, bool sex);
	
	virtual void input();
	virtual void output();
	virtual double computeSalary() {
		return 0;
	};
	friend istream& operator>>(istream& is, Employee&);
	friend ostream& operator<<(istream& os, Employee&);
	string getId() {
		return this->id;
	}
	string getPosition() {
		return this->position;
	}
	double getAllowance() {
		return this->allowance;
	}
	void setId(string id) {
		this->id = id;
	}
	void setPosition(string position) {
		this->position = position;
	}
	void setAllowance(double allowance) {
		this->allowance = allowance;
	}
};

