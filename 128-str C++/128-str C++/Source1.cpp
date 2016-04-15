#include<iostream>
using namespace std;
class myclass
{
	int num;
public:
	myclass(int x){ num = x; }
	friend int isneg(myclass a);
};
int isneg(myclass a)
{
	if (a.num < 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int retvalue,retvalue1;
	myclass ob(1),ob1(-6);
	retvalue=isneg(ob1);
	retvalue1=isneg(ob);
	cout << "Retvalue :" << retvalue << "\n";
	cout << "Retvalue1 :" << retvalue1 << "\n";
	return 0;
}