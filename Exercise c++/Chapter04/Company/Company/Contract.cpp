#include<iostream>
#include "Contract.h"
using namespace std;

Contract::Contract() :Employee() {
	this->gradeSalary = 0;
}
Contract::Contract(double gradeSalary, Employee employee) : Employee((Employee&)employee) {
	this->gradeSalary = gradeSalary;
}
Contract::Contract(const Contract& contract) : Employee((Employee&)contract) {
	this->gradeSalary = contract.gradeSalary;
}
Contract& Contract::operator=(const Contract& contract) {
	Employee::operator=((Employee &) contract);
	return *this;
}
double Contract::computeSalary() {
	return gradeSalary + allowance;
}
void Contract::input() {
	cout << "IS CONTRACT: " << endl;
	Employee::input();
	cout << "Enter GradeSalary: ";
	cin >> this->gradeSalary;
	cout << endl;
}
istream& operator>>(istream& is, Contract& regular) {
	regular.input();
	return is;
}
void Contract::output() {
	Employee::output();
	cout << endl << "GradeSalary: " << this->gradeSalary << endl;
}
ostream& operator<<(ostream& os, Contract& regular) {
	regular.output();
	return os;
}