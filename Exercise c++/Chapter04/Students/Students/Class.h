#pragma once
#include <iostream>
using namespace std;
class Class
{
protected:
	char* className;
	int course;
public:
	Class();
	Class(char* cl, int course);
	Class(const Class&);
	Class& operator=(const Class&);
	~Class();
	void input();
	void output();
	friend istream& operator>>(istream& is, Class& cl);
	friend ostream& operator<<(ostream& os, Class& cl);
};

