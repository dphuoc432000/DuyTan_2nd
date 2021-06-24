#pragma once
#include <iostream>
#include <string>
using namespace std;
class Subject
{
private:
	char* subjectName;
	int credit;
	double mark;
public:
	Subject();
	Subject(char* sn, int credit, double mark);
	Subject(const Subject&);
	Subject& operator=(const Subject&);
	~Subject();
	void input();
	void output();
	friend istream& operator>>(istream& is, Subject& cl);
	friend ostream& operator<<(ostream& os, Subject& cl);
	char getSubjectName() {
		return *this->subjectName;
	}
	int getCredit() {
		return this->credit;
	}
	double getMark() {
		return this->mark;
	}
};

