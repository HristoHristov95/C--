#include<iostream>
#include<cstdlib>
using namespace std;
class array
{
	int size;
	char *p;
public:
	array(int a,int b);
	~array(){ delete[] p;}
	char &put(int i);
	char get(int i);
};
array::array(int a,int b)
{
	p = new char[a*b];
	if (!p)
	{
		cout << "Allocatin memory error";
		exit(1);;
	}
	size = a*b;
}
char &array::put(int i)
{
	if (i < 0 || i >= size)
	{
		cout << "Boundaries error\n";
		exit(1);
	}
	return p[i];
}
char array::get(int i)
{
	if (i < 0 || i >= size)
	{
		cout << "Boundaries error";
		exit(1);
	}
	return p[i];
}
int main1()
{
	array ob[2][3] = { array(6, 2), array(6, 2), array(6, 2), array(6, 2), array(6, 2), array(6, 2) };
	ob[0][0].put(3) = 'S';
	cout << ob[0][0].get(3) << "\n";
	ob[1][1].put(13) = '!';
	return 0;
}