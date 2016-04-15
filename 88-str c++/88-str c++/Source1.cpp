#include<iostream>
using namespace std;
int main()
{
	union
	{
		int a;
	};
	a = 32768;
	a = a >> 12;
	cout << "The shifted value is : " << a;
	return 0;
}
