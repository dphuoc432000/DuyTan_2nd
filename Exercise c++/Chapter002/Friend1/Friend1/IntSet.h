#pragma once
#ifndef INTSET_H
#define INTSET_H
class RealSet;
class IntSet
{
private: 
	int* a;
	int n;
public:
	IntSet();
	IntSet(int capacity);
	IntSet(const IntSet&);
	IntSet& operator=(const IntSet&);
	~IntSet();
	void input();
	void output();
	friend void intSetToRealSet(IntSet& s1, RealSet& s2);
};

#endif // !INTSET_H


