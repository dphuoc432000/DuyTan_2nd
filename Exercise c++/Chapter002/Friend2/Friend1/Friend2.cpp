// Friend1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "IntSet.h"
#include "RealSet.h"
#include "Matrix.h"
#include "Array.h"
using namespace std; 
//2. Ham thanh vien cuar lop nay la ban cua lop kia

int main()
{
	/*IntSet i1;
	i1.input();
	i1.output();
	cout << endl;
	RealSet r1;
	i1.intSetToRealSet(r1);
	r1.output();*/
	
	Matrix m1(3);
	cout << "Matrix: " << endl;
	m1.input();
	m1.output();

	Array arr(3);
	cout << "Array: " << endl;
	arr.input();
	arr.output();
	cout << endl;

	m1.matrixMultiplyArray(arr);
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
