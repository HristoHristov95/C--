#include<iostream>
using namespace std;
//#2
class base
{
	int x;
public:
	void setx(int n){ x = n; }
	void showx(){ cout << x << "\n"; }
};
class derived :public base
{
	int y;
public:
	void sety(int n){ y = n; }
	void showy(){ cout << y << "\n"; }
};
