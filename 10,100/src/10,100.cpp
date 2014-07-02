//============================================================================
// Name        : 10,100.cpp
// Author      : Rzhevskiy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

bool check(int a)
{
	double x = (1 + sqrt(8 * a - 7))/2;

	if ((x - floor(x)) == 0.0)
		return true;
	else
		return false;
}

int main()
{
	int n, *a;
	cin>>n;
	a = new int[n];
	for(int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	for(int i = 0; i < n; ++i)
	{
		if (check(a[i]))
			cout<<"1"<<endl;
		else
			cout<<"0"<<endl;
	}

	return 0;
}
