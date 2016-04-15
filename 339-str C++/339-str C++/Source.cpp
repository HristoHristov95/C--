#include<iostream>
using namespace std;
class base{
	int x;
public:
	void setx(int i=0){ x = i; }
	int getx(){ return x; }
};
class derived :public base{
	int y;
public:
	void sety(int i=0){ y = i; }
	int gety(){ return y; }
};
int main()
{
	base *p;
	derived *test;
	base ob;
	derived obD;
	p = &ob;
	p->setx(11);
	cout << "The value of X is : " << p->getx() << '\n';
	p = &obD;
	p->setx(22);
	cout << "The value of X is : " << p->getx() << '\n';
	// test = &ob;
	return 0;
}