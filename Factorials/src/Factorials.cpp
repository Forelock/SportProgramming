//============================================================================
// Name        : Factorials.cpp
// Author      : Rzhevskiy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, k;
	string strK;

	cin>>n;
	cin>>strK;

	k = strK.size();
	unsigned long int p = 1;
	   int i;
	   i = n;
	   while(i > 0)
	   {
	      p *= i;
	      i -= k;
	   }

	cout<<p<<endl;
	return 0;
}
