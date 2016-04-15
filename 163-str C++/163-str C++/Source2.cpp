#include<iostream>
using namespace std;
void receipt(double &d)
{
	d = 1 / d;
}
int main3()
{
	double a;
	a = 5.5;
	receipt(a);
	cout << a;
	return 0;
}