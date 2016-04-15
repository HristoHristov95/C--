#include<iostream>
using namespace std;
class pr2;
class pr1
{
	int printing;
public:
	pr1(){ printing = 0; }
	void set_print(int status){ printing = status; }
	friend int inuse(pr1 ob,pr2 ab);
};
class pr2
{
	int printing;
public:
	pr2(){ printing = 0; }
	void set_print(int status){ printing = status; }
	friend int inuse(pr1 ob, pr2 ab);
};
int inuse(pr1 ob, pr2 ab)
{
	if ((ob.printing >0 || ob.printing<0)||(ab.printing>0 || ab.printing<0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int result = -1;
	int a;
	cout << "Enter status for printer (1):";
	cin >> a;
	pr1 ok;
	pr2 ok1;
	ok.set_print(a);
	cout << "Please enter status for printer (2):";
	int b;
	cin >> b;
	ok1.set_print(b);
	result=inuse(ok, ok1);
	if (result == 0)
	{
		cout << "Printer is not in use.\n";
	}
	else
	{
		cout << "Printer is in use.\n";
	}
	return 0;
}