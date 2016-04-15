#include<iostream>
#include<typeinfo>
#include<cmath>
#include<cstdlib>
using namespace std;
template<class X>class Num{
public:
	X t;
	Num(X i){ t = i; }
	virtual X get_val(){ return t; }
};
template<class X>class Square :public Num<X>{
public:
	Square(X i) :Num<X>(i){}
	X get_val() { return t*t; }
};
template<class X>class Sqrt_root :public Nu<X>{
public:
	Sqrt_root(X i) :Num<X>(i){}
	X get_val(){ return sqrt(static_cast<double>(x)); }
};
Num<double> *generation()
{
	switch (rand() % 2)
	{
	case 0: return new Square<double>(rand() % 100);
	case 1: return new Sqrt_root<double>(rand() % 100);
	}
	return NULL;
}
int  main()
{
	Num<double> ob1(10), *p1;
	Square<double>ob2(100.0), *p2;
	Sqrt_root<double>ob3(999.2), *p3;
	int i;
	cout << "Generate some objects.\n";
	for (i = 0; i < 10; i++)
	{
		p1 = generation();

		p2 = dynamic_cast<Square<double>*>(p1);
		if (p2)cout << "Square object : ";
		p3 = dynamic_cast<Sqrt_root<double>*>(p1);
		if (p3)cout << "Sqrt_root object: ";

		cout << "Value is : " << p1->get_val();
		cout << endl;
	}
	return 0;
}
