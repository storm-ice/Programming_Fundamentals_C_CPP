#include "Triangle.h"
#include<iostream>
using namespace std;

CTriangle::CTriangle(float aa, float bb, float cc)
{
	a = aa;
	b = bb;
	c = cc;
}

CTriangle::CTriangle(CTriangle& newc)
{
	a = newc.a;
	b = newc.b;
	c = newc.c;
}

CTriangle::~CTriangle()
{
}

float CTriangle::getPrimeter()
{
	if (a <= 0 || b <= 0 || c <= 0)
	{
		cout << "no triangle" << endl;
		return 0;
	}
	if ((a + b) < c || (a + c) < b || (b + c) < a)
	{
		cout << "no triangle" << endl;
		return 0;
	}
	return (a+b+c);
}

float CTriangle::getArea()
{
	if (a <= 0 || b <= 0 || c <= 0)
	{
		cout << "no triangle" << endl;
		return 0;
	}
	if ((a + b) < c || (a + c) < b || (b + c) < a)
	{
		cout << "no triangle" << endl;

	float s = (a + b + c) / 2;

	return sqrt(s * (s - a) * (s - b) * (s - c));
}

void CTriangle::display()
{
	cout << "a:" << a << "b:" << b << "c:" << c << endl;
}
