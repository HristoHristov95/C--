#include<iostream>
using namespace std;
class planet{
protected:
	double distance;
	int revolve;
public:
	planet(double d, int r){ distance = d; revolve = r; }
};
class earth :public planet{
	double circumference;
public:
	earth(double d, int r) :planet(d, r){
		circumference = 2 * r*3.1416;
	}
	void show_earth(){ cout << "The distance is :" << distance << ' ' << "The Revolve is : " << revolve << ' ' << "The Circumference is : " << circumference << "\n"; }
};
int main2()
{
	earth ob(93000000, 365);
	ob.show_earth();
	return 0;
}