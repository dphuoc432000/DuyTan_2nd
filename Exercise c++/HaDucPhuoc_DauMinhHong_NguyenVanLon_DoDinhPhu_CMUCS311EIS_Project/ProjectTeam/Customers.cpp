#include "Customers.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

Customers::Customers() {
	this->MaKH = "";
	this->lastName = "";
	this->firstName = "";
	this->sex = 1;
}
Customers::Customers(string MaKH, string l,string f, Address address, bool sex) {
	this->MaKH = MaKH;
	this->lastName = l;
	this->firstName = f;
	this->sex = sex;
	this->address = address;
}
Customers::Customers(const Customers& cus) {
	this->MaKH = cus.MaKH;
	this->lastName = cus.lastName;
	this->firstName = cus.firstName;
	this->address = cus.address;
	this->sex = cus.sex;
}
Customers& Customers::operator=(const Customers& cus) {
	this->MaKH = cus.MaKH;
	this->lastName = cus.lastName;
	this->firstName = cus.firstName;
	this->address = cus.address;
	this->sex = cus.sex;
	return *this;
}
void Customers::input() {
	
	cout << "- Nhap ma khach hang: ";
	cin >> this->MaKH;
	cout << "- Nhap ho va ten: " << "\n";
	cout <<  "\t + Nhap ten: ";
	cin.ignore();
	getline(cin, this->lastName);
	cout << endl;
	cout << "\t + Nhap ho:  ";
	getline(cin, this->firstName);
	cout << endl;
	cout << "- Nhap gioi tinh (1 - Nam, 0- Nu): ";
	cin >> this->sex;
	this->setSex(this->sex);
	cout << endl << "- Nhap dia chi: " << endl;
	address.input();
}
void Customers::output() {
	cout << "- Ten khach hang: " << this->lastName << " " << this->firstName << "\t\t";
	cout << "- Gioi tinh: ";
	if (getSex() == 1)
		cout << "Nam" << endl;
	else
		cout << "Nu" << endl;
	cout << "- Dia chi: ";
	address.output();
	cout << "- Ma khach hang: " << this->MaKH << "\t\t";
}
istream& operator>>(istream& is, Customers& cus) {
	cus.input();
	return is;
}
ostream& operator<<(ostream& os, Customers& cus) {
	cus.output();
	return os;
}