#include<iostream>
#include<array>
#include<math.h>

void shrink(int arr[], int l) {
	int j = 0;
	int *arrN = new int[l];

	std::cout << "amount:"<<(l/ 2) << std::endl;
	//adds to agesent nr

 	for (int i = 0; i <l ; i++)
	{
		if ((i%2)!=0&&arr[i-1]!='\0'&&arr[i]!='\0')
		{
			printf("\n n: %i, n-1: %i ", arr[i], arr[i - 1]);
			arrN[j]=arr[i - 1] + arr[i];
			j++;
		}
	}
	//if the array has an odd nr of ellements adds the last one to the new one
	if (l%2!=0)
	{
		printf("\n n: 00 %i,%i ", arr[l-1],j);
		
		arrN[j]= arr[l-1];
		j++;
	}
	//add 0 to the rest of the array
	if (j<sizeof(arrN))
	{
		for (j; j < sizeof(arr); j++)
		{
			arrN[j] = 0;
		}
	}
	//
	for (int x = 0; x < j; x++)
	{
		arr[x] = arrN[x];
	}
	//delete arrN;
}

int main() {
	//varibals and inputs
	int n;
	std::cout << "Leangt of array: ";
	std::cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		printf("Number %i: ", i);
		std::cin >> arr[i];
	}

	//input array
	printf("\n input array: ");
	for (int j = 0; j < n; j++)
	{
		std::cout << arr[j];
	}

	shrink(arr,n);

	//output array
	printf("\n output array: ");
	for (int k = 0;	k < n; k++)
	{
		std::cout << arr[k];
	}
	
	system("pause");

}