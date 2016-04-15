#include<iostream>
using namespace std;
template<class X>void sorting(X &arr, int size)
{
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int k = 0; k < size; k++)
		{
			if (arr[i]>arr[k])
			{
				temp = arr[k];
				arr[k] = arr[i];
				arr[i] = temp;
			}
		}
	}
}
int main5()
{
	int a[] = { 1, 7, 4, 9, 3, 4, 2, 6 };
	sorting(a,8);
	for (int i = 0; i < 8; i++)
	{
		cout << "Element #" << i << " is : " << a[i] << '\n';
	}
	return 0;
}