// Friend2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "IntSet.h"
#include "RealSet.h"
#include "Array.h"
#include "Matrix.h"
using namespace std;
void intSetToRealSet(IntSet& s1, RealSet& s2) {// day la ham tu do vua la ban cua class Matrix vua la ban cua class Array(ban se ket noi ca 2 voi nhau)
	s2.n = s1.n;
	s2.a = new double[s2.n];
	for (int i = 0; i < s2.n; i++)
		s2.a[i] = (double)s1.a[i];
}
void matrixMultiplyArray(Matrix &matrix, Array& array) {// day la ham tu do vua la ban cua class Matrix vua la ban cua class Array(ban se ket noi ca 2 voi nhau)
	if (matrix.n != array.n)
		cout << "Error.";
	else {
		Array brr(array.n);
		for (int row = 0; row < matrix.n; row++) {
			brr.a[row] = 0;
			for (int k = 0; k < matrix.n; k++)
				brr.a[row] += matrix.a[row][k] * array.a[k];
		}
		brr.output();
	}
}

int main()
{
	/*IntSet i1;
	i1.input();
	i1.output();
	cout << endl;
	RealSet r1;
	intSetToRealSet(i1, r1);
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

	matrixMultiplyArray(m1,arr);
}
//Ham tu tao la ban cua 1 hoac nhieu lop
