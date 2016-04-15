#include<iostream>
#include<cstdlib>
using namespace std;
class myclass
{
	int *p;
public:
	myclass(int i);
	~myclass(){ delete p; cout << "Destructing \n"; }
	friend int getval(myclass &o);
};
myclass::myclass(int i)
{
	p = new int;
	if (!p)
	{
		cout << "Allocation error\n";
		exit(1);
	}
	*p = i;
	cout << "Construting \n";
}
int getval(myclass &o)
{
	return *o.p;
}

int main()
{
	myclass a(1), b(2);
	cout << getval(a) << " " << getval(b);
	cout << "\n";
	cout << getval(a) << " " << getval(b);
	cout << "\n";
	return 0;
}