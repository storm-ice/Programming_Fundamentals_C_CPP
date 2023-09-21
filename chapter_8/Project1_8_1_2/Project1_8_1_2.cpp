#include<iostream>
using namespace std;

class Location
{
public:
	int x, y;
	void init(int initX, int initY)
	{
		x = initX;
		y = initY;
	}
	int GetX()
	{
		return x;
	}
	int GetY()
	{
		return y;
	}

};

void display(Location &rL)
{
	cout << rL.GetX() << "" << rL.GetY() << endl;
}

int main()
{
	Location A[5] = { {0,0},{1,1},{2,2},{3,3},{4,4} };
	Location* rA = A;
	A[3].init(5,3);
	rA->init(7, 8);
	for (int i = 0; i < 5; i++)
	{
		display(*(rA++));
	}
	cout << "hello" << endl;
	return 0;
}
