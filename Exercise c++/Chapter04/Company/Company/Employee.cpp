#include "People.h"
#include "Employee.h"
#include <iostream>
using namespace std;
Employee::Employee() :People() {
	this->id = "";
	this->position = "";
	this->allowance = 0;
}
Employee::Employee(string id, string position, double allowance, char* l, char* f, Date dob, Address address, bool sex) : People( l,  f,  dob,  address,  sex) {
	this->id = id;
	this->position = position;
	this->allowance = allowance;
}
void Employee::input() {
	cout << "IS EMPLOYEE: " << endl;
	cin.ignore();
	cout << "Enter id: ";
	getline(cin, id);
	cout << endl;
	cout << "Enter position: "; 
	getline(cin, position);
	cout << endl;
	cout << "Enter Allowance: ";
	cin >> this->allowance;
	cout << endl;
	People::input();
}
void Employee::output() {
	cout << "Id: " << this->id << endl;
	cout << "Position: " << this->position << endl;
	cout << "Allowance: " << this->allowance << endl;
	People::output();
}
istream& operator>>(istream& is, Employee& emp) {
	emp.input();
	return is;
}
ostream& operator<<(ostream& os, Employee& emp) {
	emp.output();
	return os;
}
