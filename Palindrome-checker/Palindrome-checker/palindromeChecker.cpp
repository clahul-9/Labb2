#include <iostream>
#include<array>
#include<stdio.h>

bool is_palindrome(char n[],int s) {
	int m = s / 2;
	printf("s: %i m: %i \n",s,m);
	for(int i = 0 ; i <= m; i++)
	{
		for (int j = s-1;j > m; j--)
		{
			printf("i:%i %c j:%i %c \n",i, n[i],j, n[j]);
			if (n[i]!=n[j])
			{
				return false;
			}
		}
	}
	return true;
}

int main() {
	char a[100];
	printf("enter a world: ");
	scanf_s("%99s", a, sizeof(a));
	int l=0;
	for (auto e:a)
	{
		//printf("%c", e);
		if (e=='\0')
		{
			break;
		}
		l++;
	}

	std::cout<<"\n"<<is_palindrome(a, l)<<std::endl;

	system("pause");
}