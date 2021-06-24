#pragma once
#include <iostream>
#include "Bill.h"
using namespace std;

class WaterBill:public Bill
{
private:
	int muc;
	double sum;
public:
	WaterBill();
	WaterBill(double csm, double csc, double mct, Customers cus, Date date);
	void input();
	void output();
	void xuatFile();
	friend istream& operator>>(istream& is, WaterBill& water);
	friend ostream& operator<<(ostream& os, WaterBill& water);
	double mucTieuThu(int i);
	void dinhMucTieuThu();
	void donGia();
	void thanhTien();
	double congTien();
	double tienThueGTGT();
	double tienThueMoiTruong();
	double thanhToan();
	string getTenHoaDon() {
		return "nuoc";
	}

};

