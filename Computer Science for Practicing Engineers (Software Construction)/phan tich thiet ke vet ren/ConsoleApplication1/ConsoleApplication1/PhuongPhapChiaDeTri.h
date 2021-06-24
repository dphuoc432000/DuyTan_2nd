#pragma once
#include <iostream>
using namespace std;
class PhuongPhapChiaDeTri
{
public:
	void sinh(int*& a, int& n) {
		/*out << "\n so phan tu mang can sinh: ";
		cout << n;*/
		a = new int[n];
		for (int i = 0; i < n; i++)
			a[i] = rand() % 501;
	}
	void in(int*& a, int& n) {
		cout << "\n noi dung mang: \n";
		for (int i = 0; i < n; i++)
			cout << a[i] << " ";
	}
	void Merge(int *&a, int L, int R) {
		int m = (L + R) / 2;
		int i = L, j = m + 1, v = 0;
		int* kq = new int[R - L + 1];//mang ket qua tam chua day tang dan
		while (i <= m && j <= R) {
			if (a[i] <= a[j]) {
				kq[v] = a[i];
				i++;
				v++;
			}
			else {
				kq[v] = a[j];
				v++;
				j++;
			}
		}
		while (i <= m) {
			kq[v] = a[i];
			i++;
			v++;
		}
		while (j <= R) {
			kq[v] = a[j];
			v++;
			j++;
		}
		i = L;
		for (j = 0; j < v; j++)
			a[i++] = kq[j];
		if (kq != NULL)
			delete[]kq;
	}
	void MergeSort(int*& a, int L, int R) {
		if (L < R) {
			int m = (L + R) / 2;
			MergeSort(a, L, m);
			MergeSort(a, m + 1, R);
			Merge(a, L, R);
		}
	}

	void MaxMin(int*& a, int L, int R, int& ma, int& mi) {
		if (L > R);
		if (L == R)
			ma = mi = a[L];
		else {
			int m = (L + R) / 2;;
			int max1, min1;
			MaxMin(a, L, m, max1, min1);
			MaxMin(a, m + 1, R, ma, mi);
			if (max1 > ma)
				ma = max1;
			if (min1 < mi)
				mi = min1;
		}
	}
	void MAXMIN(int*& a, int n) {
		int ma, mi;
		ma = mi = 0;
		MaxMin(a, 0, n - 1, ma, mi);
		cout << endl << "Gia tri lon nhat: " << ma << "\t Gia tri nho nhat: " << mi;
	}
	long XMUn(int x, int n) {
		long kq = 1; 
		for (int i = 1; i <= n; i++)
			kq *= x;
		return kq;
	}
	
};

