#include<iostream>
using namespace std;
class coord
{
	int x, y;
public:
	coord(){ x = 0; y = 0; }
	coord(int i, int j){ x = i; y = j; }
	void get_xy(int &i, int &j){ i = x; j = y; }
	coord operator%(coord ob2);
};
coord coord::operator % (coord ob)
{
	double i;
	cout << "Enter number";
	cin >> i;
	cout << "Root of :" << i << " is ";
	cout << sqrt(i);
}
int main1()
{
	int x, y;
	coord ob1(10, 10), ob2(20, 20), ob3;
	ob3 = ob1%ob2;
	ob3.get_xy(x, y);
	cout << x << "\n";
	cout << y << "\n";
	return 0;
}