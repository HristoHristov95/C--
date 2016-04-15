#include<iostream>
using namespace std;
//primer #1
/*template<class X>void swapargs(X &a, X&b)
{
	X temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	int i = 10, j = 20;
	float x = 10.1, y = 23.3;
	cout << "Original i,j:" << i << ' ' << j << endl;
	cout << "Original x,y:" << x << ' ' << y << endl;
	swapargs(i, j);
	swapargs(x, y);
	cout << "Swaped i,j:" << i << ' ' << j << endl;
	cout << "Swapped x,y:" << x << ' ' << y << endl;
}*/
//primer #2
/*template<class type1, class type2>void myfunc(type1 x, type2 y)
{
	cout << x << ' ' << y << endl;
}
int main()
{
	myfunc(10, "hi");
	myfunc(0.23, 10L);
	return 0;
}*/
//primer #3
template<class X>void swapargs(X &a, X &b)
{
	X temp; 
	temp = a;
	a = b;
	b = temp;
}
void swapargs(int a, int b)
{
	cout << "this is inside swapargs(int,int)\n";
}
int main1()
{
	int i = 10, j = 20;
	float x = 10.1, y = 23.3;
	cout << "Original i,j" << i << ' ' << j << endl;
	cout << "Original x,y" << x << ' ' << y << endl;
	swapargs(i, j);
	swapargs(x, y);
	cout << "Swaped i,j: " << i << ' ' << j << endl;
	cout << "Swaped x,y: " << x << ' ' << y << endl;
	return 0;
}