#include<iostream>
using namespace std;



int main()
{
	// cout << "hello" << endl;

	float x[8] = { 0 };
	float aver(0), max(0), min(0);

	for (int i = 0; i < 8; ++i)
	{
		cin >> x[i];
		
		if (max< x[i])
		{
			max = x[i];
		}
		
		if (min>x[i])
		{
			min = x[i];
		}

		aver += x[i];
		cout << x[i] << endl;
	}

	aver = (aver - max - min) / 6;

	cout << aver << endl;

	return 0;
}