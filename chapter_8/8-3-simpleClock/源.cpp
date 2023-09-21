#include"Clock.h"
#include<Windows.h>
#include<iostream>
using namespace std;

int main()
{
	Clock c1, c2(2, 3, 4);
	while (1)
	{
		system("cls");
		c1.addOneSecond();
		c1.ShowTime();
		c2.addOneSecond();
		c2.ShowTime();
		Sleep(1000);
	}

	return 0;
}