//============================================================================
// Name        : DanceSin.cpp
// Author      : Rzhevskiy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int n;
	string answer;

	cin>>n;

	for(int i = 1; i < n ; ++i)
		cout<<"(";

	for(int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= i; ++j)
		{
			if (j > 1)
				printf((j & 1)? "+":"-");
			cout<<"sin("<<j;
		}

		for(int j = 1; j <= i; ++j)
		{
			cout<<")";
		}
		cout<<"+"<<n + 1 - i;
		if (i != n)
			cout<<")";
	}
	return 0;
}
