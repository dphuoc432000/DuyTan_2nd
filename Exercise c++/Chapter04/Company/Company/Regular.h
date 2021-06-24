#pragma once
#include <iostream>
#include "Employee.h"

using namespace std;

class Regular : public Employee {
protected:
	int yearOfExperence;
	double rate, basicSalary;
	Employee employee;
public:
	Regular();
	Regular(int yOE, double rate, double basicSalary, Employee employee);
	Regular(const Regular&);
	Regular& operator=(const Regular& regular);
	double computeSalary();
	void input();
	void output();
	friend istream& operator>>(istream& is, Regular&);
	friend ostream& operator<<(ostream& os, Regular&);
	int getYearOfExperence() {
		return this->yearOfExperence;
	}
	double getRate() {
		return this->rate;
	}
	double getBasicSalary() {
		return this->basicSalary;
	}
	void setYearOfExperence(int yOE) {
		if (yOE < 0) {
			do {
				cout << "Enter False. Please enter again: ";
				cin >> this->yearOfExperence;
			} while (this->yearOfExperence < 0);

		}
		else
			this->yearOfExperence = yOE;
	}
	void setRate(double rate) {
		if (rate < 0) {
			do {
				cout << "Enter False. Please enter again: ";
				cin >> this->rate;
			} while (this->rate < 0);
		}
		else
			this->rate = rate;
	}
	void setBasicSalary(double basicSalary) {
		if (basicSalary < 0) {
			do {
				cout << "Enter False. Please enter again: ";
				cin >> this->basicSalary;
			} while (basicSalary < 0);
		}
		else
			this->basicSalary = basicSalary;
	}
};
