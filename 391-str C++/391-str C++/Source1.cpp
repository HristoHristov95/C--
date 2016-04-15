#include<iostream>
using namespace std;
template<class X>X abs(X variable)
{
	if (variable < 0)
	{
		return -variable;
	}
	else
	{
		return variable;
	}
}
int main()
{
	int returnedValue1, returnedValue2;
	double returnedValue3;
	returnedValue1=abs(-10);
	cout << returnedValue1 << '\n';
	returnedValue2 = abs(10);
	cout << returnedValue2 << '\n';
	returnedValue3 = abs(-12.13);
	cout << returnedValue3 << '\n';
	return 0;
}