// Operator4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
	Complex s1;
	cin >> s1;
	cout << s1;
	
	Complex s2;
	cin >> s2;
	cout << s2;

	Complex s3;
	s3 = s1 + s2;
	cout << s3;

	Complex s4;
	s4 = s1 - s2;
	cout << s4;

	Complex s5;
	s5 = s1 * s2;
	cout << s5;

	Complex s6;
	s6 = s1 / s2;
	cout << s6;
	
	cout << endl;
	cout << s1;
	cout << s2;
	cout << s3;
	cout << s4;
	cout << s5;
	cout << s6;
	
	s4 = s1;
	cout << s4;
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
