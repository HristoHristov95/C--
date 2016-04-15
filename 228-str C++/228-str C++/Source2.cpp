#include<iostream>
using namespace std;
class coord
{
	int x, y;
public:
	coord(int i = 0, int j = 0){ x = i, y = j; }
	void get_xy(int i, int j){ x = i, y = j; }
	void show(){ cout << x << "\n"; cout << y << "\n";}
	friend coord &operator<<(coord &obj,int i);
	friend coord &operator>>(int i,coord &obj);
};
coord &operator<<(coord &obj,int i)
{
	cout << "The number is : " << i << "\n";
	return obj;
}
coord &operator>>(coord &obj,int i)
{
	int x, y;
	x = i;
	y = i;
	obj.get_xy(x, y);
	return obj;
}
int main3()
{
	coord obj(10, 10), obj1(20, 20);
	obj << 15;
	obj >> 25;
	obj.show();
	return 0;
}