#include<iostream>
using namespace std;
class coord
{
	int x, y;
public:
	coord(){ x = 0; y = 0; }
	coord(int i, int j){ x = i; y = j; }
	void get_xy(int &i, int &j){ i = x; j = y; }
	friend coord operator*(coord ob, int a);
	friend coord operator*(int a, coord ob);
};
coord operator*(int a, coord ob)
{
	coord temp;
	temp.x = a*ob.x;
	temp.y = a*ob.y;
	return temp;
}
coord operator*(coord ob, int a)
{
	coord temp;
	temp.x = ob.x * a;
	temp.y = ob.y*a;
	return temp;
}
int main2()
{
	int x, y;
	coord ob1(10, 10), ob2(20, 20), ob3;
	ob3 = 10 * ob1;
	ob3.get_xy(x, y);
	cout << x << "\n";
	cout << y << "\n";
	return 0;
}