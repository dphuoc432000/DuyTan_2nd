#include "Employee.h"
#include <iostream>
using namespace std;
Employee::Employee() :People() {
	this->id = "";
	this->position = "";
	this->allowance = 0;
}
Employee::Employee(string id, string position, double allowance, People peo) : People((People&)peo) {
	this->id = id;
	this->position = position;
	this->allowance = allowance;
	this->peo = peo;
}
Employee::Employee(const Employee& emp) :People((People&)peo) {
	this->id = emp.id;
	this->position = emp.position;
	this->allowance = emp.allowance;
}
/*Employee& Employee::operator=(const Employee& emp) {
	People::operator=((People&) emp);
	this->id = emp.id;
	this->position = emp.position;
	this->allowance = emp.allowance;
	return *this;
}*/
void Employee::input() {
	cout << "Enter id: ";
	cin >> this->id;
	cout << endl;
	cout << "Enter position: ";
	cin >> this->position;
	cout << endl;
	cout << "Enter Allowance: ";
	cin >> this->allowance;
	cout << endl;
	fflush(stdin);
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
