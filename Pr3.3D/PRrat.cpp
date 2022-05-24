#include "PRrat.h"
#include <iostream>
#include <sstream>

using namespace std;

PRrational::PRrational(const Pair& p)
{
	seta(p.geta());
	setb(p.getb());
}

PRrational:: PRrational(const PRrational& p)
{
  * this = p;
}

PRrational& PRrational:: operator = (const PRrational& p)
{
  seta(p.geta());
  setb(p.getb());
  return *this;
}

PRrational:: operator string ()const
{
	stringstream ss;
  ss << geta() << "/" << getb();
  return ss.str();
}

ostream& operator << (ostream& os, const PRrational& r)
{
  os << string(r);
  return os;
}

istream& operator >> (istream& is, PRrational& r)
{
	int a, b;
	cout << "Enter a -  ";cin >> a;
	cout << "Enter b -  ";cin >> b;
	r.seta(a);
	r.setb(b);
	return is;
}

PRrational operator + (const PRrational& r1, const PRrational& r2)
{
	return PRrational(r1.geta() * r2.getb() + r2.geta() * r1.getb(), r1.getb() * r2.getb());
}

PRrational operator - (const PRrational& r1, const PRrational& r2)
{
	return PRrational(r1.geta() * r2.getb() - r2.geta() * r1.getb(), r1.getb() * r2.getb());
}

PRrational operator / (const PRrational& r1, const PRrational& r2)
{
	return PRrational(r1.geta() * r2.getb(), r1.getb() * r2.geta());
}

 bool  operator == (const PRrational& r1, const PRrational& r2)
{
	return (r1.geta() == r2.geta() && r1.getb() == r2.getb());
}