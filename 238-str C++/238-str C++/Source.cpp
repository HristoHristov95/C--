#include<iostream>
using namespace std;
//#1
class base
{
	int x;
public:
	void setx(int n){ x = n; }
	void show(){ cout << x << "\n"; }
};
class derived :public base
{
	int y;
public:
	void sety(int n){ y = n; }
	void showy(){ cout << y << "\n"; }
};
int main1()
{
	derived ob;
	ob.setx(10);
	ob.sety(20);
	ob.show();
	ob.showy();
	return 0;
}