#include<iostream>
using namespace std;
int main3()
{
	cout.width(20);
	cout.setf(ios::left);
	cout.fill('*');
	cout << 1000.5364;
	cout << '\n';
	return 0;
}