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
	friend array operator+(array obj2,array obj3);
	friend array operator-(array obj2,array obj3);
	friend int operator==(array ob2,array obj3);
	friend array operator++(array &obj,int notused);
	friend array operator--(array &obj, int notused);
};
array operator++(array &obj, int notused)
{
	for (int i = 0; i < 10; i++)
	{
		obj.nums[i]++;
	}
	return obj;
}
array operator--(array &obj, int notused)
{
	for (int i = 0; i < 10; i++)
	{
		obj.nums[i]++;
	}
	return obj;
}
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
array operator+(array obj2,array obj3)
{
	array temp;
	for (int i = 0; i < 10; i++)
	{
		temp.nums[i] = obj3.nums[i] + obj2.nums[i];
	}
	return temp;
}
array operator-(array obj2,array obj3)
{
	array temp;
	for (int i = 0; i < 10; i++)
	{
		temp.nums[i] = obj3.nums[i] - obj2.nums[i];
	}
	return temp;
}
int operator==(array obj2,array obj3)
{
	char integers[10];
	char integers1[10];
	int retValue = 11;
	for (int i = 0; i < 10; i++)
	{
		integers[i] = obj3.nums[i] + '0';
		integers1[i] = obj2.nums[i] + '0';
	}
	retValue = strncmp(integers, integers1, 10);
	if (retValue == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	array ob, ob1, ob2;
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 1 };
	int b[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 1 };
	int retValue;
	int c[10] = { 5, 4, 3, 2, 1, 6, 7, 8, 9, 1 };
	ob.set(a);
	ob1.set(b);
	ob2.set(c);
	retValue = (ob == ob1);
	cout << retValue << "\n";
	ob++;
	ob.show();
	return 0;
}