//============================================================================
// Name        : Bolts_and_nuts.cpp
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
	int bolt[3];
	int nut[3];
	int lossBolt, lossNut, scathe = 0, c = 0;
	ifstream fin;
	ofstream fout;

	fin.open("input.txt", ios_base::in);
	fout.open("output.txt", ios_base::trunc);

	fin>>bolt[0]>>bolt[1]>>bolt[2];
	fin>>nut[0]>>nut[1]>>nut[2];


	lossBolt = ((bolt[0] / 100) * bolt[1]) * bolt[2];
	lossNut = ((nut[0] / 100) * nut[1]) * nut[2];

	bolt[0] = bolt[0] - ((bolt[0] / 100) * bolt[1]);
	nut[0] = nut[0] - ((nut[0] / 100) * nut[1]);

	if(bolt[0] > nut[0])
	{
		c = (bolt[0] - nut[0]) * bolt[2];
	}
	if(bolt[0] < nut[0])
	{
		c = (nut[0] - bolt[0]) * nut[2];
	}

	scathe = lossBolt + lossNut + c;
	fout<<scathe;

	fin.close();
	fout.close();

	return 0;
}
