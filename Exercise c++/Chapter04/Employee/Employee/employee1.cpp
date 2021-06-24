#include "employee1.h"
#include <iostream>
using namespace std;
employee1::employee1() :People() {
	this->id = "";
	this->position = "";
	this->allowance = 0;
}
employee1::employee1(string id, string position, double allowance, People peo) : People((People&)peo) {
	this->id = id;
	this->position = position;
	this->allowance = allowance;
	this->peo = peo;
}
employee1::employee1(const employee1& emp):People((People&)peo) {
	this->id = emp.id;
	this->position = emp.position;
	this->allowance = emp.allowance;
}
/*employee1& employee1::operator=(const employee1& emp) {
	People::operator=((People&) emp);
	this->id = emp.id;
	this->position = emp.position;
	this->allowance = emp.allowance;
	return *this;
}*/
void employee1::input() {
	cout << "Enter id: ";
	cin >> this->id;
	cout << endl;
	cout << "Enter position: ";
	cin >> this->position;
	cout << endl;
	cout << "Enter Allowance: ";
	cin >> this->allowance;
	fflush(stdin);
	People::input();
}
void employee1::output() {
	cout << "Id: " << this->id << endl;
	cout << "Position: " << this->position << endl;
	cout << "Allowance: " << this->allowance << endl;
	People::output();
}
istream& operator>>(istream& is, employee1& emp) {
	emp.input();
	return is;
}
ostream& operator<<(ostream& os, employee1& emp) {
	emp.output();
	return os;
}
