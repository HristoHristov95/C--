#include<iostream>
using namespace std;
class planet{
protected:
	double distance;
	int revolve;
public:
	planet(double a, int b){ distance = 1; revolve = b; }
};
class earth :public planet{
	double circumference;
public:
	earth(double d, int r) :planet(d, r){
		circumference = 2 * r*3.1416;
	}
	friend ostream &operator<<(ostream &stream, earth &obj);
};
ostream &operator<<(ostream &stream, earth &obj)
{
	stream << "Distance from sun: " << obj.distance << "\n";
	stream << "Days in orbit: " << obj.revolve << '\n';
	stream << "Circumference of orbit: " << obj.circumference << '\n';
	return stream;
}
int main()
{
	earth ob(93000000, 365);
	cout << ob;
	return 0;
}