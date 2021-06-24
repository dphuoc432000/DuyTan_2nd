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
Address::Address(const Address& address) {
	this->number = address.number;
	this->street = address.street;
	this->district = address.district;
	this->city = address.city;
}
void Address::input() {
	cin.ignore();
	cout << "\t + Nhap so nha: ";
	getline(cin, this->number);
	cout << endl;
	cout << "\t + Nhap ten duong: ";
	getline(cin, this->street);
	cout << endl;
	cout << "\t + Nhap ten huyen: ";
	getline(cin, this->district);
	cout << endl;
	cout << "\t + Nhap thanh pho: ";
	getline(cin, this->city);
	cout << endl;
}
istream& operator>>(istream& is, Address& address) {
	address.input();
	return is;
}
void Address::output() {
	cout << this->number << " - " << this->street << " - " << this->district << " - " << this->city << endl;
}
ostream& operator << (ostream& os, Address& address) {
	address.output();
	return os;
}