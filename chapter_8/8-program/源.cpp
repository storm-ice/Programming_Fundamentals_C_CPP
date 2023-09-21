#include<iostream>
#include"Triangle.h"
using namespace std;

int main()
{
	float x, y, z;
	cin >> x >> y >> z;
	CTriangle triangle(x, y, z);
	cout << triangle.getArea() << endl;
	cout << triangle.getPrimeter() << endl;
	triangle.display();
	cout<<"Hello"<<endl;
	return 0;
}