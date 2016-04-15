#include<iostream>
using namespace std;
class coord
{
	int x, y;
public:
	coord(){ x = 0; y = 0; }
	coord(int i, int j){ x = i; y = j; }
	void get_xy(int &i, int &j){ i = x; j = y; }
	coord operator--(int notused);
	coord operator--();
};
coord coord::operator--(int notused)
{
	x--;
	y--;
	return *this;
}
coord coord::operator--()
{
	--x;
	--y;
	return *this;
}
int main1()
{
	int x, y;
	coord ob1(10, 10), ob2(10, 10), ob3;
	ob1 = --ob1; ob1.get_xy(x, y); cout << x << "\n";
	ob2 = ob2--; ob2.get_xy(x, y); cout << x << "\n";
	return 0;
}

