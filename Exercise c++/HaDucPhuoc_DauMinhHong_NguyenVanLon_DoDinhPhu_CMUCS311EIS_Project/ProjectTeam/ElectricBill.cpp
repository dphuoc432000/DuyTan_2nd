#include "ElectricBill.h"
#include<iostream>
using namespace std;
ElectricBill::ElectricBill()
{
	this->hesonhan = 1;
	this->chiSoCu = 0;
	this->chiSoMoi = 0;
	this->maCongTo = 0;
}
ElectricBill::ElectricBill(double hsn, double csm, double csc, double mct, Customers cus, Date date) :Bill(csm, csc, mct, cus,date)
{
	this->hesonhan = hsn;
	this->chiSoCu = csc;
	this->chiSoMoi = csm;
	this->maCongTo = mct;
	this->date = date;
	this->customers = cus;
}
void ElectricBill::input()
{
	cout << "=========================================" << endl;
	cout << "NHAP THONG TIN HOA DON DIEN: " << endl;
	Bill::input();
	cout << endl;
	/*cout << "nhap he so nhan: ";
	cin >> hesonhan;*/
}
void ElectricBill::output()
{
	cout << "HOA DON DIEN: " << endl;
	customers.output();
	cout << "- Ma cong to: ";
	cout << this->maCongTo << endl;
	cout << "- Chi so moi: ";
	cout << this->chiSoMoi << "\t\t";
	cout << "- Chi so cu: ";
	cout << this->chiSoCu << endl;
	cout << endl;
	cout << "- Tong tieu thu: " << tongTieuThu() << endl;
	cout << "- Dinh muc tieu thu: "<< endl;
	dinhMucTieuThu();
	cout << "- Don gia: " << endl;
	donGia();
	cout << endl << "- Thanh tien: " << endl;
	thanhTien();
	cout << endl << "- Cong tien: " << congTien() << endl;
	cout << "- Thue GTGT: " << tienThueGTGT() << endl;
	cout << "- Ngay in: ";
	date.output();
	

}
void ElectricBill::xuatFile() {
	ofstream MyRealFile("Write.txt");
	MyRealFile << "HOA DON NUOC: " << endl;
	MyRealFile << "Ten khach hang: " << getCustomers().getFistName() << " " << getCustomers().getLastName() << endl;
	MyRealFile << "Dia chi: " << getCustomers().getAddress().getNumber() << " - " << getCustomers().getAddress().getStreet() << " - " << getCustomers().getAddress().getDistrict() << " - " << getCustomers().getAddress().getCity() << endl;
	MyRealFile << "Ma khach hang: " << getCustomers().getMaKH() << endl;
	MyRealFile << "Ma cong to: " << getMacongto() << endl;
	MyRealFile << "Chi so moi: " << getChisomoi() << endl;
	MyRealFile << "Chi so cu: " << getChisocu() << endl;
	MyRealFile << "Muc tieu thu: " << tongTieuThu() << endl;
	MyRealFile << "Cong tien: " << congTien() << endl;
	MyRealFile << "Thue GTGT: " << tienThueGTGT() << endl;
	MyRealFile << "Thanh toan: " << thanhToan();
	MyRealFile.close();
}
istream& operator>>(istream& is, ElectricBill p)
{
	p.input();
	return is;
}
ostream& operator<<(ostream& os, ElectricBill p)
{
	p.output();
	return os;
}
void ElectricBill::dinhMucTieuThu()
{
	double n = tongTieuThu();
	double tong = 0;
	if (n > 400)
	{
		cout << 50 << endl;
		cout << 50 << endl;
		cout << 100 << endl;
		cout << 100 << endl;
		cout << 100 << endl;
		tong = n - 400;
		cout << tong << endl;
	}
	else
		if (n <= 400 && n > 300)
		{
			cout << 50 << endl;
			cout << 50 << endl;
			cout << 100 << endl;
			cout << 100 << endl;
			tong = n - 300;
			cout << tong << endl;
		}
		else
			if (n <= 300 && n > 200)
			{

				cout << 50 << endl;
				cout << 50 << endl;
				cout << 100 << endl;
				tong = n - 200;
				cout << tong << endl;
			}
			else
				if (n <= 200 && n > 100)
				{
					cout << 50 << endl;
					cout << 50 << endl;
					tong = n - 100;
					cout << tong << endl;
				}
				else
					if (n <= 100 && n > 50)
					{
						cout << 50 << endl;
						tong = n - 50;
						cout << tong << endl;
					}
					else
					{
						cout << n << endl;
					}

}
double tam = 0;
void ElectricBill::donGia()
{
	double n = tongTieuThu();
	double tong = 0;
	if (n > 400)
	{
		cout << 1549 << endl;
		cout << 1600 << endl;
		cout << 1858 << endl;
		cout << 2340 << endl;
		cout << 2615 << endl;
		tong = n - 400;
		cout << 2701 << endl;
	}
	else
		if (n <= 400 && n > 300)
		{
			cout << 1549 << endl;
			cout << 1600 << endl;
			cout << 1858 << endl;
			cout << 2340 << endl;
			tong = n - 300;
			cout << 2615 << endl;
		}
		else
			if (n <= 300 && n > 200)
			{

				cout << 1549 << endl;
				cout << 1600 << endl;
				cout << 1858 << endl;
				tong = n - 200;
				cout << 2340 << endl;
			}
			else
				if (n <= 200 && n > 100)
				{
					cout << 1549 << endl;
					cout << 1600 << endl;
					tong = n - 100;
					cout << 1858 << endl;
				}
				else
					if (n <= 100 && n > 50)
					{
						cout << 1549 << endl;
						tong = n - 50;
						cout << 1600 << endl;
					}
					else
					{
						cout << 1549 << endl;
					}
}
void ElectricBill::thanhTien()
{
	double n = tongTieuThu();
	double tong = 0;
	double m1 = 0, m2 = 0, m3 = 0, m4 = 0, m5 = 0, m6 = 0;
	if (n > 400)
	{
		m1 = 1549 * 50;
		cout << m1 << endl;

		m2 = 1600 * 100;
		cout << 1600 * 50 << endl;

		m3 = 1858 * 100;
		cout << 1858 * 100 << endl;

		m4 = 2340 * 100;
		cout << 2340 * 100 << endl;

		m5 = 2615 * 100;
		cout << 2615 * 100 << endl;

		m6 = 2701 * tong;
		tong = n - 400;
		cout << m6 << endl;
	}
	else
		if (n <= 400 && n > 300)
		{
			m1 = 1549 * 50;
			cout << 1549 * 50 << endl;

			m2 = 1600 * 100;
			cout << 1600 * 50 << endl;

			m3 = 1858 * 100;
			cout << 1858 * 100 << endl;

			m4 = 2340 * 100;
			cout << 2340 * 100 << endl;

			tong = n - 300;
			m5 = 2615 * tong;
			cout << m5 << endl;
		}
		else
			if (n <= 300 && n > 200)
			{
				m1 = 1549 * 50;
				cout << 1549 * 50 << endl;

				m2 = 1600 * 100;
				cout << 1600 * 50 << endl;

				m3 = 1858 * 100;
				cout << 1858 * 100 << endl;

				tong = n - 200;
				m4 = 2340 * tong;
				cout << m4 << endl;
			}
			else
				if (n <= 200 && n > 100)
				{
					m1 = 1549 * 50;
					cout << 1549 * 50 << endl;

					m2 = 1600 * 100;
					cout << 1600 * 50 << endl;

					tong = n - 100;
					m3 = 1858 * tong;
					cout << m3 << endl;
				}
				else
					if (n <= 100 && n > 50)
					{
						m1 = 1549 * 50;
						cout << 1549 * 50 << endl;

						tong = n - 50;
						m2 = 1600 * tong;
						cout << m2 << endl;
					}
					else
					{
						if (n <= 50)
						{
							m1 = 1549 * n;
							cout << m1 << endl;
						}
					}
	tam = m1 + m2 + m3 + m4 + m5 + m6;
}
double ElectricBill::congTien() {
	cout << "Cong tien: ";
	return tam;
}
double ElectricBill::tienThueGTGT()
{
	return congTien() * 0.05;
}
double ElectricBill::thanhToan()
{
	return congTien() + tienThueGTGT();
}
