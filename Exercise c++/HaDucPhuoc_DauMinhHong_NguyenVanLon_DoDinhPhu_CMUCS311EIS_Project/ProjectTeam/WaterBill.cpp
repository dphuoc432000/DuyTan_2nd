#include "Bill.h"
#include "WaterBill.h"
#include <iostream>
using namespace std;
WaterBill::WaterBill():Bill() {
	this->chiSoCu = 0;
	this->chiSoMoi = 0;
	this->maCongTo = 0;
	this->muc = 0;
	sum = 0;
}
WaterBill::WaterBill(double csm, double csc, double mct, Customers cus, Date date) :Bill(csm, csc, mct, cus, date) {
	this->chiSoCu = csc;
	this->chiSoMoi = csm;
	this->maCongTo = mct;
	this->customers = cus;
	this->date = date;
}
void WaterBill::input() {
	cout << "=========================================" << endl;
	cout << "NHAP THONG TIN HOA DON NUOC " << endl;
	Bill::input();
}
void WaterBill::output() {
	cout <<  "HOA DON NUOC: " << endl;
	customers.output();
	cout << "- Ma cong to: ";
	cout << this->maCongTo << endl;
	cout << "- Chi so moi: ";
	cout << this->chiSoMoi << "\t\t";
	cout << "- Chi so cu: ";
	cout << this->chiSoCu << endl;
	cout << "- Ngay in: ";
	
	cout << endl;
	cout << "- Tong tieu thu: " << tongTieuThu() << endl;
	cout << "- Dinh muc tieu thu: ";
	dinhMucTieuThu();
	cout << "- Don gia: ";
	donGia();
	cout << endl << "Thanh tien: ";
	thanhTien();
	cout << endl << "Cong tien: " << congTien() << endl;
	cout << "Thue GTGT: " << tienThueGTGT() << endl;
	cout << "Thue moi truong: " << tienThueMoiTruong() << endl;
	date.output();
	
}
void WaterBill::xuatFile() {
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
	MyRealFile << "Thue moi truong: " << tienThueMoiTruong() << endl;
	MyRealFile << "Thanh toan: " << thanhToan();
	MyRealFile.close();
}
istream& operator>>(istream& is, WaterBill& water) {
	water.input();
	return is;
}
ostream& operator<<(ostream& os, WaterBill& water) {
	water.output();
	return os;
}
double  WaterBill::mucTieuThu(int i) {
	if (i == 0)
		return 4500;
	else if (i == 1)
		return 5600;
	else if (i == 2)
		return 6700;
	else
		return 9200;
}
void WaterBill::dinhMucTieuThu() {
	double tongtieuthu = Bill::tongTieuThu();

	muc = 0;
	if (tongtieuthu > 30) {
		for (int i = 0; i < 3; i++) {
			cout << "10" << endl;
			tongtieuthu = tongtieuthu - 10;
			muc++; 
		}
		if (tongtieuthu > 0) {
			cout << tongtieuthu << endl;
			muc++;
		}	
	}
	else {
		while (tongtieuthu > 10) {
			cout << "10" << endl;
			tongtieuthu = tongtieuthu - 10;
			muc++;
		}
		if (tongtieuthu > 0) {
			cout << tongtieuthu << endl;
			muc++;
		}
			
	}
}
void WaterBill::donGia() {
	int i = 0;
	while (i < muc) {
		cout << mucTieuThu(i) <<endl;
		i++;
	}
}
void WaterBill::thanhTien() {
	 int i = 0;
	 double tongtieuthu = Bill::tongTieuThu();
	 if (tongtieuthu > 30) {
		while(i < 3)
		{
			cout << 10 * mucTieuThu(i) << endl;
			tongtieuthu -= 10;
			sum = sum + 10 * mucTieuThu(i);
			i++;
		}
		if (tongtieuthu > 0) {
			cout << tongtieuthu * 9200 << endl;
			sum = sum + tongtieuthu * 9200;
		}
	 }
	 else {
		 while (tongtieuthu > 10) {
			 cout << 10 * mucTieuThu(i) << endl;
			 tongtieuthu -= 10;
			 sum = sum + 10 * mucTieuThu(i);
			 i++;
		 }
		 if (tongtieuthu > 0) {
			 cout << tongtieuthu * 9200 << endl;
			 sum = sum + tongtieuthu * 9200;
		 }
	 }
 }
double WaterBill::congTien() {
	return sum;
}
double WaterBill::tienThueGTGT() {
	return sum * 0.05;
}
double WaterBill::tienThueMoiTruong() {
	return sum * 0.1;
}
double WaterBill::thanhToan() {
	return congTien() + tienThueGTGT() + tienThueMoiTruong();
}

 
