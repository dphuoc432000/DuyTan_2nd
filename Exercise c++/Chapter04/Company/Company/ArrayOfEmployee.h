#pragma once
#include "Employee.h"
#include "Regular.h"
#include "Contract.h"
#include <iostream>
using namespace std;
class ArrayOfEmployee
{
private:
	int n;
	Employee** a;
public:
	ArrayOfEmployee();
	ArrayOfEmployee(Employee **a, int n);
	ArrayOfEmployee(const ArrayOfEmployee&);
	ArrayOfEmployee& operator=(const ArrayOfEmployee&);
	~ArrayOfEmployee();
	void input();
	void output();
	friend istream& operator>>(istream& is, ArrayOfEmployee&);
	friend ostream& operator<<(ostream& os, ArrayOfEmployee&);
	void outputDistrct();
	void remove(int k);
	void removeOctober();
	void sortName();
	void averageSalaryOfStaff();
};




