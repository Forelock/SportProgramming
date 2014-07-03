//============================================================================
// Name        : SumMin_Max.cpp
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
	vector <int> a;
	int val, size, min = 10001, max = -10001, sum;

	ifstream fin;
	ofstream fout;

	fin.open("input.txt", ios_base::in);
	fout.open("output.txt", ios_base::trunc);

	while(!fin.eof())
	{
		fin>>val;
		a.push_back(val);
	}
	size = a.size();

	for(int i = 1; i < size; i += 2)
	{
		if (a[i] > max) max = a[i];
	}

	for(int i = 0; i < size; i += 2)
	{
		if (a[i] < min) min = a[i];
	}
	fout<<max + min;

	fin.close();
	fout.close();
	return 0;
}
