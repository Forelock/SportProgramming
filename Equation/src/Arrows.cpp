//============================================================================
// Name        : Arrows.cpp
// Author      : Rzhevskiy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
	string s;
	int x, f, b, sign = 1;
	string y, a;

	ifstream fin;
	ofstream fout;

	fin.open("input.txt", ios_base::in);
	fout.open("output.txt", ios_base::trunc);

	fin>>s;

	if (s[1] == '-') sign = -1;
	if (s[0] == 'x')
	{
		y = s[4];
		f = atoi(y.c_str());
		a = s[2];
		b = atoi(a.c_str());
		//b *= sign;
		//cout<<b<<" "<<f;
		if (sign == -1) x = f + b;
		if (sign == 1) x = f - b;
	}
	if(s[2] == 'x')
	{
		y = s[4];
		f = atoi(y.c_str());
		a = s[0];
		b = atoi(a.c_str());
		x = (f - b) * sign;
	}
	if(s[4] == 'x')
	{
		y = s[0];
		a = s[2];
		f = atoi(y.c_str());
		b = atoi(a.c_str());
		if (sign == -1) x = f - b;
		if (sign == 1) x = f + b;
	}

	fout<<x;

	fin.close();
	fout.close();


	return 0;
}
