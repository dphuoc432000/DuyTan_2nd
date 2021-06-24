#include "LinearEquation.h"
#include<iostream>
using namespace std;
 
void LinearEquation::input() {
	cout << "Nhap vao b: " << endl;
	cin >> b;
	cout << "Nhap vao c: " << endl;
	cin >> c;
}
istream& operator>>(istream& is, LinearEquation& t) {
	t.input();
	return is;
}
void LinearEquation::solve() {
	cout << endl << "LinearEquation: ";
	if (b == 0)
		if (c == 0)
			cout << "unlimited roof";
		else
			cout << endl << "no-roof";
	else
		cout << endl << "roof: " << (float)-c/b;
}
