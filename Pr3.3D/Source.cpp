#include <iostream>
#include <string>
#include "PRrat.h"
#include "PUBrat.h"

using namespace std;

int main()
{
	PRrational r1;
	cin >> r1;
	PRrational r2={ 1, 2 };
	cout << "r2-"<< r2 << endl;
	
	cout << r1 + r2 << endl;
	cout << r1 - r2 << endl;
	cout << r1 / r2 << endl;
	
	if (r1== r2)
		cout << "Equal";
	else
		cout << "Not equal";
}