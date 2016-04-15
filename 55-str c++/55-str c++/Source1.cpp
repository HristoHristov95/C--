#include<iostream>
using namespace std;
int min(char *c, char *q)
{
	int stoinost1 = 0,stoinost2=0;
	stoinost1=atoi(c);
	stoinost2 = atoi(q);
	if (stoinost1 > stoinost2)
	{
		return stoinost1;
	}
	else
	{
		return stoinost2;
	}
}
int min(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
double min(double a, double b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int main3()
{
	int ret = 0, ret2 = 0;
	double ret3 = 0;
	ret=min("123","321");
	ret2=min(333,444);
	ret3=min(22.22,33.33);
	cout << "The string is :  " << ret<<"\n";
	cout << "The integer is :  " << ret2<<"\n";
	cout << "The double is :  " << ret3<<"\n";
	return 0;
}