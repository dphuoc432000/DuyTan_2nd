#pragma once
#include <iostream>
using namespace std;
class baiToanRobot
{
private:
	int sb = 0, dem = 0, m[1000];
public:
	void in() {
		cout << "\n Cach di thu " << dem++ << ": ";
		for (int i = 1; i <= sb; i++)
			cout << m[i] << " ";
	}
	void phantich(int ll) {
		if (ll == 0) {
			int d = 0;
			for (int i = 1; i <= sb; i++)
				if (m[i] == 1)
					d++;
			if (d <= 2)
				in();
		}
		else
			for(int i = 1; i <= 2; i ++)//co 2 buoc co do dai 1 va 2
				if (i <= ll) {
					sb++;
					m[sb] = i; // them 1 buoc di co do dai i
					phantich(ll - i); // di doan duong con lai
					sb--; // lui lai 1 buoc de di buoc co do dai khac
				}
	}
	void phantich_ycll44_54(int ll, int tt) {//bientt luu so buoc 1m da di
		if (ll == 0)
			in();
		else {
			if (tt < 2)  //neu chua dii qua 2 buoc 1m thi co the chon buoc 1m hoac 2m
				for (int i = 1; i <= 2; i++) {//co 2 buoc co do dai 1 va 2
					if (i <= ll) {
						sb++;
						m[sb] = i;// them 1 buoc di co do dai i
						if (i == 1)
							phantich_ycll44_54(ll - i, tt + 1);// neu di buoc 1m thi tawng bien tt len 1
						else
							phantich_ycll44_54(ll - i, tt);
						sb--;//lui lai 1 buoc de di buoc co do dai khac
					}
				}
			else// da di xong 2 buoc 1m thi chi co the di buoc 2m
				for (int i = 2; i < 2; i++)
					if (i <= ll) {
						sb++;
						m[sb] = i;
						phantich_ycll44_54(ll - i, tt);
						sb--;
					}
		}
	}
};

