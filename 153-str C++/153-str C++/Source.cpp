#include<iostream>
using namespace std;
/*void neg(int &a)
{
	a = -a;
}
int main()
{
	int value=10;
	neg(value);
	cout << value<<"\n";
	return 0;
}*/
void neg(int *k)
{
	*k = -*k;
}
int main1()
{
	int value = 99;
	neg(&value);
	cout << value<<"\n";
	return 0;
}