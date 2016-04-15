#include<iostream>
using namespace std;
class vehicle{
	int num_wheels;
	int range;
public:
	vehicle(int w, int r)
	{
		num_wheels = w; range = r;
	}
	void showv()
	{
		cout << "Wheels: " << num_wheels << '\n';
		cout << "Range: " << range << '\n';
	}
};
class car :public vehicle{
	int passengers;
public:
	car(int passen,int i, int j) :vehicle(i, j){
		passengers = passen;
	}
	void show()
	{
		showv();
		cout << "Passengers: " << passengers << '\n';
	}
};
class truck :public vehicle{
	int loadlimit;
public:
	truck(int a1, int a2, int a3) :vehicle(a2, a3)
	{
		loadlimit = a1;
	}
	void show()
	{
		showv();
		cout << "loadlimit " << loadlimit << '\n';
	}
};
int main()
{
	car c(5, 4, 500);
	truck t(30000, 12, 1200);
	cout << "Car: \n";
	c.show();
	cout << "\nTruck: \n";
	t.show();
	return 0;
}