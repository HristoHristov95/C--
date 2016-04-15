#include<iostream>
using namespace std;
void order(int &x, int &y)
{
	int swap;
	if (x > y)
	{
		swap = y;
		y = x;
		x = swap;
	}
}
int main1()
{
	int x, y;
	cout << "Please enter X : \n";
	cin >> x;
	cout << "Please enter Y : \n";
	cin >> y;
	cout << "The X was " << x<<"\n";
	cout << "The Y was " << y << "\n";
	order(x, y);
	cout << "now the X is " << x<<"\n";
	cout << "now the Y is " << y << "\n";
	return 0;
}