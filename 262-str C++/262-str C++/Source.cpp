#include<iostream>
using namespace std;
class coord{
public:
	int x, y;
	coord(){ x = 0; y = 0; }
	coord(int i, int j){ x = i; y = j; }
	void get_xy(int &i, int &j){ i = x; j = y; }
	friend coord operator+(coord ob2,coord ob3);
	friend coord operator-(coord ob2,coord ob3);
	coord operator=(coord ob2);
};
coord operator+(coord ob2,coord ob3)
{
	coord temp;
	cout << "Using coord operator +.\n";
	temp.x = ob3.x + ob2.x;
	temp.y = ob3.y + ob2.y;
	return temp;
}
coord operator-(coord ob2,coord ob3)
{
	coord temp;
	cout << "Using coord operator -.\n";
	temp.x = ob2.x-ob3.x;
	temp.y = ob2.y-ob3.y;
	return temp;
}
coord coord::operator=(coord ob2)
{
	cout << "Using operator =.\n";
	x = ob2.x;
	y = ob2.y;
	return *this;
}
class quad :public coord{
	int quadrant;
public:
	quad(){ x = 0; y = 0; quadrant = 0; }
	quad(int x, int y) :coord(x, y)
	{
		if (x >= 0 && y >= 0)
		{
			quadrant = 1;
		}
		else if (x < 0 && y >= 0){ quadrant = 2; }
		else if (x < 0 && y < 0){ quadrant = 3; }
		else { quadrant = 4; }
	}
	void showq()
	{
		cout << "Point in quadrant: " << quadrant << '\n';
	}
	quad operator = (coord ob2);
};
quad quad::operator=(coord ob2)
{
	cout << "Using quad operator =.\n";
	x = ob2.x;
	y = ob2.y;
	if (x >= 0 && y >= 0){ quadrant = 1;}
	else if (x < 0 && y >= 0){ quadrant = 2; }
	else if (x < 0 && y < 0){ quadrant = 3; }
	else{ quadrant = 4; }
	return *this;
}
int main()
{
	quad o1(10, 10), o2(15, 3), o3;
	int x, y;
	o3 = o1 + o2;
	o3.get_xy(x, y);
	o3.showq();
	cout << "(o1+o2) X:" << x << " ,Y: " << y << "\n";
	o3 = o1 - o2;
	o3.get_xy(x, y);
	o3.showq();
	cout << "(o1+o2) X:" << x << " ,Y: " << y << "\n";
	o3 = o1;
	o3.get_xy(x, y);
	o3.showq();
	cout << "(o1+o2) X:" << x << " ,Y: " << y << "\n";
	return 0;
}