#include<iostream>
using namespace std;
void f(const double *i)
{
	double *k;
	k = const_cast<double*>(i);
	*k = 100;
}
int main1()
{
	double x = 98.6;
	cout << x << endl;
	f(&x);
	cout << x << endl;
	return 0;
}
