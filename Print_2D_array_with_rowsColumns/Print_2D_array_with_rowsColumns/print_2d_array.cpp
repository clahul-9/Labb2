#include<iostream>
#include <cstdlib>

using namespace std;

int array_rows_cols(int arr[100][100],int r, int c) {
	int sumR=0,sumC = 0,tot_sum=0;

	for (int x = 0; x < r; x++)
	{
		for (int y = 0; y <= c; y++)
		{
			if (y==c)
			{
				printf("  %i \n", sumR);
				tot_sum += sumR;
				sumR = 0;
				break;
			}
			sumR += arr[x][y];
			printf("%i  ", arr[x][y]);
		}
	}
	cout << endl;
	for (int i = 0; i < c; i++)
	{
		for ( int j = 0; j <=r; j++)
		{
			if (j == r)
			{
				printf("%i ", sumC);
				tot_sum += sumC;
				sumC = 0;
				break;
			}
			sumC += arr[j][i];
		}
	}
	printf("  %i", tot_sum);

	return 0;
}


int main() {
	int r, c;
	printf("Number of rows: ");
	cin >> r;

	printf("Number of columns: ");
	cin >> c;

	int arr[100][100];

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			arr[i][j] = rand() % 10;
			//printf("%i ", arr[i, j]);
		}
		//printf("\n");
	}
	//printf("----------------------------- \n");

	array_rows_cols(arr,r,c);

	cout << "\n";
	system("pause");
}