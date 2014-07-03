//============================================================================
// Name        : SchoolAlg.cpp
// Author      : Rzhevskiy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int a, b, c;

	ifstream fin;
	ofstream fout;

	fin.open("input.txt", ios_base::in);
	fout.open("output.txt", ios_base::trunc);

	fin>>a>>b>>c;

	if (a == 0 && b == 0 && c == 0)
	{
		fout<<"0";
		fin.close();
		fout.close();
		return 0;
	}

	if (a != 0) fout<<a;

	if (b != 0)
	{
		if (a == 0 && (b < 0 || b > 0))
		{
			if (b == 1)
				fout<<"x";
			if (b == -1)
				fout<<"-x";
			if (b != 1 && b != -1) fout<<b<<"x";
		}
		if (a != 0)
		{
			if (b > 0)
			{
				if (b == 1) fout<<"+x";
				else fout<<"+"<<b<<"x";
			}
			if (b < 0)
			{
				if (b == -1) fout<<"-x";
				else fout<<b<<"x";
			}

		}
	}

	if (c != 0)
	{
		if (a == 0 && b == 0 && (c < 0 || c > 0))
		{
			if (c == 1)
				fout<<"y";
			if (c == -1)
				fout<<"-y";
			if (c != 1 && c != -1) fout<<c<<"y";
		}
		if (b != 0 || (a != 0 && b == 0))
		{
			if (c > 0)
			{
				if (c == 1) fout<<"+y";
				else fout<<"+"<<c<<"y";
			}
			if (c < 0)
			{
				if (c == -1) fout<<"-y";
				else fout<<c<<"y";
			}
		}
	}
	fin.close();
	fout.close();

	return 0;
}
