#include <iostream>
#include <array>
#include <stdio.h>

using namespace std;

bool is_sorted(int n[],int l) {
	for (int i = 1;i<l-1;i++)
	{
		//Cheks if the number befor is bigger or the one after is smaler
		if ((n[i]>n[i+1]||n[i]<n[i-1])&&n[i+1]!='\0')
		{
			return false;
		}
	}
	return true;
}

int main() {
	//varibals
	cout << "numbers to check";
	int b;
	cin >> b;
	int *a = new int[b];
	for (int i = 0; i < b; i++)
	{
		printf("arry value %i: ", i+1);
		scanf_s("%d", &a[i]);

	}
	//prints the result
	if (is_sorted(a,b) == 1) {
		cout << "True";
	}
	else if (is_sorted(a,b)==0)
	{
		cout << "False";
	}
	delete a;
	system("pause");
}
