#pragma once
class Clock
{
public:
	Clock();
	~Clock();
	int h, m, s;

	Clock(int h, int m, int s);
	Clock(Clock& c);

	void SetTime(int h, int m, int s);
	void GetTime(int h, int m, int s);
	void ShowTime();
	void addOneSecond();
};

