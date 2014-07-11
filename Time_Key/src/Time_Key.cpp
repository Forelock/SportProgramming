//============================================================================
// Name        : Time_Key.cpp
// Author      : Rzhevskiy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <bitset>
using namespace std;

void toBin(long long int &n, string &s)
{
	stringstream ss;
	bitset<27> a = n;
	ss<<a;
	s = ss.str();

}

int Sum(string &s)
{
	int sum = 0;

	for(int i = 0, len = s.length(); i < len; ++i)
	{
		if (s[i] == '1')
			++sum;
	}

	return sum;
}

int main()
{
	long long int n, k;
	int n_dash, sum;
	string one_zero;

	ifstream fin;
	ofstream fout;

	fin.open("input.txt", ios_base::in);
	fout.open("output.txt", ios_base::trunc);

	fin>>n>>k;

	n_dash = n;
	for(int i = 0; i < k; ++i)
	{
		n = n_dash;
		toBin(n, one_zero);
		cout<<one_zero<<endl;
		sum = Sum(one_zero);
		n_dash += sum;
	}

	fout<<n_dash;

	fin.close();
	fin.close();

	return 0;
}
