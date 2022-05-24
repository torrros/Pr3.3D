#include "PUBrat.h"
#include <iostream>
#include <sstream>

using namespace std;

PUBrat::PUBrat(const Pair& p)
{
	seta(p.geta());
	setb(p.getb());
}


PUBrat::PUBrat(const PUBrat& p)
{
	*this = p;
}

PUBrat& PUBrat::operator=(const PUBrat& p)
{
	
	seta(p.geta());
	setb(p.getb());
	return *this;
}

PUBrat::operator string() const
{
	stringstream ss;
	ss << geta() << "/" << getb();
	return ss.str();
}

ostream& operator<<(ostream& os, const PUBrat& p)
{
	os << (string)p;
	return os;
}

istream& operator>>(istream& is, PUBrat& p)
{
	int a, b;
	cout<< " a - "<< endl;
	cin >> a;
	cout << " b - " << endl;
	cin >> b;
	p.seta(a);
	p.setb(b);
	return is;
	
}

PUBrat operator +(const PUBrat& r1, const PUBrat& r2)
{
	return PUBrat(r1.geta() * r2.getb() + r2.geta() * r1.getb(), r1.getb() * r2.getb());
}

PUBrat operator -(const PUBrat& r1, const PUBrat& r2)
{
	return PUBrat(r1.geta() * r2.getb() - r2.geta() * r1.getb(), r1.getb() * r2.getb());
}

PUBrat operator /(const PUBrat& r1, const PUBrat& r2)
{
	return PUBrat(r1.geta() * r2.getb(), r1.getb() * r2.geta());
}

bool operator == (const PUBrat& r1, const PUBrat& r2)
{
	return (r1.geta() == r2.geta() && r1.getb() == r2.getb());
}