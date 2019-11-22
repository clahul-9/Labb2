

#include <iostream>
#include <array>
#include <stdio.h>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;


//task1
bool is_sorted(int n[], int l) {
	for (int i = 1; i < l - 1; i++)
	{
		//Cheks if the number befor is bigger or the one after is smaler
		if ((n[i] > n[i + 1] || n[i] < n[i - 1]) && n[i + 1] != '\0')
		{
			return false;
		}
	}
	return true;
}
void task1() {
	//variables
	cout << "numbers to check";
	int b;
	cin >> b;
	int *a = new int[b];
	for (int i = 0; i < b; i++)
	{
		printf("arry value %i: ", i + 1);
		scanf_s("%d", &a[i]);

	}
	//prints the result
	if (is_sorted(a, b) == 1) {
		cout << "True";
	}
	else if (is_sorted(a, b) == 0)
	{
		cout << "False";
	}
	delete a;
}


//task 2
bool is_palindrome(char n[]) {
	int s = 0;
	//cheks how long the world
	for (int i = 0;; i++)
	{
		s = i;
		if (n[i] == '\0') {
			break;
		}
	}
	//cheks if it is palidrome
	for (int j = 0; j < s; j++)
	{
		if (n[j] != n[(s - 1) - j])
		{
			return false;
		}
	}
	return true;
}
void task2() {
	//variables
	char a[100];
	printf("enter a world: ");
	scanf_s("%99s", a, sizeof(a));
	//prints result
	if (is_palindrome(a) == 0)
	{
		printf_s("FALSE \n");
	}
	else if (is_palindrome(a) == 1)
	{
		printf_s("TRUE \n");
	}
}


//task3
int array_rows_cols(int arr[100][100],int r, int c) {
int sumR = 0, sumC = 0, tot_sum = 0;
//writes out the matrix and calculets and writes the sum of the rad  
for (int x = 0; x < r; x++)
{
	for (int y = 0; y <= c; y++)
	{
		if (y == c)
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
//calculets andwrites out to the sum of the colums and the total sum.
cout << endl;
for (int i = 0; i < c; i++)
{
	for (int j = 0; j <= r; j++)
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
int task3() {
	//variables
	int r, c;
	printf("Number of rows: ");
	cin >> r;

	printf("Number of columns: ");
	cin >> c;

	int arr[100][100];
	//randomices the valu for each  in the martix.
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}

	array_rows_cols(arr, r, c);

	cout << "\n";
}


//task 4
void swap_sort(int &a, int &b, int &c, bool order) {
	//makes the inputs in to an array
	int n[] = { a,b,c };
	//sorts the array
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 3; i++) {
			if (order == 0 && n[i] >= n[i + 1] && n[i + 1] > 0)
			{
				int d = n[i];
				n[i] = n[i + 1];
				n[i + 1] = d;

				if (n[i + 1] < 0)
				{
					break;
				}
			}
			else if (order == 1 && n[i] <= n[i + 1] && n[i + 1] > 0)
			{
				int d = n[i];
				n[i] = n[i + 1];
				n[i + 1] = d;
				if (n[i + 1] < 0)
				{
					break;
				}
			}
		}
	}
	//makes the array back into varibals 
	a = n[0];
	b = n[1];
	c = n[2];
}
int task4() {
	int a = 1;
	do
	{
		//a
		printf("\nGive a (0 to quit): ");
		cin >> a;
		//looks if the program should continue
		if (a != 0)
		{
			//b
			printf("Give b: ");
			int b;
			cin >> b;
			//c
			printf("Give c: ");
			int c = 0;
			cin >> c;
			//order
			printf("Sort ascending/descending (1/0): ");
			bool o = 0;
			cin >> o;

			swap_sort(a, b, c, o);
			printf("Result: %i%i%i", a, b, c);
		}
	} while (a != 0);
}


//task 5
void shrink(int arr[], int l) {
	int j = 0;
	int *arrN = new int[l];

	std::cout << "amount:" << (l / 2) << std::endl;
	//adds to agesent nr

	for (int i = 0; i < l; i++)
	{
		if ((i % 2) != 0 && arr[i - 1] != '\0'&&arr[i] != '\0')
		{
			printf("\n n: %i, n-1: %i ", arr[i], arr[i - 1]);
			arrN[j] = arr[i - 1] + arr[i];
			j++;
		}
	}
	//if the array has an odd nr of ellements adds the last one to the new one
	if (l % 2 != 0)
	{
		printf("\n n: 00 %i,%i ", arr[l - 1], j);

		arrN[j] = arr[l - 1];
		j++;
	}
	//add 0 to the rest of the array
	if (j < sizeof(arrN))
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
int task5() {
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

	shrink(arr, n);

	//output array
	printf("\n output array: ");
	for (int k = 0; k < n; k++)
	{
		std::cout << arr[k];
	}
}


//task 6

//global vector v
vector<string> v;

//1: initialise database
void initialice() {
	v.clear();
}
//2. insert
void insert() {
	string c;
	int x = 0;
	do
	{
		printf_s("enter a Name(q/Q to quite): ");
		cin >> c;
		if (c == "q" || c == "Q")
		{
			x = 1;
			break;
		}
		v.insert(v.begin(), c);
	} while (x == 0);
}
//3. search
void search() {
	string c;
	printf_s("Enter search term: ");
	cin >> c;
	int q = -1;
	for (auto e : v)
	{
		q = e.find(c);
		if (q >= 0)
		{
			cout << e << endl;
			q = -1;
		}
	}
}
//4. delete
void delet() {
	string c;
	printf_s("Enter the term to delete: ");
	cin >> c;
	for (int i = 0; i < v.size(); i++)
	{
		if (c == v[i])
		{
			v.erase(v.begin() + i);
		}
	}
}
//5. print
void print() {
	for (auto e : v)
	{
		cout << e << endl;
	}
}
//menu
int task6() {
	int c;

	int x = 0;
	while (x == 0)
	{
		printf("MENU:\n\n1: initialise database  \n2. insert\n3. search\n4. delete\n5. print\n6. quit\n\nMake your choice:");
		cin >> c;
		switch (c)
		{
		case 1:
			initialice();
			break;
		case 2:
			insert();
			break;
		case 3:
			search();
			break;
		case 4:
			delet();
			break;
		case 5:
			print();
			break;
		case 6:
			x = 1;
			break;
		}
	}
}
