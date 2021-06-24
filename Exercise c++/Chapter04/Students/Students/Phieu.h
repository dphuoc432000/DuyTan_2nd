#pragma once
#include <iostream>
#include "Student.h"
#include "Class.h"
#include "Subject.h"
using namespace std;
class Phieu
{
private:
	Student s;
	Class c;
	int n;
	Subject* a;
public: 
	Phieu();
	Phieu(Student s, Class c, int n, Subject* a);
	Phieu(const Phieu&);
	Phieu& operator=(const Phieu&);
	~Phieu();
	void input();
	void output();
	friend istream& operator>>(istream& is, Phieu& p)
	{
		p.input();
		return is;
	}
	friend ostream& operator<<(ostream& os, Phieu& p) {
		p.output();
		return os;
	}
	Student getStudent() {
		return s;
	}
	Class getClass() {
		return c;
	}
	int getN() {
		return n;
	}
};

