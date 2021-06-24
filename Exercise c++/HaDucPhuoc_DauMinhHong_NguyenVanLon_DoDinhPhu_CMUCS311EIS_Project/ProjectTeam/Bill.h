
#pragma once
#include"Customers.h"
#include <iostream>
#include "Date.h"
#include <fstream>
using namespace std;
class Bill
{
protected:
	double chiSoMoi, chiSoCu, maCongTo;
	Customers customers;
	Date date;
public:
	Bill();
	Bill(double csm, double csc, double mct, Customers cus, Date date);
	virtual void input();
	virtual void output();
	virtual void xuatFile() {}
	double getChisomoi();
	double getChisocu();
	double getMacongto();
	Customers getCustomers();
	Date getDate();
	void setChisomoi(double csm);
	void setChisocu(double csc);
	void setMacongto(double mct);
	void setCustomers(Customers cus);
	void setDate(Date date);
	friend istream& operator>>(istream& is, Bill& t)
	{
		t.input();
		return is;
	}
	friend	ostream& operator<<(ostream& os, Bill& t)
	{
		t.output();
		return os;
	}
	double tongTieuThu();
	virtual void dinhMucTieuThu();
	virtual void donGia();
	virtual void thanhTien();
	virtual double congTien();
	virtual double tienThueGTGT();
	virtual double thanhToan();
	virtual string getTenHoaDon() {
		return 0;
	}
	//virtual void inChu();
};