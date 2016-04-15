#include<iostream>
using namespace std;
class a_type
{
	double a, b;
public:
	a_type(double x, double y){ a = x; b = y; }
	void show(){ cout << a << ' ' << b << "\n"; }
};
int main2()
{
	a_type ob[2][5] = { a_type(4, 3), a_type(4, 3), a_type(4, 3), a_type(4, 3), a_type(4, 3), a_type(4, 3), a_type(4, 3), a_type(4, 3), a_type(4, 3), a_type(4, 3) };
	a_type(*p)[5];
	p = ob;
	(*p)[1].show();
	return 0;
}