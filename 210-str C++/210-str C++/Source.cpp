#include<iostream>
using namespace std;
class coord
{
	int x, y;
public:
	coord(){ x = 0; y = 0; }
	coord(int i, int j){ x = i; y = j; }
	void get_xy(int &i, int &j){ i = x; j = y; }
	coord operator*(coord ob2);
	coord operator/(coord ob2);
};
coord coord::operator*(coord ob2)
{
	coord temp;
	temp.x = x*ob2.x;
	temp.y = y*ob2.y;
	return temp;
}
coord coord::operator/(coord ob2)
{
	coord temp;
	temp.x = x / ob2.x;
	temp.y = y / ob2.y;
	return temp;
}
int main1()
{
	coord ob1(10, 10), ob2(20, 20),ob3;
	ob3 = ob1*ob2;
	int x, y;
	ob3.get_xy(x, y);
	cout << "o1*o2:(X)" << x << "And the Y is :" << y<<"\n";
	ob3 = ob1 / ob2;
	ob3.get_xy(x, y);
	cout << "o1*o2:(X)" << x << "And the Y is :" << y << "\n";
	return 0;
}