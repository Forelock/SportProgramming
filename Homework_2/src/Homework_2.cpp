//============================================================================
// Name        : Homework_2.cpp
// Author      : Rzhevskiy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
	int n, b, sum = 0, iMin, iMax, min = 101, max = -101, mul = 1;
	vector <int> a;

	ifstream fin;
	ofstream fout;

	fin.open("input.txt", ios_base::in);
	fout.open("output.txt", ios_base::trunc);

	fin>>n;
	for(int i = 0; i < n; ++i)
	{
		fin>>b;
		a.push_back(b);
	}
	for(int i = 0; i < n; ++i)
	{
		if (a[i] > 0) sum += a[i];
		if (a[i] > max){max = a[i]; iMax = i;}
		if (a[i] < min) {min = a[i]; iMin = i;}
	}

	for(int i = ((iMax > iMin) ? iMin:iMax) + 1; i < ((iMax > iMin) ? iMax:iMin) ; ++i)
	{
		mul *= a[i];
	}

	fout<<sum<<" "<<mul;

	fin.close();
	fout.close();


	return 0;
}
