// Algorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BaiToan2.h"
#include "time.h"
#include "stdlib.h"
using namespace std;
//Cach do thoi gian chay cua moi ham
void sinhmangRandom(int*& a, int n) {
	a = new int[n];
	for (int i = 0; i < n; i++) {
		int x = rand() % 1001;
		if (x % 3 == 0)
			x = -2 * x;
		a[i] = x;
	}
}
int main()
{
	BaiToan2 b21;
	//int a[13] = { 2,7,-10,4,6,-5,4,2,-6,7,-8,1,2 };
	int* a, n = 200000000;
	sinhmangRandom(a, n);
	
	//int n = 13;
	//b21.in(a, n);
	long t1, t2;
	//t1 = clock();// do thoi gian dau
	//b21.sol1(a, n);
	//t2 = clock();// do thoi gian cuoi
	//cout << "\n Thoi gian thucc hien thuat toan theo sol1: " << (t2 - t1);
	//BaiToan2 b22;
	//t1 = clock();// do thoi gian dau
	//b22.sol2(a, n);
	//t2 = clock();// do thoi gian cuoi
	//cout << "\n Thoi gian thucc hien thuat toan theo sol2: " << (t2 - t1);
	BaiToan2 b23;
	t1 = clock();// do thoi gian dau
	b23.sol3(a, n);
	t2 = clock();// do thoi gian cuoi
	cout << "\n Thoi gian thucc hien thuat toan theo sol3: " << (t2 - t1);
	
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
