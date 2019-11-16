#include <iostream>
#include <array>
#include <stdio.h>

using namespace std;

bool is_sorted(int n[],int l) {
	for (int i = 1;i< (l-1);i++)
	{
		if (n[i]>n[i+1]||n[i]<n[i-1])
		{
			
			cout << "false"<<endl;
			return false;
		}
	}
	cout<<"true"<<endl;
	return false;
}

int main() {
	//andvänd en array av ints och scanf_s
	int a[100] ;
	scanf_s["%99d", a, sizeof(a)];
	int l = sizeof(a) / sizeof(a[0]);
	is_sorted(a, l);
	//cout<<is_sorted(a,l)<<endl;
	system("pause");


}