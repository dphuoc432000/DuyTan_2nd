#include "IntSet.h"
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
	friend void IntSet::intSetToRealSet(RealSet& s2); //intSetToRealSet cua lop IntSet la Friend cua lop RealSet
};

#endif // !INTSET_H