#include<iostream>
using namespace std;
inline int abs(int n)
{
	cout << "In integer abs()\n";
	return n < 0 ? (-n) : n;
}
inline long abs1(long n)
{
	cout << "In long abs()\n";
	return n < 0 ? (-n) : n;
}
inline double abs2(double n)
{
	cout << "In double abs()\n";
	return n < 0 ? (-n) : n;
}
int main1()
{
	cout << "Absolute value of -10 : " << abs((-10)) << "\n";
	cout << "Absolute value of -10L :" << abs1((-10L)) << "\n";
	cout << "Absolute value of -10.01 : " << abs2((-10.01)) << "\n";
	return 0;
}