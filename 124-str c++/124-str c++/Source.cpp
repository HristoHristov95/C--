#include<iostream>
using namespace std;
class planet
{
	int moons;
	double dist_from_sun;
	double diameter;
	double mass;
public:
	planet(int a){ dist_from_sun = a; }
	double get_miles() { return dist_from_sun; }
};
double light(planet *a)
{
	int promenliva;
	promenliva=a->get_miles();
	int kraen_rezultat;
	kraen_rezultat = 92957000 / 186000;
	return kraen_rezultat;;
}
int main1()
{
	double sec;
	planet ob1(100);
	sec=light(&ob1);
	cout << "The result is : " << sec << "\n";
	return 0;
}