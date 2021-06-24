#include "People.h"
#include <iostream>
#include <string>

using namespace std;

People::People() {
	this->lastName = new char[10];
	this->firstName = new char[50];
	this->sex = 1;
}
People::People(char* l, char* f, Date dob, Address address, bool sex) {
	this->lastName = new char[10];
	this->firstName = new char[50];
	strcpy_s(this->lastName, sizeof lastName, l);
	strcpy_s(this->firstName, sizeof firstName, f);
	/*this->lastName = l;
	this->firstName = f;*/
	this->sex = sex;
	this->dob = dob;
	this->address = address;
}
People::People(const People& peo) {
	this->lastName = new char[10];
	this->firstName = new char[50];
	strcpy_s(this->lastName, sizeof lastName, peo.lastName);
	strcpy_s(this->firstName, sizeof firstName, peo.firstName);
	this->sex = peo.sex;
}
People& People::operator=(const People& peo) {
	this->lastName = new char[10];
	this->firstName = new char[50];
	strcpy_s(this->lastName, sizeof lastName, peo.lastName);
	strcpy_s(this->firstName, sizeof firstName, peo.firstName);
	this->sex = peo.sex;
	return *this;
}
People::~People() {
	delete[]lastName;
	lastName = NULL;
	delete[]firstName;
	firstName = NULL;
}
void People::input() {
	cin.ignore();
	cout << "Enter lastName: ";
	gets_s(this->lastName, 10);
	cout << endl;
	cout << "Enter firstName: ";
	gets_s(firstName, 10);
	cout << endl;
	//cout << "Enter sex(1-Male, 0-Female): ";
	//cin >> this->sex;
	//this->setSex(this->sex);
	//dob.input();
	//address.input();
}
void People::output() {
	cout << "Full name: " << this->lastName << " " << this->firstName << endl;
	//cout << "Birth of day: ";
	//dob.output();
	//cout << "Address: ";
	//address.output();
	//cout << "Sex: ";
	//if (getSex() == 1)
	//	cout << "Male";
	//else
	//	cout << "Female";
}
istream& operator>>(istream& is, People& people) {
	people.input();
	return is;
}
ostream& operator<<(ostream& os, People& people) {
	people.output();
	return os;
}