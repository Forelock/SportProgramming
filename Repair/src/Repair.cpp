//============================================================================
// Name        : Repair.cpp
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
	const int col_box = 16;
	int l, w, h, s1, s2, fullS, countCol;

	ifstream fin;
	ofstream fout;

	fin.open("input.txt", ios_base::in);
	fout.open("output.txt", ios_base::trunc);

	fin>>l>>w>>h;

	s1 = l * h;
	s2 = w * h;
	fullS = (s1 + s2) * 2;

	countCol = fullS / col_box;

	if (fullS % col_box != 0) ++countCol;

	fout<<countCol;

	fin.close();
	fout.close();
	return 0;
}
