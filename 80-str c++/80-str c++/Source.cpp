#include<iostream>
using namespace std;
class area_cl
{
public:
	double height;
	double width;
};
class rectangle : area_cl
{
public:
	rectangle(double a,double b);
	double area();
};
class isosceles :area_cl
{
public:
	isosceles(double a,double b);
	double area();
};
rectangle::rectangle(double a, double b)
{
	height = a;
	width = b;
}
isosceles::isosceles(double a, double b)
{
	height = a;
	width = b;
}
double rectangle::area()
{
	return height*width;
}
double isosceles::area()
{
	return height*width;
}
int main()
{
	double a, b;
	double rezultat1, rezultat2;
	cout << "Please enter number for a: ";
	cin >> a;
	cout << "Please enter number for b: ";
	cin >> b;
	rectangle ob1(a,b);
	isosceles ob2(30,40);
	rezultat1=ob1.area();
	rezultat2=ob2.area();
	cout << "Liceto na 1-vata figura e : " << rezultat1<<"\n";
	cout << "Liceto na 2-rata figura e : " << rezultat2<<"\n";

	return 0;
}