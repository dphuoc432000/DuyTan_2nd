#pragma once
#include <iostream>
#include "Class.h"
#include "Subject.h"
#include"People.h"
using namespace std;
class Student :public People
{
private:
	long id;
	Subject subject;
	Class clas;
public:
	Student();
	Student(long id, Subject sub, Class cl, char* lastName, char* firstName, Date dob, Address address, bool sex);
	void input();
	void output();
	friend istream& operator>>(istream& is, Student& cl);
	friend ostream& operator<<(ostream& os, Student& cl);

};

