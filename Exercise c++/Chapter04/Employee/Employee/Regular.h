#pragma once
#include <iostream>
#include "Employee.h"

using namespace std;

class Regular: public Employee {
protected:
	int yearOfExperence;
	double rate, basicSalary;
	Employee employee;
public:
	Regular();
	Regular(int yOE, double rate, double basicSalary, Employee employee);
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
				cin >> yOE;
			} while (yOE > 0);

		}	
		else
			this->yearOfExperence = yOE;
	}
	void setRate(double rate) {
		if (rate < 0) {
			cout << "Enter False. Please enter again: ";
			while (rate < 0)
				cin >> this->rate;
		}
		else
			this->rate = rate;
	}
	void setBasicSalary(int basicSalary) {
		if (basicSalary < 0) {
			cout << "Enter False. Please enter again: ";
			while (basicSalary < 0)
				cin >> this->basicSalary;
		}
		else
			this->basicSalary = basicSalary;
	}
};
