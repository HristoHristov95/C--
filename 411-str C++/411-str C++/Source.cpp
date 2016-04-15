#include<iostream>
#include<typeinfo>
using namespace std;
class B{
	virtual void f(){}
};
class D1 :public B{
	void f(){}
};
class D2 :public B{
	void f(){}
};
int main1()
{
	B *p;
	D2 *o, ob;
	o = &ob;
	p = dynamic_cast<B*>(&ob);
	return 0;
}