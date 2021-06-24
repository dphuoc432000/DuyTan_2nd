#pragma once
#ifndef REALSET_H
#define REALSET_H
class IntSet;
class RealSet
{
private:
	double * a;
	int n;
public:
	RealSet();
	RealSet(int capacity);
	RealSet(const RealSet&);
	RealSet& operator=(const RealSet&);
	~RealSet();
	void input();
	void output();
	friend void intSetToRealSet(IntSet& s1, RealSet& s2);
};

#endif // !INTSET_H