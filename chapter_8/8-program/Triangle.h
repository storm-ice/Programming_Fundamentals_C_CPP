#pragma once
class CTriangle
{
	float a, b, c;
public:
	CTriangle(float aa,float bb, float cc);
	CTriangle(CTriangle& c);
	~CTriangle();

	float getPrimeter();
	float getArea();
	void display();
};

