#include "Regular.h"
#include<iostream>
using namespace std;

Regular::Regular() :Employee() {
	this->yearOfExperence = 0;
	this->rate = 0;
	this->basicSalary = 0;
}
Regular::Regular(int yOE, double rate, double basicSalary, Employee employee) : Employee((Employee&)employee) {
	this->rate = rate;
	this->yearOfExperence = yOE;
	this->basicSalary = basicSalary;
}
double Regular::computeSalary() {
	return this->rate * this->basicSalary + this->allowance;
}
Regular::Regular(const Regular& regular) : Employee((Employee&)regular) {
	this->rate = regular.rate;
	this->yearOfExperence = regular.yearOfExperence;
	this->basicSalary = regular.basicSalary;
}
Regular& Regular::operator=(const Regular& regular) {
	Employee::operator=((Employee&)regular);
	this->rate = regular.rate;
	this->yearOfExperence = regular.yearOfExperence;
	this->basicSalary = regular.basicSalary;
	return *this;
}
void Regular::input() {
	cout << "IS REGULAR: " << endl;
	Employee::input();
	cout << "Enter Year OF Experence: ";
	cin >> this->yearOfExperence;
	this->setYearOfExperence(this->yearOfExperence);
	this->setYearOfExperence(this->yearOfExperence);
	cout << endl;
	cout << "Enter Rate: ";
	cin >> this->rate;
	this->setRate(this->rate);
	cout << endl;
	cout << "Enter BasicSalary: ";
	cin >> this->basicSalary;
	this->setBasicSalary(this->basicSalary);
	cout << endl;
}
istream& operator>>(istream& is, Regular& regular) {
	regular.input();
	return is;
}
void Regular::output() {
	Employee::output();
	cout << endl << "Year Of Exxperence: " << this->yearOfExperence << "\t\t" << "Rate: " << this->rate << "\t\t" << "BasicSalary: " << this->basicSalary << endl;
	cout << "COMPUTE SALARY: " << computeSalary();
}
ostream& operator<<(ostream& os, Regular& regular) {
	regular.output();
	return os;
}
