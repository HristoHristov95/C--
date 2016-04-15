#include<iostream>
using namespace std;
class dynarray
{
	int *p;
	int size;
public:
	dynarray(int s){ size = s; p = new int[size]; }
	int &put(int i);
	int get(int i){ return p[i]; }
	dynarray operator=(dynarray &ob);
};
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
int &dynarray::put(int i)
{
	if (size < i)
	{
		cout << "Exceeding memory\n";
		exit(2);
	}
	else
	{
		return p[i];
	}
}
int main()
{
	dynarray obj(10), obj1(20);
	obj.put(3) = 12;
	obj.put(9) = 13;
	for (int i = 0; i < 20; i++)
	{
		obj1.put(i) = 1;
	}
	obj1.put(15) = 22;
	obj1.put(19) = 11;
	obj1 = obj;
	for (int i = 0; i < 20; i++)
	{
		cout << obj1.get(i) << "\n";
	}
	return 0;
}