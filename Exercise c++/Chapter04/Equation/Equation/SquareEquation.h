#pragma once
#include "LinearEquation.h"
#include < iostream>
using namespace std;
class SquareEquation:public LinearEquation // thua ke lop cha = extents LinearEquation in java
{
	int a;
public:
	SquareEquation();
	SquareEquation(int a, int b, int c);
	//Ham tao sao chep, viet de biet cach lam
	SquareEquation(const SquareEquation& square);
	SquareEquation& operator=(const SquareEquation& square);
	int getA() {
		return a;
	}
	void setA(int a) {
		this->a = a;
	}
	void input();
	friend istream& operator >> (istream& is, SquareEquation& square);
	void solve();

};

