#include<iostream>
using namespace std;
template<class variable>void summarizing(variable &a,int &sum,int size)
{
	int managing=0;
	for (int i = 0; i < size; i++)
	{
		managing = managing + a[i];
	}
	sum = managing;
}
int main4()
{
	int obj[] = { 1, 5, 63, 34, 88, 34 };
	int sum;
	summarizing(obj, sum,6);
	cout << "The result is : " << sum << '\n';
	return 0;
}