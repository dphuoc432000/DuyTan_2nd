#pragma once
#include <vector>
#include <iostream>
#include "Bill.h"
#include "ElectricBill.h"
#include "WaterBill.h"
#include <string>
#include <algorithm>
//#include <fstream>
using namespace std;
class ArrayOfBill
{
public:
	vector<Bill*> quanLyBill;
public:
	ArrayOfBill();
	ArrayOfBill(int capacity);
	void add();
	void xuat();
	void menu();
	void remove(int x);
	void removeWithMaKH();
	void remove();
	void findMaKH();
	void findName();
	void findAddress();
	void find();
	void sortMaKHAZ();
	void sortMaKHZA();
	void sortMaKH();
	void sortMoneyIncrease();
	void sortMoneyDecrease();
	void sortTien();
	void sortNameAZ();
	void sortNameZA();
	void sortName();
	void sort();
	void lietKeDanhSachNuoc();
	void lietkeDanhSachDien();
	void lietKeDanhSach();
};

