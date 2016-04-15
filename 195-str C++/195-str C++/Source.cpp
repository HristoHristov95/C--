#include<iostream>
using namespace std;
int dif(int a, int b)
{
	return a - b;
}
float dif(float a, float b)
{
	return a - b;
}
int main1()
{
	int a;
	float b;
	int(*fptr)(int, int)=dif;
	float(*fptr1)(float, float)=dif;
	a=fptr(20, 10);
	b=fptr1(20, 15.5);
	cout << a << "\n";
	cout << b << "\n";
	return 0;
}