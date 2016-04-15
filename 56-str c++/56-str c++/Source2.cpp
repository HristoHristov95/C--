#include<iostream>
using namespace std;
int f(int a);
int main()
{
	printf("%d", f(10));
	return 0;
}
int f(int a)
{
	return a*3.1416;
}