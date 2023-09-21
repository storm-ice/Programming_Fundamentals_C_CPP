#include<iostream>
using namespace std;


class MyClass
{
public:
	int number;
	void set(int i);
public:
	MyClass();
	~MyClass();

private:

};

int number = 3;

void MyClass::set(int i)
{
	number = i;
}

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}

int main()
{
	MyClass my1;
	int number = 10;
	my1.set(5);
	cout << my1.number << endl;
	my1.set(number);
	cout << my1.number << endl;
	my1.set(::number);
	cout << my1.number << endl;


	cout << "hello" << endl;
	return 0;
}


