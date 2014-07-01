//============================================================================
// Name        : Reverse_sqrt.cpp
// Author      : Rzhevskiy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>

//using namespace std;

int main()
{
	int N;
	  std:: cin >> N;
	  /* dynamic memory allocation */
	  int ** p = new int * [N];
	  for (int i = 0; i < N; i++)
	    p[i] = new int [N];

	  /* initialize upper triangle matrix */
	  p[0][N-1] = 1;
	  int m, n;
	  int ct = 1, value = 2, iter = 1, row = 0, column = N - 2;
	  while (ct <= N - 1)
	  {
	    n = column, m = row;
	    for (int i = 0; i <= iter; i++)
	    {
	      p[m++][n++] = value;
	      value++;
	    }

	    iter++; ct++;
	    column--;
	  }

	  /* initialize the lower triangle matrix */
	  row = 1; column = 0, iter = N - 2;
	  while (ct > 1)
	  {
	    n = column, m = row;
	    for (int i = 0; i <= iter; i++)
	    {
	      p[m++][n++] = value;
	      value++;
	    }

	    iter--; ct--;
	    row++;
	  }

	  /* display matrix */
	  for (int i = 0; i < N; i++)
	  {
	    for (int j = 0; j < N; j++)
	      std::cout << p[i][j] << " ";
	    std::cout << std::endl;
	  }

	  /* release memory */
	  for (int i = 0; i < N; i++)
	    delete[] p[i];
	  delete[] p;

	  return 0;
}
