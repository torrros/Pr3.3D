#pragma once
#include "Pair.h"
#include <iostream>
#include <string>

using namespace std;

class PUBrat:public Pair
{
public:
	PUBrat (int a=0, int b=0 ) : Pair(a,b) {};
	PUBrat(const Pair& p);
	PUBrat(const PUBrat&p);
	PUBrat& operator=(const PUBrat& r);

	Pair getpair() const { return *this; }
	void setpair( Pair p) { *this = p; }

	operator string() const;
	friend	ostream& operator<<(ostream& os, const PUBrat& r);
	friend	istream& operator>>(istream& is, PUBrat& r);
	
	friend	PUBrat operator+(const PUBrat& r1, const PUBrat& r2);
	friend	PUBrat operator-(const PUBrat& r1, const PUBrat& r2);
	friend	PUBrat operator/(const PUBrat& r1, const PUBrat& r2);
	friend	bool operator==(const PUBrat& r1, const PUBrat& r2);
};

