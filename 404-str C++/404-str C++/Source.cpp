#include<iostream>
#include<typeinfo>
using namespace std;
class BaseClass{
	//virtual void f(){};

};
class Derived1 :public BaseClass{

};
class Derived2 :public BaseClass{

};

int main1()
{
	int i;
	BaseClass *p, baseob;
	Derived1 ob1;
	Derived2 ob2;
	cout << "Typeid of i is : " << typeid(i).name() << endl;
	p = &baseob;
	cout << "p is pointing to an object of type " << typeid(*p).name() << endl;
	p = &ob1;
	cout << "p is pointing to an object of type " << typeid(*p).name() << endl;
	p = &ob2;
	cout << "p is pointing to an object of type " << typeid(*p).name() << endl;
	return 0;
}