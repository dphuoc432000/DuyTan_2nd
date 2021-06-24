#pragma once
#include <iostream>
#include "Employee.h"

using namespace std;

class Contract : public Employee {
protected:
	double gradeSalary;
	Employee employee;
public:
	Contract();
	Contract(double gradeSalary, Employee employee);
	Contract(const Contract&);
	Contract& operator=(const Contract&);
	double computeSalary();
	void input();
	void output();
	friend istream& operator>>(istream& is, Contract&);
	friend ostream& operator<<(ostream& os, Contract&);
	double getGradeSalary() {
		return gradeSalary;
	}
	void setGradeSalary(double gradeSalary) {
		if (gradeSalary < 0) {
			do {
				cout << "Enter False. Please enter again: ";
				cin >> this->gradeSalary;
			} while (this->gradeSalary < 0);

		}
		else
			this->gradeSalary = gradeSalary;
	}
};
