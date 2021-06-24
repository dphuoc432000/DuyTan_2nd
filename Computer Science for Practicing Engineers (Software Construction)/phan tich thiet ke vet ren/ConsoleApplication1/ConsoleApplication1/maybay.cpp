#include "maybay.h"
#include <iostream>
using namespace std;

void maybay::khoitao()
{
	/*n = 8; v = new int[n];
	v[0] = 5;
	v[1] = 4;
	v[2] = 2;
	v[3] = 7;
	v[4] = 6;
	v[5] = 2;
	v[6] = 3;
	v[7] = 9;*/
	n = 4; v = new int[n];
	v[0] = 3;
	v[1] = 5;
	v[2] = 1;
	v[3] = 4;
	chon = new int[n];         kq = new int[n];
	for (int j = 0; j < n; j++) chon[j] = kq[j] = 0;
}
void maybay::inkq() {
	cout << "\n Cach thu " << ++dem << ":";
	for (int i = 0; i < n; i++)
		cout << " " << kq[i];
}
void maybay::tim(int i, int d) {
	if (i > n) inkq();
	else
		for (int j = 0; j < n; j++)
		{
			if (chon[j] == 0 && v[j] > d)
			{
				kq[i - 1] = v[j]; chon[j] = 1;
				tim(i + 1, v[j] - d);
				kq[i - 1] = 0; chon[j] = 0;
			}
		}
}
