#include<iostream>
#include<array>
#include<math.h>

void shrink(int arr[]) {
	int j = 0;
	int *arrN = new int[sizeof(arr)];

	std::cout << "amount:"<<(sizeof(arr) / 2) << std::endl;
	for (int i = 0; i < (sizeof(arr)/2)+1 ; i++)
	{
		if ((i%2)!=0)
		{
			printf("\n n: %i, n-1: %i ", arr[i], arr[i - 1]);
			arrN[j]=arr[i - 1] + arr[i];
			j++;
		}
	}
	if (j<sizeof(arrN))
	{
		for (j; j < sizeof(arr); j++)
		{
			arrN[j] = 0;
		}
	}
	for (int x = 0; x < j; x++)
	{
		arr[x] = arrN[x];
	}
}

int main() {
	int n;
	std::cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		printf("Number %i: ", i);
		std::cin >> arr[i];
	}

	printf("\n input array: ");
	for (int j = 0; j < n; j++)
	{
		std::cout << arr[j];
	}

	shrink(arr);

	printf("\n output array: ");
	for (int k = 0;	k < n; k++)
	{
		std::cout << arr[k];
	}

	system("pause");
	return 0;
}