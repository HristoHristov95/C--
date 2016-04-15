#include<iostream>
#include<cmath>
using namespace std;
int main1()
{
	double x=0;
	for (int i = 2; i < 100; i++)
	{
		cout.width(10);
		cout.precision(5);
		cout.setf(ios::right);
		x=log((double)i);
		cout << x << '\n';
		x = log10((double)x);
		cout.width(10);
		cout.precision(5);
		cout.setf(ios::right);
		cout << x << '\n';
	}
	return 0;
}