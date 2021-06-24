#pragma once
#include <iostream>
using namespace std;
class BaiToan2
{
public:
	void in(int* a, int n) {
		cout << "\n Noi dung mang: \n";
		for (int i = 0; i < n; i++)
			cout << a[i] << " ";
		cout << endl;
	}
	void sol1(int* a, int n) {
		int Smax = a[0], dau = 0, cuoi = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				int s = 0;
				for (int k = i; k <= j; k++)
					s = s + a[k];
				if (Smax < s) {
					Smax = s;
					dau = i;
					cuoi = j;
				}
			}
		}
		//cout << Smax << endl;
		//for (int i = dau; i <= cuoi; i++)
		//	cout << a[i] << " ";
	}
	void sol2(int* a, int n) {
		int *SS = new int[n];
		int Smax = a[0], dau = 0, cuoi = 0;
		SS[0] =a[0];
		for (int i = 1; i < n; i++)
			SS[i] = SS[i - 1] + a[i];
		for(int i =0 ; i < n; i++)
			for (int j = i; j < n; j++) {
				int s = 0;
				if (i == 0)
					s = SS[j];
				else
					s = SS[j] - SS[i - 1];
				if (s > Smax) {
					Smax = s;
					dau = i;
					cuoi = j;
				}
			}
		//cout << Smax << endl;
		//for (int i = dau; i <= cuoi; i++)
		//	cout << a[i] << " ";
	}
	void sol3(int* a, int n) {
		int  Smax = a[0], dau = 0, cuoi = 0, s = 0, d = 0; //d lu vi tri doan moi
		for (int i = 0; i < n; i++) {
			s = s + a[i];
			if (s > Smax) {
				Smax = s;
				dau = d;
				cuoi = i;
			}
			if (s < 0) {
				s = 0;
				d = i + 1;
			}
		}
		//cout << "\n Mang lien tiep co tong max = " << Smax;
		//for (int i = dau; i <= cuoi; i++)
		//	cout << a[i];
	}
};

