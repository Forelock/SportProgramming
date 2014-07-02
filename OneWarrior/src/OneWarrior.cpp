//============================================================================
// Name        : OneWarrior.cpp
// Author      : Rzhevskiy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int p[8][8] ={
					2,3,4,4,4,4,3,2,
					3,4,6,6,6,6,4,3,
					4,6,8,8,8,8,6,4,
					4,6,8,8,8,8,6,4,
					4,6,8,8,8,8,6,4,
					4,6,8,8,8,8,6,4,
					3,4,6,6,6,6,4,3,
					2,3,4,4,4,4,3,2
				};
	    int n;
	    string *cell;
	    cin>>n;
	    cell = new string[n];
	    for(int i = 0; i < n; ++i)
	    {
	    	cin>>cell[i];
	    }

	    for(int i = 0; i < n; ++i)
	    {
	        int il,id;
	        il = cell[i][0]-'a' + 1;
	        id = cell[i][1]-'0';
	        cout<<p[il-1][id-1]<<endl;;
	    }

	return 0;
}
