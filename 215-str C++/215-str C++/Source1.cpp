#include<iostream>
using namespace std;
class coord
{
	int x, y;
public:
	coord(){ x = 0; y = 0; }
	coord(int i, int j){ x = i; y = j; }
	void get_xy(int &i, int &j){ i = x; j = y; }
	coord operator+(coord ob2);
	coord operator+();
};
coord coord::operator+(coord ob2)
{
	coord temp;
	temp.x = x + ob2.x;
	temp.y = y + ob2.y;
	return temp;
}
coord coord::operator+()
{
	if (x < 0)
	{
		x = -x;
	}
	if (y < 0)
	{
		y = -y;
	}
	x = x;
	y = y;
	return *this;
}
int main()
{
	int x, y;
	coord ob1(-10,- 10), ob2(10, 10), ob3;
	ob1 = +ob1;
	ob1.get_xy(x, y);
	cout << x << "\n";
	cout << y << "\n";
	return 0;
}

