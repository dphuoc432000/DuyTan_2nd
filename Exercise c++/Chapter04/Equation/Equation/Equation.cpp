#include <iostream>
#include"LinearEquation.h"
#include "SquareEquation.h"
using namespace std;
int main()
{
	cout << "LinearEquation: ";
	LinearEquation l1;
	cin >> l1;
	cout << "b: " << l1.getB() << "   " << "c: " << l1.getC() << endl;
	l1.solve();
	l1.setB(3);
	l1.setC(6);
	l1.solve();
	cout << endl;

	cout << "SquareEquation: ";
	SquareEquation s1;
	cin >> s1;
	cout << "a: " << s1.getA() << "b: " << l1.getB() << "   " << "c: " << l1.getC() << endl;
	s1.solve();
	s1.setA(2);
	s1.setB(3);
	s1.setC(4);
	s1.solve();
}

