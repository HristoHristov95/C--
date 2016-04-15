#include<iostream>
using namespace std;
class planet
{
	int moons;
	double dist_form_sun;
	double diameter;
	double mass;
public:
	int a1(int a);
};
class mars :public planet
{
	int a;
public:
	void gaze(int a);
};
void mars::gaze(int ab)
{
	a = ab;
	cout << "The value of a is : " << a << "\n";
}
int planet::a1(int a)
{
	moons = a;
	cout << "Moons is : " << moons<<"\n";
	return moons;
}
int main2()
{
	mars aa1;
	aa1.gaze(20);
	aa1.a1(30);
	return 0;
}