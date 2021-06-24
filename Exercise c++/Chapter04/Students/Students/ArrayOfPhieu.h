#pragma once
#include <iostream>
using namespace std;
#include "Phieu.h"
#include "Class.h"
#include "Date.h";
#include "People.h"
#include "Student.h"
#include "Student.h"
class ArrayOfPhieu
{
private:
	Phieu** a;
	int n;
public:
	ArrayOfPhieu();
	ArrayOfPhieu(Phieu** a, int n);
	ArrayOfPhieu(const ArrayOfPhieu&);
	ArrayOfPhieu& operator=(const ArrayOfPhieu&);
	~ArrayOfPhieu();
	void input();
	void output();
	friend istream& operator>>(istream& is, ArrayOfPhieu& arr) {
		arr.input();
		return is;
	}
	friend ostream& operator<<(ostream& os, ArrayOfPhieu& arr) {
		arr.output();
		return os;
	}
};

