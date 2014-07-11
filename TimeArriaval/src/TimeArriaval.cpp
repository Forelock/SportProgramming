//============================================================================
// Name        : TimeArriaval.cpp
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
	string s,sH, sM;
	int hour, min, sHour, sMin;

	ifstream fin;
	ofstream fout;

	fin.open("input.txt", ios_base::in);
	fout.open("output.txt", ios_base::trunc);

	fin>>s>>hour>>min;

	//cout<<hour<<" "<<min<<endl;

	sH = s.substr(0, 2);
	sM = s.substr(3, 2);
	sHour = atoi(sH.c_str());
	sMin = atoi(sM.c_str());

	//cout<<sHour<<" "<<sMin<<endl;

	sHour = sHour + hour;
	sMin = sMin + min;

	//cout<<sHour<<" "<<sMin<<endl;

	if (sMin >= 60)
	{
		++sHour;
		sMin -= 60;
	}
	sHour %= 24;


	if(sHour < 10) fout<<"0";
	fout<<sHour<<":";
	if(sMin < 10) fout<<"0";
	fout<<sMin;


	fin.close();
	fout.close();

	return 0;
}
