#include "People.h"
#include <iostream>
#include <cstring>
using namespace std;

People::People():Date(),Address() {
	this->lastName = new char[10];
	this->firstName = new char[10];
	this->sex = 1;
}
People::People(char* l, char* f, Date dob, Address address, bool sex):Date((Date&)dob),Address((Address&)address){
	l = new char[10];
	f = new char[10];
	this->lastName = l;
	this->firstName = f;
	this->sex = sex;
	this->dob = dob;
	this->address = address;
}
People::People(const People& peo):Date((Date&)peo),Address((Address&)peo) {
	this->lastName = new char[10];
	this->firstName = new char[10];
	this->lastName = peo.lastName;
	this->firstName = peo.firstName;
	this->sex = peo.sex;
}
/*People& People::operator=(const People& peo) {
	this->lastName = new char[10];
	this->firstName = new char[10];
	this->lastName = peo.lastName;
	this->firstName = peo.firstName;
	this->sex = peo.sex;
	return *this;
}*/
People::~People() {
	delete[]lastName;
	lastName=NULL;
	delete[]firstName;
	firstName = NULL;
}
void People::input() {
	cin.ignore();
	cout << "Enter lastName: ";
	cin.getline(this->lastName, 10);
	cout << endl;
	cout << "Enter firstName: ";
	gets_s(firstName, 10);
	cout << endl;
	cout << "Enter sex(1-Male, 0-Female): ";
	cin >> this->sex;
	Date::input();
	Address::input();
}
void People::output() {
	cout <<"Full name: " << this->lastName << " "<< this->firstName << endl;
	cout << "Birth of day: ";
	Date::output();
	cout << "Address: ";
	Address::output();
	cout << "Sex: ";
	if (getSex() == 1)
		cout << "Male";
	else
		cout << "Female";
}
istream& operator>>(istream& is, People& people) {
	people.input();
	return is;
}
ostream& operator<<(ostream& os, People& people) {
	people.output();
	return os;
}