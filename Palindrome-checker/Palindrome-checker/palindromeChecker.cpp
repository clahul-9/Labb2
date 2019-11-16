#include <iostream>
#include<array>
#include<stdio.h>

bool is_palindrome(char n[],int s) {	int m = s / 2;	for(int i = 0 ; i <= m; i++)
	{
		for (int j = s;j > m; j--)
		{
			if (n[i]!=n[j])
			{
				return false;
			}
		}
		return true;
	}}int main() {
	char a[100];	printf("enter a world");	scanf_s("%99s", a, sizeof(a));	sizeof}