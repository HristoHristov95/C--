#include<iostream>
#include<vector>
using namespace std;
class Coord{
public:
	int x, y;
	Coord(){ x = y = 0; }
	Coord(int a, int b){ x = a; y = b; }
	Coord &operator=(int i);
};
Coord &Coord::operator=(int i)
{
	x = y = i;
	return *this;
}
bool operator<(Coord a, Coord b)
{
	return a.x < b.x;
}
bool operator==(Coord a, Coord b)
{
	return a.x == b.x;
}
int main()
{
	vector<Coord> v;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		v.push_back(Coord(i, 1));
	}
	for (i = 0; i < v.size(); i++)
	{
		cout << v[i].x << ' ';
	}
	cout << endl;
	for (i = 0; i < v.size(); i++)
	{
		cout << v[i].y << ' ';
	}
	return 0;
}