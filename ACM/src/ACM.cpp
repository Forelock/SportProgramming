//============================================================================
// Name        : ACM.cpp
// Author      : Rzhevskiy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
//#include <memory>
//#include <bits/shared_ptr.h>
using namespace std;

int main()
{
	//shared_ptr <int> x(new int(42));
	char nameTeam[51];
	string a;
	vector <string> s;
	//string s[3];

	ifstream fin;
	ofstream fout;

	fin.open("input.txt", ios_base::in);
	fout.open("output.txt", ios_base::trunc);

	fin.getline(nameTeam, 50);
	for(int i = 0; i < 3; ++i)
	{
		fin>>a;
		s.push_back(a);
	}

	sort(s.begin(), s.end());

	fout<<nameTeam<<": ";
	for(int i = 0; i < 3; ++i)
	{
		fout<<s[i];
		if (i != 2) fout<<", ";
	}

	fin.close();
	fout.close();

	return 0;
}
