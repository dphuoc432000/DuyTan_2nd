// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "time.h"
#include "baiToanRobot.h"
#include "maybay.h"
#include "Sudoku.h"
#include "PhuongPhapChiaDeTri.h"
#include "TernarySearch.h"
using namespace std;
int main()
{
	//baiToanRobot rb;
	/*int d = 4;
	rb.phantich(d);
	baiToanRobot rb2;
	int d2 = 44;
	//rb2.phantich_ycll44_54(d2,0,=);*/
	maybay m;
	m.khoitao();
	m.tim(1, 2);
	m.inkq();
	/*Sudoku s;
	int gird[N][N] = {
		{3,0,6,5,0,8,4,0,0},
		{5,2,0,0,0,0,0,0,0},
		{0,8,7,0,0,0,0,3,1},
		{0,0,3,0,1,0,0,8,0},
		{9,0,0,8,6,3,8,8,5},
		{6,5,0,0,9,0,6,0,0},
		{1,3,0,0,0,0,2,5,0},
		{0,0,0,0,0,0,0,7,4},
		{0,0,5,2,0,6,3,0,0},
	};
	if (s.SolveSudoku(gird) == true)
		s.printGird(gird);
	else
		cout << "No solotion exist.";
	return 0;*/

	/*PhuongPhapChiaDeTri p;
	/*int* a, n;
	p.sinh(a, n);
	p.in(a, n);
	p.MergeSort(a, 0, n - 1);
	cout << "\n day sau khi sap xep: \n";
	p.in(a, n);*/
	//n = 100000
	/*int* a, n= 8;
	long t1, t2;
	p.sinh(a, n);
	//p.in(a, n);
	t1 = clock();
	p.MergeSort(a, 0, n - 1);
	t2 = clock();
	cout << "\n day sau khi sap xep: \n";
	p.in(a, n);
	cout << "thoi gian chay thuat toan: " << t2 - t1;*/

	/*PhuongPhapChiaDeTri p2;
	int* a, n=100000000;
	long t1, t2;
	p2.sinh(a, n); // in(a,n);
	t1 = clock();
	p2.MAXMIN(a, n);
	t2 = clock();
	cout << "\n Thoi gian chay thuat toan: " << t2 - t1;*/

	//TernarySearch t;
}

