#include <iostream>
#include <array>
#include <stdio.h>

using namespace std;

bool is_sorted(int n[]) {
	for (int i = 1;i< (sizeof(n));i++)
	{
		printf("n %i, n+1 %i, n-1 %i \n", n[i], n[i + 1], n[i - 1]);
		if (n[i]>n[i+1]||n[i]<n[i-1] && n[i]!='\0')
		{
			
			cout << "false"<<endl;
			return false;
		}
	}
	cout<<"true"<<endl;
	return true;
}

int main() {
	//andvänd en array av ints och scanf_s
	int b;
	cin >> b;
	int *a = new int[b];
	for (int i = 0; i < b; i++)
	{
		printf("arry value %i: ", i+1);
		scanf_s("%d", &a[i]);

	}
	//int b;
	//cin >> b;
	//char *a = new char[b];
	//scanf_s("%c", a, b);

	//for (int i = 0; i < sizeof(a); i++)
	//{
	//	cout << a[i] << endl;
	//}
	is_sorted(a);
	//cout<<is_sorted(a,l)<<endl;
	system("pause");

}
