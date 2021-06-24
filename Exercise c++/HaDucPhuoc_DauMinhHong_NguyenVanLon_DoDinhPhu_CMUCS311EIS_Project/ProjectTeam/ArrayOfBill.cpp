#include "ArrayOfBill.h"
#include <vector>
#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
ArrayOfBill::ArrayOfBill() {
	quanLyBill.resize(0);
}
ArrayOfBill::ArrayOfBill(int capacity) {
	quanLyBill.resize(capacity);
}
/*ArrayOfBill::~ArrayOfBill() {
	delete[]quanLyBill;
	quanLyBill = NULL;
}*/
void ArrayOfBill::add() {
	Bill* bill;
	int choose;
	cout << "=========================================" << endl;
	cout << "THEM HOA DON KHACH HANG: " << endl;
	do {
		cout << "1.Hoa don dien: " << endl;
		cout << "2.Hoa don nuoc: " << endl;
		cout << "0.Thoat. "<< endl;
		cout << "Moi ban nhap: ";
		cin >> choose;
		cout << endl;
		switch (choose)
		{
		case 1: {
			bill = new ElectricBill();
			bill->input();
			quanLyBill.push_back(bill);
			break;
		}
		case 2: {
			bill = new WaterBill();
			bill->input();
			quanLyBill.push_back(bill);
			break;
		}
		case 0: {
			break;
		}
		}
	} while (choose != 0);
}
void ArrayOfBill::xuat() {
	cout << "=========================================" << endl;
	cout << "XUAT DANH SACH HOA DON: " << endl;
	for (int i = 0; i < quanLyBill.size(); i++) {
		cout << *quanLyBill[i] << endl;
		quanLyBill[i]->xuatFile();
	}
		
}
void ArrayOfBill::menu() {
	int choose;
	cout << "\t\t\t QUAN LY DANH SACH HOA DON KHACH HANG SU DUNG DIEN NUOC" << endl << endl;	
	do {
		cout << "Menu " << endl;
		cout << "=========================================" << endl;
		cout << "1. Them hoa don: " << endl;
		cout << "2. Xuat danh sach hoa don: " << endl;
		cout << "3. Tim kiem khach hang: " << endl;
		cout << "4. Sap xep danh sach hoa don: " << endl;
		cout << "5. Xoa hoa don: " << endl;
		cout << "6. Liet ke loai loai hoa don: " << endl;
		cout << "0. Thoat." << endl;
		cout << "Moi ban nhap: ";
		cin >> choose;
		cout << endl;
		switch (choose) {
		case 1: {
			add();
			break;
		}
		case 2: {
			xuat();
			break;
		}
		case 3: {
			find();
			break;
		}
		case 4: {
			sort();
			break;
		}
		case 5: {
			remove();
			break;
		}
		case 6: {
			lietKeDanhSach();
			break;
		}
		case 0: {
			break;
		}
		}
	} while (choose != 0 );
}
void ArrayOfBill::findMaKH() {
	cout << endl;
	string maSearch;
	bool xet = false;
	cout << "Nhap ma khach hang: ";
	cin >> maSearch;
	cout << endl;
	for (int i = 0; i < quanLyBill.size(); i++)
		if (quanLyBill[i]->getCustomers().getMaKH().compare(maSearch) == 0){
			cout << *quanLyBill[i];
			xet = true;
			break;
		}
	if (xet == false)
		cout << "Khong tim thay ma khach hang can tim kiem." << endl;
}
void ArrayOfBill::findName() {
	cout << endl;
	string lastname;
	string firstname;
	int choose;
	do {
		cout << "\t\t\t 1. Ten khach hang: " << endl;
		cout << "\t\t\t 2. Ho dem khach hang: " << endl;
		cout << "\t\t\t 3. Ho va ten khach hang: " << endl;
		cout << "\t\t\t 0. Thoat." << endl;
		cout << "\t\t\t Moi ban nhap: ";
		cin >> choose;
		cout << endl;
		switch (choose)
		{
			case 1: {
				bool xacnhan = false;
				cout << "Nhap ten: ";
				cin.ignore();
				getline(cin, lastname);
				cout << endl;
				for (int i = 0; i < quanLyBill.size(); i++) {
					if (quanLyBill[i]->getCustomers().getLastName().compare(lastname) == 0) {
						cout << *quanLyBill[i] << endl;
						xacnhan = true;
					}	
				}
				if (xacnhan == false)
					cout << "Khong tim thay ten can tim kem." << endl;
				break;
			}
			case 2: {
				bool xacnhan = false;
				cout << "Nhap ho dem: ";
				cin.ignore();
				getline(cin, firstname);
				cout << endl;
				for (int i = 0; i < quanLyBill.size(); i++) {
					if (quanLyBill[i]->getCustomers().getFistName().compare(firstname) == 0) {
						cout << *quanLyBill[i] << endl;
						xacnhan = true;
					}
				}
				if (xacnhan == false)
					cout << "Khong tim thay ho khach hang can tim kem." << endl;
				break;
			}
			case 3: {
				bool xacnhan = false;
				cout << "Nhap ten: ";
				cin.ignore();
				getline(cin, lastname);
				cout << endl << "Nhap ho dem: ";
				getline(cin, firstname);
				cout << endl;
				for (int i = 0; i < quanLyBill.size(); i++) {
					if (quanLyBill[i]->getCustomers().getLastName().compare(lastname) == 0 && quanLyBill[i]->getCustomers().getFistName().compare(firstname) == 0) {
						cout << *quanLyBill[i] << endl;
						xacnhan = true;
					}
				}
				if (xacnhan == false)
					cout << "Khong tim thay ten can tim kem." << endl;
				break;
			}
		}
	} while (choose != 0);
}
void ArrayOfBill::findAddress() {
	cout << endl;
	string street;
	string district;
	string city;

	int choose;
	do {
		cout << "\t\t\t 1. Duong: " << endl;
		cout << "\t\t\t 2. Huyen: " << endl;
		cout << "\t\t\t 3. Thanh pho: " << endl;
		cout << "\t\t\t 0. Thoat." << endl;
		cout << "\t\t\t Moi ban nhap: ";
		cin >> choose;
		cout << endl;
		switch (choose)
		{
		case 1: {
			bool xacnhan = false;
			cout << "Nhap ten duong: ";
			cin.ignore();
			getline(cin, street);
			cout << endl;
			for (int i = 0; i < quanLyBill.size(); i++) {
				if (quanLyBill[i]->getCustomers().getAddress().getStreet().compare(street) == 0) {
					cout << *quanLyBill[i] << endl;
					xacnhan = true;
				}
			}
			if (xacnhan == false)
				cout << "Khong tim thay ten duong can tim kem." << endl;
			break;
		}
		case 2: {
			bool xacnhan = false;
			cout << "Nhap ten huyen: ";
			cin.ignore();
			getline(cin, district);
			cout << endl;
			for (int i = 0; i < quanLyBill.size(); i++) {
				if (quanLyBill[i]->getCustomers().getAddress().getDistrict().compare(district) == 0) {
					cout << *quanLyBill[i] << endl;
					xacnhan = true;
				}
			}
			if (xacnhan == false)
				cout << "Khong tim thay ten huyen can tim kem." << endl;
			break;
		}
		case 3: {
			bool xacnhan = false;
			cout << "Nhap ten thanh pho: ";
			cin.ignore();
			getline(cin, city);
			cout << endl;
			for (int i = 0; i < quanLyBill.size(); i++) {
				if (quanLyBill[i]->getCustomers().getAddress().getCity().compare(city) == 0 ) {
					cout << *quanLyBill[i] << endl;
					xacnhan = true;
				}
			}
			if (xacnhan == false)
				cout << "Khong tim thay ten thanh pho can tim kem." << endl;
			break;
		}
		}
	} while (choose != 0);
}
void ArrayOfBill::find() {
	int choose;
	cout << "=========================================" << endl;
	cout << "TIM KIEM: " << endl;
	do {
		cout << "\t\t 1. Ma khach hang: " << endl;
		cout << "\t\t 2. Ten khach hang: " << endl;
		cout << "\t\t 3. Dia chi khach hang: " << endl;
		cout << "\t\t 0. Thoat." << endl;
		cout << "\t\t Moi ban nhap: ";
		cin >> choose;
		cout << endl;
		switch (choose)
		{
		case 1: {
			cout << "\t\t\t + Tim kiem ma khach hang: " << endl;
			findMaKH();
			break;
		}
		case 2: {
			cout << "\t\t\t + Tim kiem ten khach hang: " << endl;
			findName();
			break;
		}
		case 3: {
			cout << "\t\t\t + Tim kiem dia chi khach hang: " << endl;
			findAddress();
			break;
		}
		case 0: {
			break;
		}
		}
	} while (choose != 0);
}
void ArrayOfBill::sortMaKHAZ()
{
	for (int i = 0; i < quanLyBill.size(); i++)
	{
		for (int j = i + 1; j < quanLyBill.size(); j++)
		{
			if (quanLyBill[j]->getCustomers().getMaKH().compare(quanLyBill[i]->getCustomers().getMaKH()) < 0);
			Bill tep = *quanLyBill[i];
			*quanLyBill[i] = *quanLyBill[j];
			*quanLyBill[j] = tep;
		}
	}
	xuat();
}
void ArrayOfBill::sortMaKHZA()
{
	for (int i = 0; i < quanLyBill.size(); i++)
	{
		for (int j = i + 1; j < quanLyBill.size(); j++)
		{
			if (quanLyBill[j]->getCustomers().getMaKH().compare(quanLyBill[i]->getCustomers().getMaKH()) > 0);
			Bill tep = *quanLyBill[i];
			*quanLyBill[i] = *quanLyBill[j];
			*quanLyBill[j] = tep;
		}
	}
	xuat();
}
void ArrayOfBill::sortMaKH() {
	int choose;
	do {
		cout << "\t\t\t 1. A -> Z " << endl;
		cout << "\t\t\t 2. Z -> A: " << endl;
		cout << "\t\t\t 0. Thoat." << endl;
		cout << "\t\t\t Moi ban nhap: ";
		cin >> choose;
		cout << endl;
		switch (choose) {
		case 1: {
			sortMaKHAZ();
			break;
		}
		case 2: {
			sortMaKHZA();
			break;
		}
		case 0: {
			break;
		}
		}
	} while (choose != 0);
}
//sap xep tien tang dan
void ArrayOfBill::sortMoneyIncrease() {
	Bill* temp;
	for (int i = 0; i < quanLyBill.size() - 1; i++)
		for (int j = i+1; j < quanLyBill.size(); j++)
			if (quanLyBill[i]->thanhToan() < quanLyBill[j]->thanhToan()) {
				temp = quanLyBill[i];
				quanLyBill[i] = quanLyBill[j];
				quanLyBill[j] = temp;
			}
	xuat();
}
//sap xep tien giam dan
void ArrayOfBill::sortMoneyDecrease() {
	Bill* temp;
	for (int i = 0; i < quanLyBill.size() - 1; i++)
		for (int j = i+1; j < quanLyBill.size(); j++)
			if (quanLyBill[i]->thanhToan() > quanLyBill[j]->thanhToan()) {
				temp = quanLyBill[i];
				quanLyBill[i] = quanLyBill[j];
				quanLyBill[j] = temp;
			}
	xuat();
}
void ArrayOfBill::sortTien() {
	int choose;
	do {
		cout << "\t\t\t 1. Tang dan: " << endl;
		cout << "\t\t\t 2. Giam dan: " << endl;
		cout << "\t\t\t 0. Thoat." << endl;
		cout << "\t\t\t Moi ban nhap: ";
		cin >> choose;
		cout << endl;
		switch (choose) {
		case 1: {
			sortMoneyIncrease();
			break;
		}
		case 2: {
			sortMoneyDecrease();
			break;
		}
		case 0: {
			break;
		}
		}
	} while (choose != 0);
}
//sap xep theo ten a => z
bool compareAZ(string a, string b) {
	return a > b;
}
void ArrayOfBill::sortNameAZ() {
	Bill* temp;

	for (int i = 0; i < quanLyBill.size() - 1; i++) {
		for (int j = 1; j < quanLyBill.size(); j++) {
			if (compareAZ(quanLyBill[i]->getCustomers().getLastName(), quanLyBill[j]->getCustomers().getLastName())) {
				temp = quanLyBill[i];
				quanLyBill[i] = quanLyBill[j];
				quanLyBill[j] = temp;
			}
			else
				if (compareAZ(quanLyBill[i]->getCustomers().getFistName(), quanLyBill[j]->getCustomers().getFistName())) {
					temp = quanLyBill[i];
					quanLyBill[i] = quanLyBill[j];
					quanLyBill[j] = temp;
				}
		}
	}
	xuat();
}
//sap xep ten z => a

bool compareZA(string a, string b) {
	return a < b;
}
void ArrayOfBill::sortNameZA() {
	Bill* temp;
	for (int i = 0; i < quanLyBill.size() - 1; i++)
		for (int j = 1; j < quanLyBill.size(); j++) {
			if (compareZA(quanLyBill[i]->getCustomers().getLastName(), quanLyBill[j]->getCustomers().getLastName())) {
				temp = quanLyBill[i];
				quanLyBill[i] = quanLyBill[j];
				quanLyBill[j] = temp;
			}
			else
				if (compareZA(quanLyBill[i]->getCustomers().getFistName(), quanLyBill[j]->getCustomers().getFistName())) {
					temp = quanLyBill[i];
					quanLyBill[i] = quanLyBill[j];
					quanLyBill[j] = temp;
				}
		}
	xuat();
}

void ArrayOfBill::sortName() {
	int choose;
	do {
		cout << "\t\t\t 1. A -> Z " << endl;
		cout << "\t\t\t 2. Z -> A: " << endl;
		cout << "\t\t\t 0. Thoat." << endl;
		cout << "\t\t\t Moi ban nhap: ";
		cin >> choose;
		cout << endl;
		switch (choose) {
		case 1: {
			sortNameAZ();
			break;
		}
		case 2: {
			sortNameZA();
			break;
		}
		case 0: {
			break;
		}
		}
	} while (choose != 0);
}
void ArrayOfBill::sort() {
	int choose;
	cout << "=========================================" << endl;
	cout << "SAP XEP: " << endl;
	do {
		cout << "\t\t 1. Ma khach hang: " << endl;
		cout << "\t\t 2. Ten khach hang: " << endl;
		cout << "\t\t 3. Tien: " << endl;
		cout << "\t\t 0. Thoat." << endl;
		cout << "\t\t Moi ban nhap: ";
		cin >> choose;
		cout << endl;
		switch (choose)
		{
		case 1: {
			cout << "\t\t\t + Ma khach hang: " << endl;
			sortMaKH();
			break;
		}
		case 2: {
			cout << "\t\t\t +Ten khach hang : " << endl;
			sortName();
			break;
		}
		case 3: {
			cout << "\t\t\t +Tien : " << endl;
			sortTien();
			break;
		}
		case 0: {
			break;
		}
		}
	} while (choose != 0);
}

void ArrayOfBill::remove(int x) {
	for (int i = x; i < quanLyBill.size() - 1; i++) {
		quanLyBill[i] = quanLyBill[i + 1];
	}
	int size1=quanLyBill.size();
	quanLyBill.resize(size1-1);
}
void ArrayOfBill::removeWithMaKH() {
	
	string id;
	cout << "\T\T + Nhap ma khach hang: ";
	cin.ignore();
	getline(cin, id);
	bool xacnhan = false;
	for (int i = 0; i < quanLyBill.size(); i++) {
		if (quanLyBill[i]->getCustomers().getMaKH().compare(id) == 0) {
			xacnhan = true;
			remove(i);
			break;
		}
	}
	if (xacnhan == true) {
		xuat();
	}
	if (xacnhan == false) {
		cout << "Khong tim thay ma khach hang de xoa.";
	}
}
void ArrayOfBill::remove() {
	int choose;
	cout << "=========================================" << endl;
	cout << "XOA HOA DON: " << endl;
	do {
		cout << "\t\t 1. Ma khach hang: " << endl;
		cout << "\t\t 0. Thoat." << endl;
		cout << "\t\t Moi ban nhap: ";
		cin >> choose;
		cout << endl;
		switch (choose)
		{
		case 1: {
			cout << "\t\t\t + Ma khach hang: " << endl;
			removeWithMaKH();
			break;
		}
		case 0: {
			break;
		}
		}
	} while (choose != 0);
}
void ArrayOfBill::lietKeDanhSachNuoc() {
	for (int i = 0; i < quanLyBill.size(); i++) {
		if (quanLyBill[i]->getTenHoaDon() .compare( "nuoc") == 0)
			cout << *quanLyBill[i];
	}
}
void ArrayOfBill::lietkeDanhSachDien() {
	for (int i = 0; i < quanLyBill.size(); i++) {
		if (quanLyBill[i]->getTenHoaDon().compare("dien") == 0)
			cout << *quanLyBill[i];
	}
}
void ArrayOfBill::lietKeDanhSach() {
	int choose;
	cout << "=========================================" << endl;
	cout << "LIET KE HOA DON: " << endl;
	do {
		cout << "\t\t 1. Dien: " << endl;
		cout << "\t\t 2. Nuoc: " << endl;
		cout << "\t\t 0. Thoat." << endl;
		cout << "\t\t Moi ban nhap: ";
		cin >> choose;
		cout << endl;
		switch (choose)
		{
		case 1: {
			lietkeDanhSachDien();
			break;
		}
		case 2: {
			lietKeDanhSachNuoc();
			break;
		}
		case 0: {
			break;
		}
		}
	} while (choose != 0);
}

