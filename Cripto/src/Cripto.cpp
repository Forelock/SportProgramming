//============================================================================
// Name        : Cripto.cpp
// Author      : Rzhevskiy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

bool is_prime (int n)
{
	if (n <= 1) return false;
	if (n == 2) return true;
	if (!(n % 2)) return false;
	for (int i = 2; i * i <= n; i++)
		if (! (n % i))
			return false;
	return true;
}

void primes(vector<int> &a)
{
	a.push_back(2);
	for(int i = 3, b = 1; b < 15001; i += 2)
	{
		if (is_prime(i))
		{
			++b;
			a.push_back(i);
		}
	}
}

int main()
{
	vector <int> a;
	int n, *mas;

	cin>>n;
	primes(a);

	mas = new int[n];
	for(int i = 0; i < n; ++i)
	{
		cin>>mas[i];
	}

	for(int i = 0; i < n; ++i)
	{
		cout<<a[mas[i] - 1]<<endl;
	}

	return 0;
}
