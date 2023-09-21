#include<iostream>
using namespace std;

class Con
{
	char ID;
public:
	char getID() const { return ID; }
	Con() :ID('A') { cout << 1 << endl; }
	Con(char ID) :ID(ID) { cout << 2 << endl; }
	Con(Con& c) :ID(c.getID()) { cout << 3 << endl; }
};

void show(Con c)
{
	cout << c.getID() << endl;
}

int main()
{
	Con c1;
	show(c1);
	Con c2('B');
	show(c2);

	cout << "Hello" << endl;

	return 0;
}