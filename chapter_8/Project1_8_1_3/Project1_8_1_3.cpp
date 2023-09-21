#include<iostream>
using namespace std;

class Test
{
private:
	static int val;
	int a;
public:
	static int func();
	void sfunc(Test& r);
};





int Test::val = 200;

int Test::func()
{
	return val++;
}

void Test::sfunc(Test& r)
{
	r.a = 125;
	cout << "Result3=" << r.a << endl;
}

int main()
{
	cout << "Result=" << Test::func() << endl;
	Test a;
	cout << "Result2=" << a.func() << endl;
	a.sfunc(a);

	cout << "Hello" << endl;

	return 0;
}