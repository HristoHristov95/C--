#include<iostream>
using namespace std;
//#3
class base
{
	int x;
public:
	void setx(int n){ x = n; }
	void showx(){ cout << x << "\n"; }
};
class derived :private base
{
	int y;
public:
	void sety(int n){ y = n; }
	void showy(){ cout << y << "\n"; }
};
int main2()
{
	derived ob;
	//ob.setx(10);
	ob.sety(20);
	//ob.showx();
	ob.showy();
	return 0;
}