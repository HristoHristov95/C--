#include<iostream>
#include<iomanip>
using namespace std;
class num{
public:
	int number;
	num(int i){ number = i; }
	virtual void shownum(){ cout << "The number is NUM class is : " << number << '\n'; }
};
class outhex :public num{
public:
	outhex(int x) : num(x){}
	void shownum(){ cout<<"The number in OUTHEX is : " << hex << number << '\n'; }
};
class outoct :public num{
public:
	outoct(int m) :num(m){}
	void shownum(){ cout << "The number in OUTOCT is : " << oct << number << '\n'; }
};
int main1()
{
	num obj1(10),*p;
	outhex obj2(10);
	outoct obj3(10);
	p = &obj2;
	p->shownum();
	cout << '\n' << '\n';
	p = &obj3;
	p->shownum();
	cout << '\n' << '\n';
	return 0;
}