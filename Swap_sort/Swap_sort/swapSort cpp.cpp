#include<iostream>
#include<stdio.h>

using namespace std;
void swap_sort(int &a,int &b,int &c,bool order){
	int n[] = {a,b,c};
	cout << order << endl;
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
				//printf("före n0: %i, n1: %i \n", n[i], n[i + 1]);
				int d = n[i];
				n[i] = n[i + 1];
				n[i + 1] = d;
				//printf("efter n0: %i, n1: %i \n", n[i], n[i + 1]);
				//system("pause");
				if (n[i + 1] < 0)
				{
					break;
				}
			}
		}
	}
	printf("\nResult: ");
	for (auto e : n)
	{
		cout << e;
	}

}

int main() {
	int a=1;
	do
	{
		printf("\nGive a (0 to quit): ");
		cin >>a;
		if (a != 0)
		{
			printf("Give b: ");
			int b;
			cin>>b;

			printf("Give c: ");
			int c=0;
			cin >> c;

			printf("Sort ascending/descending (1/0): ");
			bool o=0;
			cin >> o;

			swap_sort(a, b, c,o);
		}

	} while (a!=0);
}