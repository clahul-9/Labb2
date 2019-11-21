#include <iostream>
#include<array>
#include<stdio.h>

bool is_palindrome(char n[]) {
	int s = 0;

	for (int i = 0;; i++)
	{
		s = i;
		if (n[i] == '\0') {
			break;
		}
	}

	for (int j = 0; j < s; j++)
	{
		if (n[j]!=n[(s-1)-j])
		{
			return false;
		}
	}
	return true;
}

int main() {
	char a[100];
	printf("enter a world: ");
	scanf_s("%99s", a, sizeof(a));

	if (is_palindrome(a)==0)
	{
		printf_s("FALSE \n");
	}
	else if (is_palindrome(a)==1)
	{
		printf_s("TRUE \n");
	}

	system("pause");
}