#include "Pair.h"
#include <iostream>
#include <sstream>

using namespace std;

Pair :: Pair(int a, int b)
{
	seta(a);
	setb(b);
}

Pair ::Pair (const Pair &p)
{
	*this = p;
}

Pair& Pair :: operator = (const Pair &p)
{

	seta(p.geta());
	setb(p.getb());
	return *this;
}

Pair::operator string() const
{
	stringstream ss;
	ss << "(" << geta() << "," << getb() << ")";
	return ss.str();
}

ostream& operator << (ostream &os, const Pair &p)
{
	os << string(p);
	return os;
}

istream& operator >> (istream &is, Pair &p)
{
	cout << " a = ";cin >> p.a;
	cout << " b = ";cin >> p.b;
	return is;
}

bool operator == (const Pair &p1, const Pair &p2)
{
	return (p1.geta() == p2.geta() && p1.getb() == p2.getb());
}

Pair operator - (const Pair &p1, const Pair &p2)
{
	return Pair(p1.geta() - p2.geta(), p1.getb() - p2.getb());
}

Pair operator * (const Pair &p1, const Pair &p2)
{
	return Pair(p1.geta() * p2.geta(), p1.getb() * p2.getb());
}