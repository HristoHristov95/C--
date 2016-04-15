#include<iostream>
#include<string.h>
using namespace std;
class array
{
	int nums[10];
public:
	array();
	void set(int n[10]);
	void show();
};
	/*array operator+(array obj2);
	array operator-(array obj2);
	int operator==(array ob2);
};
array::array()
{
	int i;
	for (i = 0; i < 10; i++)
	{
		nums[i] = 0;
	}
}
void array::set(int *n)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		nums[i] = n[i];
	}
}
void array::show()
{
	int i;
	for (i = 0; i < 10; i++)
	{
		cout << nums[i] << " ";
	}
	cout << "\n";
}
array array::operator+(array obj2)
{
	array temp;
	for (int i = 0; i < 10; i++)
	{
		temp.nums[i] = nums[i] + obj2.nums[i];
	}
	return temp;
}
array array::operator-(array obj2)
{
	array temp;
	for (int i = 0; i < 10; i++)
	{
		temp.nums[i] = obj2.nums[i] - nums[i];
	}
	return temp;
}
int array::operator==(array obj2)
{
	char integers[10];
	char integers1[10];
	int retValue=11;
	for (int i = 0; i < 10; i++)
	{
		integers[i] = nums[i] + '0';
		integers1[i] = obj2.nums[i] + '0';
	}
	retValue = strncmp(integers, integers1,10);
	if (retValue == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}*/
int main1()
{
	array ob, ob1,ob2;
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 1 };
	int b[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 1 };
	int retValue=1;
	int c[10] = { 5, 4, 3, 2, 1, 6, 7, 8, 9, 1 };
	ob.set(a);
	ob1.set(b);
	ob2.set(c);
//	retValue = (ob == ob1);
	cout << retValue << "\n";
	return 0;
}