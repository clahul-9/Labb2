#include<iostream>
#include <cstdlib>

using namespace std;
int array_rows_cols(int *arr) {

	return 0;
}


int main() {
	int r, c;

	printf("Number of rows: ");
	cin >> r;

	printf("Number of columns: ");
	cin >> c;

	int *arr = new int[r, c];

	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < r; j++)
		{
			arr[i, j] = rand() % 10;
			printf("%i ", arr[i, j]);
		}
		printf("\n");
	}
	printf("----------------------------- \n");
	for (int x = 0; x < c; x++)
	{
		for (int y = 0; y < r; y++)
		{
			printf("%i  ", arr[x, y]);
		}
		cout << "\n";
	}
	

	system("pause");
	delete arr;
}