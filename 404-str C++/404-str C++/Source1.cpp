#include<iostream>
#include<typeinfo>
using namespace std;
class B
{
	virtual void f(){}
};
class D1 :public B{
	void f(){}
};
class D2 :public B{
	void f(){}
};
int main()
{
	B *p;
	D2 ob;
	p = &ob;
	cout << "P is now pointing at : " << typeid(*p).name() << endl;

	return 0;
}