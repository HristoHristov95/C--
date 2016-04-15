#include<iostream>
using namespace std;
template<class X>int min(X a, X b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int main2()
{
	int returnedValue;
	returnedValue = min(10, 5);
	cout << "#1: " << returnedValue << endl;
	returnedValue = min(3, 4);
	cout << "#2: " << returnedValue << endl;
	char c;
	returnedValue = min('c', 'a');
	c = returnedValue;
	cout << "#3:" << c << endl;
	return 0;
}