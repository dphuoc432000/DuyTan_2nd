#include "Student.h"
#include <iostream>
using namespace std;
Student::Student() {
	this->id = 0;
}
Student::Student(long id, Subject sub, Class cl, char* lastName, char* firstName, Date dob, Address address, bool sex) :People(lastName, firstName, dob, address, sex) {
	this->id = id;
	this->subject = sub;
	this->clas = cl;
}
void Student::input() {
	//cout << "Enter ID: ";
	//cin >> this->id;
	//cout << endl << "CLASS: ";
	//clas.input();
	//cout << endl << "SUBJECT: ";
	//subject.input();
	cout << endl;
	People::input();
}
void Student::output() {
	//cout << "ID: ";
	clas.output();
	subject.output();
	People::output();
}
istream& operator>>(istream& is, Student& cl) {
	cl.input();
	return is;
}
ostream& operator<<(ostream& os, Student& cl) {
	cl.output();
	return os;
}