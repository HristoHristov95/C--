#include<iostream>
using namespace std;
template<class X1, class X2>int getxp(X1 &a, X2 b)
{
	int i;
	X1 obj=1;
	for (i = 0; i < b; i++)
	{
		obj = obj*a;
	}
	return obj;
}
int main1()
{
	int ret;
	int a = 5,b=2;
	ret= getxp(a, b);
	cout << "The result: " << ret << '\n';
	return 0;
}