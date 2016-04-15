#include<iostream>
using namespace std;
//#1
/*float f(float i)
{
	return i / 2.0;
}
double f(double i)
{
	return i / 3.0;
}
int main()
{
	float x = 10.09;
	double y = 10.09;
	cout << f(x);;
	cout << f(y);
	cout << f(10);
	return 0;
}*/

//#2
/*void f(unsigned char c)
{
	cout << c;
}
void f(char c)
{
	cout << c;
}
int main()
{
	f('c');
	f(86);
	return 0;
}*/
//#3
/*int f(int a, int b)
{
	return a + b;
}
int f(int a, int &b)
{
	return a - b;
}
int main()
{
	int x = 1, y = 2;
	cout << f(x, y);
	return 0;
}*/
//#4
int f(int a)
{
	return a*a;
}
int f(int a, int b = 0)
{
	return a*b;
}
int main()
{
	cout << f(10, 2);
	cout << f(10);
	return 0;
}