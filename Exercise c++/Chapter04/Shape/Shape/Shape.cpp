// Shape.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Rectangle.h"
#include"Square.h"
using namespace std;

int main()
{
	cout << "Rectangle: " << endl;
	Rectangle r1;
	cin >> r1;
	cout << "Areal: " << r1.Areal() << endl << "Circumference: " << r1.Circuference() << "\n*2";
	cout << "Square: " << endl;
	Square s2;
	cin >> s2;
	cout << "Areal: " << s2.Areal() << endl << "Circumference: " << s2.Circuference() << "\n*2";

}