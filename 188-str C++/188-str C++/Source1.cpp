#include<iostream>
#include<Windows.h>
using namespace std;
void myclreol(int ox=0,int oy=0)
{
	POINT p;
	GetCursorPos(&p);
	int x = (int)p.x;
	int y = (int)p.y;
	cout << "The x is : " << x<<"\n";
	cout << "The y is : " << y <<"\n";
}
int main()
{
	int x = 150,y=250;
	myclreol(x,y);
	return 0;
}