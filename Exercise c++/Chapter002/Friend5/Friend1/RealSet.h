#include "IntSet.h"
#pragma once
#ifndef REALSET_H
#define REALSET_H

class IntSet;
class RealSet
{
	friend class IntSet;// IntSet la ban cua class RealSet
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
	void realSetToIntSet(IntSet& s2);
};

#endif // !INTSET_H