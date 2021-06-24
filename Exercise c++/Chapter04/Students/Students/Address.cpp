#include "Address.h"
#include <iostream>
#include <string>
using namespace std;

Address::Address() {
}

Address::Address(string n, string s, string d, string c) {
	this->number = n;
	this->street = s;
	this->district = d;
	this->city = c;
}
void Address::input() {
	cout << endl;
	cout << "Enter Number: ";
	cin >> this->number;
	cout << endl;
	cout << "Enter Street: ";
	cin >> this->street;
	cout << endl;
	cout << "Enter District: ";
	cin >> this->district;
	cout << endl;
	cout << "Enter City: ";
	cin >> this->city;
	cout << endl;
}
istream& operator>>(istream& is, Address& address) {
	address.input();
	return is;
}
void Address::output() {
	cout << this->number << " - " << this->street << " - " << this->district << " - " << this->city << "\t";
}
ostream& operator << (ostream& os, Address& address) {
	address.output();
	return os;
}