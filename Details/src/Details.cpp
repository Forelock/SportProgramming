//============================================================================
// Name        : Details.cpp
// Author      : Rzhevskiy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	int n, m, cA, cB, min, mmin = 100;
	string *s;

	ifstream fin;
	ofstream fout;

	fin.open("input.txt", ios_base::in);
	fout.open("output.txt", ios_base::trunc);

	fin>>n>>m;
	s = new string[n];
	for(int i = 0; i < n; ++i)
	{
		fin>>s[i];
	}

	for(int i = 0; i < n; ++i)
	{
		cA = 0;
		cB = 0;
		int a = s[i].find_first_of(".");
		for(int j = 0; j < a; ++j)
		{
			++cA;
		}

		int b = s[i].find_last_of(".");
		for(int j = s[i].size(); j > b; --j)
		{
			++cB;
		}

		min = m - (cA + cB) + 1;
		if(min < mmin) mmin = min;
	}

	fout<<mmin;

	fin.close();
	fout.close();
	return 0;
}
