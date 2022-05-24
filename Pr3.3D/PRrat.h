#pragma once
#include <iostream>
#include <string>
#include"Pair.h"

using namespace std;

class PRrational: Pair
{
public:
	PRrational (int a=0, int b=0): Pair(a,b) {};
	PRrational (const Pair& p);
	PRrational (const PRrational& r);
	PRrational& operator= (const PRrational& r);

	Pair setpair(Pair p) { *this = p; }
	Pair getpair() const { return *this;}
	operator string() const;
	friend ostream& operator<< (ostream& os, const PRrational& r);
	friend istream& operator>> (istream& is, PRrational& r);
	
	friend PRrational operator+ (const PRrational& r1, const PRrational& r2);
	friend PRrational operator- (const PRrational& r1, const PRrational& r2);
	friend PRrational operator/ (const PRrational& r1, const PRrational& r2);
	friend bool operator== (const PRrational& r1, const PRrational& r2);
	
};

