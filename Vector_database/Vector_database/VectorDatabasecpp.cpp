#include <iostream>
#include<vector>
#include<stdio.h>
#include<string>

using namespace std;
vector<string> v;

void initialice() {
	v.clear();
}

void insert() {
	string c;
	int x=0;
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

void search() {
	string c;
	printf_s("Enter search term: ");
	cin >> c;
	int q=-1;
	for (auto e:v)
	{
		q=e.find(c);
		if (q>=0)
		{
			cout << e << endl;
			q = -1;
		}
	}
}

void delet() {
	string c;
	printf_s("Enter the term to delete: ");
	cin >> c;
	for (int i = 0; i < v.size(); i++)
	{
		if (c == v[i])
		{
			v.erase(v.begin()+i);
		}
	}
}

void print() {
	for (auto e : v)
	{
		cout << e << endl;
	}
}

int main() {
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
