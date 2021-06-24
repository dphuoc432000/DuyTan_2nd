#include "Phieu.h"
#include <iostream>
#include <iomanip>
using namespace std;
Phieu::Phieu() {
	n = 0;
	a = new Subject[10];
}
Phieu::Phieu(Student s, Class c, int n, Subject* a) {
	this->s = s;
	this->c = c;
	this->n = n;
	this->a = new Subject[10];
	this->a = a;
}
Phieu::Phieu(const Phieu& phieu) {
	this->s = phieu.s;
	this->c = phieu.c;
	this->n = phieu.n;
	this->a = new Subject[10];
	this->a = phieu.a;
}
Phieu& Phieu::operator=(const Phieu& phieu) {
	this->s = phieu.s;
	this->c = phieu.c;
	this->n = phieu.n;
	this->a = new Subject[10];
	this->a = phieu.a;
	return *this;
}
Phieu::~Phieu() {
	delete[]a;
	a = NULL;
}
void  Phieu::input() {
	cout << "NHAP PHIEU BANG DIEM: " << endl;
	cout << "Nhap thong tin sinh vien: ";
	s.input();
	cout << endl<< "Nhap lop: ";
	c.input();
	cout << endl << "Nhap so luong mon: ";
	cin >> this->n;
	cout << endl << "Nhap mon va diem mon: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "Mon 0" << i+1 << ": " << endl;
		cout << "Nhap mon hoc - so tin chi - diem: " << endl;
		a[i].input();
	}
}
void Phieu::output() {
	int count = 0 , sum = 0;
	cout << "PHIEU BAN DIEM: " << endl;
	cout << "Ho ten SV: " << s.getFistName() << " " << s.getLastName() << endl;
	cout << "Lop: ";
	c.output();
	cout << endl;
	cout << setw(8) << left << "STT";
	cout << setw(15) << left << "TenMon";
	cout << setw(12) << left << "TinChi";
    cout << setw(6) << right << "Diem" << endl;
	for (int i = 0; i < n; i++) {
		cout << setw(8) << left << i + 1;
		cout << setw(15) << left << a[i].getSubjectName();
		cout << setw(12) << left << a[i].getCredit();
		cout << setw(6) << right << a[i].getMark();
		cout << endl;
		sum += a[i].getMark();
		count++;
	}
	cout << setw(32) << left << "DTB: " << right << sum / count;
}

