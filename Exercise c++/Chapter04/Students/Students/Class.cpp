#include "Class.h"
#include <iostream>
using namespace std;

Class::Class(){
	this->className = new char[10];
	this->course = 1;
}
Class::Class(char* cl, int course) {
	this->className = new char[10];
	this->className = cl;
	this->course = course;
}
Class::Class(const Class& cl) {
	this->className = cl.className;
	this->course = cl.course;
}
Class& Class::operator=(const Class& cl) {
	this->className = cl.className;
	this->course = cl.course;
	return *this;
}
Class::~Class() {
	delete[]className;
	className = NULL;
}
void Class::input() {
	cout << endl;
	//cin.ignore();
	cout << "Enter class name: ";
	gets_s(this->className, 10);
	cout << endl << "Enter course: ";
	cin >> course;
	cout << endl;
}
void Class::output() {
	cout << "Classname: " << this->className << "\n"<< "Course: " << this->course << endl;
}
istream& operator>>(istream& is, Class& cl) {
	cl.input();
	return is;
}
ostream& operator<<(ostream& os, Class& cl) {
	cl.output();
	return os;
}