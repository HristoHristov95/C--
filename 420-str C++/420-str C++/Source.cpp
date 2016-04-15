#include<iostream>
#include<typeinfo>
using namespace std;
class Base{
	virtual void f(){}
};
class derived :public Base{

};
int main()
{
	Base *p, b_ob;
	derived d_ob;
	//p = &b_ob;
	p = dynamic_cast<Base*>(&d_ob);
	cout << "The pointer is pointing to : " << typeid(*p).name() << endl;
	return 0;
}