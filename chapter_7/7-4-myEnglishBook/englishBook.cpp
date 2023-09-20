#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream book;
	char name[] = "myBook.txt";
	const int nrol = 3;
	char str[80], strBook[100][80], c = 'y';
	int i = 0, j, k;

	book.open(name);
	while (book.getline(str,80))
	{
		strcpy_s(strBook[i++], str);
	}
	k = 0;
	while (c!='q')
	{
		system("cls");

		for ( j = 0; j < nrol&&k<i; ++j,++k)
		{
			cout << strBook << endl;
			if (k >= i)
			{
				break;
			}
		}
		cin.get() >> c;
	}
}