#include<iostream>
using namespace std;
template<class X>int seeking(X a,int size)
{
	int *temporarly;
	temporarly = new int[size];
	if (!temporarly)
	{
		cout << "Allocating memory error\n";;
	}
	for (int i = 0; i < size; i++)
	{
		temporarly[i] = 0;
	}
	for (int i = 0; i < size; i++)
	{
		for (int k = 0; k < size; k++)
		{
			if (a[i] == a[k])
			{
				temporarly[i]++;
			}
		}
	}
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int k = 0; k < size; k++)
		{
			if (temporarly[i]>temporarly[k])
			{
				temp = i;
			}
		}
	}
	return a[temp];
}
int main3()
{
	int ob[15] = { 1, 5, 7, 2, 7, 8, 7, 1, 2, 7, 7, 8, 9, 6, 7 };
	int returnedValue;
	returnedValue=seeking(ob,15);
	cout << "The most seen value is: " << returnedValue << '\n';
	return 0;
}