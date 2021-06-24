#pragma once
#include <iostream>
using namespace std;
class LinearEquation
{
protected:// de lop con thua ke cac bien thanh phan
	int b, c;
public:
	LinearEquation() {
		b = 0; c = 0;
	}
	LinearEquation(int b, int c) {
		this->b = b;
		this->c = c;
	}
	//Ham tao sao chep, viet de biet cach tao ham tao sao cheo op xon khi thua ke lop cha
	LinearEquation(const LinearEquation& t) {
		b = t.c;
		c = t.c;
	}
	//Toan tu gan, viet de biet cach tao toan tu gan lop con khi thua ke lop cha
	LinearEquation& operator = (const LinearEquation& t) {
		b = t.b;
		c = t.c;
		return *this;
	}
	int getB() {
		return b;
	}
	int getC() {
		return c;
	}
	void setB(int b) {
		this->b = b;
	}
	void setC(int c) {
		this->c = c;
	}
	void input();
	friend istream& operator >> (istream& is, LinearEquation& linear);
	void solve();
};

