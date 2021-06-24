#include "Subject.h"
#include <iostream>
using namespace std;
Subject::Subject() {
	this->subjectName = new char[10];
	this->credit = 1;
	this->mark = 1;
}
Subject::Subject(char* cl, int credit, double mark) {
	this->subjectName = new char[10];
	this->subjectName = cl;
	this->credit = credit;
	this->mark = mark;
}
Subject::Subject(const Subject& cl) {
	this->subjectName = cl.subjectName;
	this->credit = cl.credit;
	this->mark = cl.mark;
}
Subject& Subject::operator=(const Subject& cl) {
	this->subjectName = cl.subjectName;
	this->credit = cl.credit;
	this->mark = cl.mark;
	return *this;
}
Subject::~Subject() {
	delete[]subjectName;
	subjectName = NULL;
}
void Subject::input() {
	cin.ignore();
	cout << "Enter subject name: ";
	gets_s(this->subjectName, 10);
	cout << endl << "Enter credit: ";
	cin >> this->credit;
	cout << endl << "Enter mark: ";
	cin >> this->mark;
	cout << endl;
}
void Subject::output() {
	cout << "Subjectname: " << this->subjectName;
	cout << endl << "Credit: " << this->credit << endl;
	cout << "Mark: " << this->mark << endl;
}
istream& operator>>(istream& is, Subject& cl) {
	cl.input();
	return is;
}
ostream& operator<<(ostream& os, Subject& cl) {
	cl.output();
	return os;
}
