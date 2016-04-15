#include<iostream>
using namespace std;
int &c;
int &f()
{
	c = 10;
	return c;
}
int main()
{
	int *x;
	x = f();
	return 0;
}