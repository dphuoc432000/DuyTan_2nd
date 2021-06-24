#pragma once
#include <iostream>
#include "People.h"
using namespace std;
class Employee :public People
{
protected:
	string id, position;
	double allowance;
	People peo;
public:
	Employee();
	Employee(string id, string position, double allowance, People peo);
	Employee(const Employee&);
	Employee& operator=(const Employee&);
	double computeSalary();
	void input();
	void output();
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

