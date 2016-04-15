#include<iostream>
using namespace std;
class coord
{
	int x, y;
public:
	coord(){ x = 0; y = 0; }
	coord(int i, int j){ x = i; y = j; }
	void get_xy(int &i, int &j){ i = x; j = y; }
	friend coord operator--(coord &ob);
	friend coord operator--(coord &ob,int notused);
};
coord operator--(coord &ob)
{
	--ob.x;
	--ob.y;
	return ob;
}
coord operator--(coord &ob, int notused)
{
	cout << notused << "\n";
	ob.x--;
	ob.y--;
	return ob;
}
int main()
{
	int x, y;
	coord ob1(10, 10), ob2(10, 10);
	--ob1; ob1.get_xy(x, y); cout << x << "\n";
	ob2--; ob2.get_xy(x, y); cout << x << "\n";
	
	return 0;
}