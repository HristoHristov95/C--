#include<iostream>
using namespace std;
class box
{
	double a1;
	double a2;
	double a3;
	double rezultat;
public:
	box(double a,double b,double c);
	void vol();
};
box::box(double a,double b,double c)
{
	a1 = a;
	a2 = b;
	a3 = c;
}
void box::vol()
{
	rezultat = a1*a2*a3;
	cout << "Obema na figurata e : " << rezultat<<"\n";
}
int main()
{
	class box ob1(10,20,30),ob2(5,10,15);
	ob1.vol();
	ob2.vol();
	return 0;
}