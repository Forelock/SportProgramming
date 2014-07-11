//============================================================================
// Name        : IronRoad.cpp
// Author      : Rzhevskiy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	int n, count = 0;
	string *s;

	ifstream fin;
	ofstream fout;

	fin.open("input.txt", ios_base::in);
	fout.open("output.txt", ios_base::trunc);

	fin>>n;
	s = new string[n];
	for(int i = 0; i < n; ++i)
	{
		fin>>s[i];
		if (s[i][0] == s[i][3]) ++count;
		//cout<<s[i]<<endl;
	}

	fout<<count;

	delete s;
	fin.close();
	fout.close();

	return 0;
}
