#include<iostream>
#include<typeinfo>
using namespace std;
class A{
	virtual void f(){}
};
class B :public A{

};
class C :public B{

};
int main()
{
	A *p, a_ob;
	B b_ob;
	C c_ob;
	int i;
	cout << "Enter 0 for A objects, ";
	cout << "1 for B objects or ";
	cout << "2 for C objects.\n";
	cin >> i;
	if (i == 1)
	{
		p = &b_ob; cout << "Using type is : " << typeid(*p).name() << '\n';
	}
	else if (i == 2)
	{
		p = &c_ob; cout << "Using type is : " << typeid(*p).name() << '\n';
	}
	else
	{
		p = &a_ob; cout << "Using type is : " << typeid(*p).name() << '\n';
	}
	cout << "Using type is : " << typeid(*p).name() << '\n';
	return 0;
}