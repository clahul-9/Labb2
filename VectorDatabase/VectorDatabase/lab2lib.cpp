
#include <iostream>
#include <array>
#include <stdio.h>

using namespace std;

bool is_sorted(int n[]) {
	for (int i = 1; i < (sizeof(n)); i++)
	{
		printf("n %i, n+1 %i, n-1 %i \n", n[i], n[i + 1], n[i - 1]);
		if (n[i] > n[i + 1] || n[i] < n[i - 1] && n[i] != '\0')
		{

			cout << "false" << endl;
			return false;
		}
	}
	cout << "true" << endl;
	return true;
}