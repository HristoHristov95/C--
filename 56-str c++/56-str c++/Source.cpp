#include<iostream>
using namespace std;
int main1()
{
	int a, b,c=1;
	cout << "Please enter 2 numbers for a and for b : " << "\n";
	cin >> a >> b;
	for (int i = 0; i < b; i++)
	{
		c = c*a;
	}
	cout << "The result is : " << c << "\n";
	return 0;
}