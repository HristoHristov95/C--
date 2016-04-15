#include<iostream>
using namespace std;
class dynarray
{
	int *p;
	int size;
public:
	dynarray(int s){ size = s; p = new int[size]; }
	dynarray operator=(dynarray &ob);
	int &operator[](int i);
};
int &dynarray::operator[](int i)
{
	if (size < i)
	{
		cout << "Exceeding boundaries!\n";
		exit(1);
	}
	else
	{
		return p[i];
	}
}
dynarray dynarray::operator=(dynarray &ob)
{
	if (size < ob.size)
	{
		p = new int[ob.size];
		if (!p)
		{
			cout << "Allocating error \n";
			exit(2);
		}
	}
	size = ob.size;
	for (int i = 0; i<size; i++)
	{
		p[i] = ob.p[i];
	}
	return *this;
}
int main2()
{
	dynarray obj(10), obj1(20);
	obj[1] = 1;
	obj[2] = obj[1] + 1;
	cout << "Obj[1]: " << obj[1]<<"\n";
	cout << "Obj[2]: " << obj[2]<<"\n";
	return 0;
}