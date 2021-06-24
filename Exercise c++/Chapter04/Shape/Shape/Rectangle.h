#pragma once
#include <iostream>
using namespace std;
class Rectangle
{
protected:
	int width, height;
public:
	Rectangle();
	Rectangle(int w, int h);
	Rectangle(const Rectangle & rectangle);
	Rectangle& operator=(const Rectangle& rectangle);
	int getWidth() {
		return this->width;
	}
	int getHeigth() {
		return this->height;
	}
	void setWidth(int w) {
		if (w < 0) {
			cout << "Weight is not neagative.";
			this->width = 0;
		}
		else
			this->width = w;
	}
	void setHeigth(int h) {
		if (h < 0) {
			cout << "Height is not neagtive.";
			this->height = 0;
		}
		else
			this->height = h;
	}
	void input();
	friend istream& operator>>(istream& is, Rectangle& rectangle);
	int Areal();
	int Circuference();
};

