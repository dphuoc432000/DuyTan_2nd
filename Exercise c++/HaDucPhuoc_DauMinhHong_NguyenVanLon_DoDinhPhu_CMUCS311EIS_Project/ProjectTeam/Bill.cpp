#include "Customers.h"
#include <iostream>
#include <string>
#include"Bill.h"
#include <iostream>
#include <iomanip>
using namespace std;

Bill::Bill(double csm, double csc, double mct, Customers cus, Date date)
{
	this->chiSoCu = csc;
	this->chiSoMoi = csm;
	this->maCongTo = mct;
	this->customers = cus;
	this->date = date;
}
Bill::Bill()
{
	this->chiSoCu = 0;
	this->chiSoMoi = 0;
	this->maCongTo = 0;
}
void Bill::input()
{
	cout << "* Nhap thong tin khach hang: " << endl;
	customers.input();
	cout << endl << "* Nhap thong tin hoa don: " << endl;
	cout << "- Nhap chi so cu: ";
	cin >> this->chiSoCu;
	this->setChisocu(this->chiSoCu);
	cout << endl << "- Nhap chi so moi: ";
	cin >> this->chiSoMoi;
	this->setChisomoi(this->chiSoMoi);
	cout << endl << "- Nhap ma cong to: ";
	cin >> this->maCongTo;
	cout << endl << "- Nhap ngay in hoa don: " << endl;
	date.input();
}
void Bill::output()
{
	/*customers.output();	
	cout << "- Ma cong to: ";
	cout << this->maCongTo << endl;
	cout << "- Chi so moi: ";
	cout << this->chiSoMoi <<  "\t\t";
	cout << "- Chi so cu: ";
	cout << this->chiSoCu << endl;
	cout << "- Ngay in: ";
	date.output();
	cout << endl;
	cout << "- Tong tieu thu: " << tongTieuThu() << endl;
	cout << "- Dinh muc tieu thu: ";
	dinhMucTieuThu();
	cout << "- Don gia: ";
	donGia();
	cout << endl << "Thanh tien: ";
	thanhTien();
	cout << endl << "Cong tien: " << congTien() << endl;
	cout << "Thue GTGT: " << tienThueGTGT() << endl;*/
		
	//ofstream MyRealFile("Write.txt");
}
double Bill::getChisomoi() {
	return this->chiSoMoi;
}
double Bill::getChisocu() {
	return this->chiSoCu;
}
double Bill::getMacongto() {
	return this->maCongTo;
}
Customers Bill::getCustomers() {
	return this->customers;
}
Date Bill::getDate() {
	return this->date;
}
void Bill::setChisomoi(double csm) {
	if (csm < this->chiSoCu) {
		do {
			cout << "Nhap sai. Chi so moi da nho hon chi so cu. Moi ban nhap lai: ";
			cin >> this->chiSoMoi;
		} while (this->chiSoMoi < this->chiSoCu);
	}
	else
		this->chiSoMoi = csm;
}
void Bill::setChisocu(double csc) {
	if (csc < 0) {
		do {
			cout << "Nhap sai. Moi ban nhap lai:  ";
			cin >> this->chiSoCu;
		} while (this->chiSoCu < 0);
	}
	else
		this->chiSoCu = csc;
}
void Bill::setMacongto(double mct) {
	this->maCongTo = mct;
}
void Bill::setCustomers(Customers cus) {
	this->customers = cus;
}
void Bill::setDate(Date date) {
	this->date = date;
}
double Bill::tongTieuThu() {
	return this->chiSoMoi - this->chiSoCu;
}
void Bill::dinhMucTieuThu() {
}
void Bill::donGia() {};
void Bill::thanhTien() {};
double Bill::congTien() {
	return 0;
}
double Bill::tienThueGTGT() {
	return 0;
}
double Bill::thanhToan() {
	return 0;
}
//void Bill::inChu(){};
