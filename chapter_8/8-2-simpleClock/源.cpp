#include"Clock.h"
#include<Windows.h>
#include<iostream>
using namespace std;

int main()
{
	Clock c;
	while (1)
	{
		// c.addOneSecond();
		c.ShowTime();
		Sleep(1000);
	}

	return 0;
}