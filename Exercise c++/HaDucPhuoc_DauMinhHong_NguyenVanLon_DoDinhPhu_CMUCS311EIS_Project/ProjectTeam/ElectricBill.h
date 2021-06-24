#pragma once
#include <iostream>
#include "Bill.h"
using namespace std;
class ElectricBill:public Bill
{
private:
	double hesonhan;
public:
	ElectricBill();
	ElectricBill(double hsn, double csm, double csc, double mct, Customers cus, Date date );
	void input();
	void output();
	void xuatFile();
	friend istream& operator>>(istream& is, ElectricBill p);
	friend ostream& operator<<(ostream& os, ElectricBill p);
	void dinhMucTieuThu();
	void donGia();
	void thanhTien();
	double congTien();
	double tienThueGTGT();
	double thanhToan();
	double getHesonhan()
	{
		return hesonhan;
	}
	void setHesonhan(int hsn)
	{
		if (hsn <= 0)
			hesonhan = 1;
		else
			hesonhan = hsn;
	}
	string getTenHoaDon() {
		return "dien";
	}
};

