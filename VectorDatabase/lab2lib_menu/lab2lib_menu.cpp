#include "pch.h"
#include <iostream>
#include"lab2lib.h"


int main()
{
	int c,x=0;
    std::cout << "Hello World!\n"; 
	std::cin >> c;
	while (x==0)
	{
		switch (c)
		{
		case 1:
			task1();
			break;
		case 2:
			task2();
			break;
		case 3:
			task3();
			break;
		case 4:
			task4();
			break;
		case 5:
			task5();
			break;
		case 6:
			task6();
			break;
		case -1:
			x = 1;
			break;
		default:
			std::cout << "Sorry, there is no such task!" << std::endl;
			break;
		}
	}
}
