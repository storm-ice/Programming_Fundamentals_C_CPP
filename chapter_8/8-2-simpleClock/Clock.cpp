#include "Clock.h"
#include <iostream>
using namespace std;

void Clock::SetTime(int h, int m, int s)
{
	this->h = h;
	this->m = m;
	this->s = s;
}

Clock::Clock()
{
	h = m = s = 0;
}

Clock::Clock(int h, int m, int s)
{
	this->h = h;
	this->m = m;
	this->s = s;
}

Clock::Clock(Clock &c)
{
	h = c.h;
	m = c.m;
	s = c.s;
}

Clock::~Clock()
{

}

void Clock::ShowTime()
{
	cout << h << ":" << m << ":" << s << endl;
}


void Clock::GetTime(int h, int m, int s)
{
	h = this->h;
	m = this->m;
	s = this->s;
}

void Clock::addOneSecond()
{
	s++;

	if (s>=60)
	{
		m++;
		s = 0;
		if (m>=60)
		{
			m = 0;
			h++;
			if (h>=12)
			{
				h = 0;
			}
		}
	}
}