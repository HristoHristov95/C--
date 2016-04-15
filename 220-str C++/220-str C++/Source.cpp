#include<iostream>
using namespace std;
class coord
{
	int x, y;
public:
	coord(){ x = 0; y = 0; }
	coord(int i, int j){ x = i; y = j; }
	void get_xy(int &i, int &j){ i = x; j = y; }
	friend coord operator-(coord ob,coord ob1);
	friend coord operator/(coord ob1,coord ob2);
};
coord operator-(coord ob,coord ob1)
{
	coord temp;
	temp.x = ob.x - ob1.x;
	temp.y = ob.y - ob1.y;
	return temp;
}
coord operator/(coord ob1, coord ob2)
{
	coord temp;
	temp.x = ob1.x / ob2.x;
	temp.y = ob1.y / ob2.y;
	return temp;
}
int main1()
{
	int x, y;
	coord ob(10, 10), ob1(20, 20), ob3;
	ob3 = ob - ob1;
	ob3.get_xy(x, y);;
	cout << x << "\n";
	cout << y << "\\n";
	return 0;
}
